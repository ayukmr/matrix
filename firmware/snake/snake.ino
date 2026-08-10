#include <array>
#include <vector>
#include <utility>
#include <algorithm>

int button1 = 1;
int button2 = 2;

int score = 3;

std::array<int, 6> pins = {18, 19, 20, 21, 22, 23};

std::array<std::array<std::pair<int, int>, 3>, 5> pairs = {{
    {{{2, 0}, {4, 2}, {5, 4}}},
    {{{2, 1}, {4, 0}, {5, 2}}},
    {{{4, 1}, {5, 0}, {3, 2}}},
    {{{4, 3}, {5, 1}, {3, 0}}},
    {{{5, 3}, {3, 1}, {1, 0}}}
}};

std::array<std::array<bool, 6>, 5> leds = {};

std::vector<std::pair<int, int>> snake = {{1, 1}};
std::pair<int, int> dir = {-1, 0};

std::pair<int, int> fruit = {4, 3};

void setup() {
    for (int pin : pins) {
        pinMode(pin, INPUT);
    }

    pinMode(button1, INPUT_PULLUP);
    pinMode(button2, INPUT_PULLUP);
}

void loop() {
    updateSnake();
    updateDir();
    updateMat();
    plex();
}

unsigned long last = 0;

void updateSnake() {
    unsigned long now = millis();

    if (now - last >= 500) {
        last = now;

        std::pair head = snake.front();

        std::pair next = {
            (head.first + dir.first + 6) % 6,
            (head.second + dir.second + 5) % 5
        };
        snake.insert(snake.begin(), next);

        if (snake.size() > score) {
            snake.pop_back();
        }
    }
}

bool b1Fired = false;
bool b2Fired = false;

void updateDir() {
    if (digitalRead(button1) == LOW) {
        if (!b1Fired) {
            dir = {dir.second, -dir.first};
            b1Fired = true;
        }
    } else {
        b1Fired = false;
    }

    if (digitalRead(button2) == LOW) {
        if (!b2Fired) {
            dir = {-dir.second, dir.first};
            b2Fired = true;
        }
    } else {
        b2Fired = false;
    }
}

void updateMat() {
    for (auto& row : leds) {
        row.fill(false);
    }

    for (auto limb : snake) {
        leds[limb.second][limb.first] = true;
    }
}

void plex() {
    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 3; x++) {
            auto [lo, hi] = pairs[y][x];

            for (int i = 0; i < 2; i++) {
                bool on = leds[y][5 - (x * 2 + i)];

                for (int pin : pins) {
                    pinMode(pin, INPUT);
                }

                if (on) {
                    pinMode(pins[lo], OUTPUT);
                    pinMode(pins[hi], OUTPUT);

                    digitalWrite(pins[lo], LOW);
                    digitalWrite(pins[hi], HIGH);
                }

                delayMicroseconds(500);
                std::swap(lo, hi);
            }
        }
    }

    for (int pin : pins) {
        pinMode(pin, INPUT);
    }
}
