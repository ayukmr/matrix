#include <array>
#include <utility>
#include <algorithm>

std::array<int, 6> pins = {1, 3, 4, 5, 6, 7};

std::array<std::array<std::pair<int, int>, 3>, 5> pairs = {{
    {{{2, 0}, {4, 2}, {5, 4}}},
    {{{2, 1}, {4, 0}, {5, 2}}},
    {{{4, 1}, {5, 0}, {3, 2}}},
    {{{4, 3}, {5, 1}, {3, 0}}},
    {{{5, 3}, {3, 1}, {1, 0}}}
}};

std::array<std::array<bool, 6>, 5> leds{};

void setup() {
    for (int pin : pins) {
        pinMode(pin, OUTPUT);
    }
}

void loop() {
    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 3; x++) {
            int hi, lo;
            std::tie(hi, lo) = pairs[y][x];

            for (int i = 0; i < 2; i++) {
                bool on = leds[y][5 - (x * 2 + i)];

                digitalWrite(pins[hi], on ? HIGH : LOW);
                digitalWrite(pins[lo], on ? LOW : HIGH);

                delay(10);
                std::swap(hi, lo);
            }
        }
    }
}
