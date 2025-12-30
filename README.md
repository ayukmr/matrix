# matrix

<img src="https://static.ayukmr.com/repos/matrix/3.png" height="400">

Charlieplexed LED matrix controlled by an ESP32-S3-MINI-1U.

This is intended to both be a standalone board (with two buttons as inputs) and a test of these specific components for use in more ambitious future projects.
Additionally, charlieplexing was a new concept for me, which is why I wanted to first try it out in this format.
The ESP32 was selected for its compatibility with Arduino firmware, especially having had previous experience working with the microcontroller.
Six GPIO pins are allocated for the matrix, and through charlieplexing, the board controls 30 LEDs (6×5).
The included firmware provides an API for controlling the matrix through a multiplexing routine.

## Schematic

<img src="https://static.ayukmr.com/repos/matrix/1.png" height="400">

## PCB

<img src="https://static.ayukmr.com/repos/matrix/2.png" height="400">

## BOM

| Qty | Value | LCSC | Link | Price |
|:----|:------|:------------|:-----|:------|
| 2 | 2.2 uF | C1607 | https://jlcpcb.com/partdetail/1959-CL10A225KP8NNNC/C1607 | $0.0062 |
| 1 | 1 uF | C26413 | https://jlcpcb.com/partdetail/27157-CL10A105KP8NNNC/C26413 | $0.0054 |
| 1 | 22 uF | C86295 | https://jlcpcb.com/partdetail/87471-CL10A226MP8NUNE/C86295 | $0.0148 |
| 1 | 0.1 uF | C424828 | https://jlcpcb.com/partdetail/Walsin_TechCorp-0603B104K100CT/C424828 | $0.0042 |
| 32 | LED_Small | C84263 | https://jlcpcb.com/partdetail/85432-NCD0603R1/C84263 | $0.0093 |
| 1 | Conn_01x02 | C160352 | https://jlcpcb.com/partdetail/JST-B2B_PH_SM4_TB_LF_SN/C160352 | $0.394 |
| 1 | USB_C_Receptacle_USB2.0_14P | C165948 | https://jlcpcb.com/partdetail/Korean_HropartsElec-TYPE_C_31_M12/C165948 | $0.1731 |
| 2 | 5.1k | C14677 | https://jlcpcb.com/partdetail/YAGEO-RC0603JR075K1L/C14677 | $0.0013 |
| 2 | 10k | C95204 | https://jlcpcb.com/partdetail/YAGEO-RT0603BRD0710KL/C95204 | $0.0209 |
| 8 | 470 | C114433 | https://jlcpcb.com/partdetail/YAGEO-RC0603JR07470RL/C114433 | $0.0012 |
| 2 | 22 | C107701 | https://jlcpcb.com/partdetail/YAGEO-RC0603FR0722RL/C107701 | $0.0013 |
| 4 | SW_Push | C221897 | https://jlcpcb.com/partdetail/CK-PTS810SJS250SMTRLFS/C221897 | $0.4246 |
| 1 | ESP32-S3-MINI-1U | C2980299 | https://jlcpcb.com/partdetail/3401551-ESP32_S3_MINI_1UN8/C2980299 | $4.5925 |
| 1 | AP2112K-3.3 | C23380830 | https://jlcpcb.com/partdetail/TECHPUBLIC-AP2112K_33TRG1/C23380830 | $0.0905 |
