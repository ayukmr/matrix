#include <array>
#include <utility>
#include <algorithm>

std::array<int, 6> pins = {4, 5, 6, 7, 8, 9};

std::array<std::pair<int, int>, 15> pairs = {
    {2, 0}, {4, 2}, {5, 4},
    {2, 1}, {4, 0}, {5, 2},
    {4, 1}, {5, 0}, {3, 2},
    {4, 3}, {5, 1}, {3, 0},
    {5, 3}, {3, 1}, {1, 0}
};

std::array<bool, 30> leds{};

void setup() {
    for (int pin : pins) {
        pinMode(pin, OUTPUT);
    }
}

void loop() {
    for (int i = 0; i < 15; i++) {
        int hi, lo;
        std::tie(hi, lo) = pairs[i];

        for (int j = 0; j < 2; j++) {
            bool on = leds[i * 2 + j];

            digitalWrite(pins[hi], on ? HIGH : LOW);
            digitalWrite(pins[lo], on ? LOW : HIGH);

            delay(10);
            std::swap(hi, lo);
        }
    }
}

void led(int x, int y, bool v) {
    leds[x + y * 6] = v;
}
