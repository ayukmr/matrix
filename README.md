# matrix

<img src="https://static.ayukmr.com/repos/matrix/3.png" height="400">

Charlieplexed LED matrix controlled by an ESP32-C6-MINI-1U.

This is intended to both be a standalone board (with two buttons as inputs) and a test of these specific components for use in more ambitious future projects.
Additionally, charlieplexing was a new concept for me, which is why I wanted to first try it out in this format.
The ESP32 was selected for its compatibility with Arduino firmware, especially having had previous experience working with the microcontroller.
Six GPIO pins are allocated for the matrix, and through charlieplexing, the board controls 30 LEDs (6×5).
The included firmware provides an API for controlling the matrix through a multiplexing routine.

## Schematic

<img src="https://static.ayukmr.com/repos/matrix/1.png" height="400">

## PCB

<img src="https://static.ayukmr.com/repos/matrix/2.png" height="400">
