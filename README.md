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

| Qty | Value                     | LCSC     | Link                                                                    | Price   |
|:----|:--------------------------|:---------|:------------------------------------------------------------------------|:--------|
| 2   | 2.2 uF                    | C23630   | https://jlcpcb.com/partdetail/24366-CL10A225KO8NNNC/C23630              | $0.0055 |
| 1   | 1 uF                      | C15849   | https://jlcpcb.com/partdetail/16531-CL10A105KB8NNNC/C15849              | $0.0048 |
| 1   | 22 uF                     | C59461   | https://jlcpcb.com/partdetail/60514-CL10A226MQ8NRNC/C59461              | $0.0083 |
| 1   | 0.1 uF                    | C14663   | https://jlcpcb.com/partdetail/YAGEO-CC0603KRX7R9BB104/C14663            | $0.0024 |
| 32  | LED_Small                 | C2286    | https://jlcpcb.com/partdetail/Hubei_KENTOElec-KT0603R/C2286             | $0.0058 |
| 1   | Conn_01x02                | C160352  | https://jlcpcb.com/partdetail/JST-B2B_PH_SM4_TB_LF_SN/C160352           | $0.394  |
| 1   | USB_C_Receptacle_USB2.0   | C165948  | https://jlcpcb.com/partdetail/Korean_HropartsElec-TYPE_C_31_M12/C165948 | $0.1731 |
| 2   | 5.1k                      | C25905   | https://jlcpcb.com/partdetail/26648-0402WGF5101TCE/C25905               | $0.0006 |
| 2   | 10k                       | C25744   | https://jlcpcb.com/partdetail/26487-0402WGF1002TCE/C25744               | $0.0006 |
| 8   | 470                       | C25117   | https://jlcpcb.com/partdetail/25860-0402WGF4700TCE/C25117               | $0.0006 |
| 2   | 22                        | C25092   | https://jlcpcb.com/partdetail/25835-0402WGF220JTCE/C25092               | $0.0006 |
| 4   | SW_Push                   | C221897  | https://jlcpcb.com/partdetail/CK-PTS810SJS250SMTRLFS/C221897            | $0.4246 |
| 1   | ESP32-S3-MINI-1U          | C2980299 | https://jlcpcb.com/partdetail/3401551-ESP32_S3_MINI_1UN8/C2980299       | $4.5925 |
| 1   | XC6206PxxxMR              | C5446    | https://jlcpcb.com/partdetail/TorexSemicon-XC6206P332MRG/C5446          | $0.0905 |
