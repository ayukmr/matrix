#include <array>
#include <utility>
#include <algorithm>

int button1 = 1;
int button2 = 2;

std::array<int, 6> pins = {18, 19, 20, 21, 22, 23};

void setup() {
    for (int pin : pins) {
        pinMode(pin, INPUT);
    }

    pinMode(button1, INPUT_PULLUP);
    pinMode(button2, INPUT_PULLUP);
}

void loop() {
    bool b1 = digitalRead(button1) == LOW;
    bool b2 = digitalRead(button2) == LOW;

    if (b1) {
        pinMode(pins[5], OUTPUT);
        pinMode(pins[4], OUTPUT);

        digitalWrite(pins[5], HIGH);
        digitalWrite(pins[4], LOW);

        delayMicroseconds(500);
    }

    if (b2) {
        pinMode(pins[5], OUTPUT);
        pinMode(pins[4], OUTPUT);

        digitalWrite(pins[5], LOW);
        digitalWrite(pins[4], HIGH);

        delayMicroseconds(500);
    }

    pinMode(pins[5], INPUT);
    pinMode(pins[4], INPUT);
}
