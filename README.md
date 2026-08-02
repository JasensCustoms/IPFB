<p align="center">
  <img alt="Jasen's Customs Logo" src="https://jasenscustoms.com/cdn/shop/files/jcc_logo.png?width=125" />
</p>

# Integrated Pico Fighting Board

The [Integrated Pico Fighting Board](https://jasenscustoms.com/collections/fight-stick-pcbs/products/integrated-pico-fighting-board-gp2040ce) (IPFB) is an arcade fight stick PCB design. This is a solely **hardware** project that is designed to easily run **unmodified** GP2040-CE firmware. That has always been the intent.

![Integrated Pico Fighting Board PCB](https://github.com/user-attachments/assets/0402e3fc-74b1-4511-bbe3-5bbda8b60b5d)

It was designed to follow the Fighting Game Community Layout Generally Accepted Standard originally pioneered by AkiShop. This design was adopted by Brook for most of their fighting boards at the behest and urging of myself and a few other makers in the space early in Brook's entry to the market. The goal was to make the IPFB a low-cost, easy drop-in replacement for the PS360+ or any Brook board if a person so chose.

## Design Files

All design files are made using Autodesk EagleCAD and will only be published in that format. Gerbers and centroids will not be provided. A basic BOM will also be provided. This is to allow hobbyists with some design experience to use their choice of board house to produce their PCBs. There are many to choose from, and it is not our intent to influence your choice. All files are provided as-is without any guarantee of support or help.

## Sale Channels

**Note:** The only entity that may sell the Integrated Pico Fighting Board design is at the link above. If you wish to offer this design commercially, please reach out to [jasenhicks@jasenscustoms.com](mailto:jasenhicks@jasenscustoms.com). If others are approved to sell the design, they will be listed here. I encourage you to inform me if you see unapproved commercial sale of the IPFB. As of now, I have chosen to stop production of the IPFB. A full discussion can be found on our Discord, linked below.

## GPIO Settings

Main buttons and directions:

- GPIO 0: Left
- GPIO 1: Up
- GPIO 2: Down
- GPIO 3: Right
- GPIO 4: HOME (PS)
- GPIO 5: SELECT (SHARE)
- GPIO 6: START
- GPIO 7: Punch 1
- GPIO 8: Punch 2
- GPIO 9: Punch 3
- GPIO 10: Punch 4
- GPIO 11: Kick 1
- GPIO 12: Kick 2
- GPIO 13: Kick 3
- GPIO 14: Kick 4

RGB data channel:

- GPIO 15: RGB Data

Player LEDs (Version 2.0+ PCBs can designate these as other functions, as the resistor on the line has been removed):

- GPIO 16: Player 1 LED
- GPIO 17: Player 2 LED
- GPIO 18: Player 3 LED
- GPIO 19: Player 4 LED

Modern controller buttons and turbo functions:

- GPIO 20: Touch Pad Click
- GPIO 21: L3
- GPIO 22: R3
- GPIO 23: TURBO LED (Version 2.0+ PCBs can designate this as another function, as the resistor on the line has been removed)
- GPIO 28: TURBO KEY

I2C lines (both pulled high to 3.3V via resistor):

- GPIO 26: SDA
- GPIO 27: SCL

USB passthrough GPIO:

- GPIO 24: DATA PLUS
- GPIO 25: DATA MINUS

## Firmware

No custom firmware is needed or provided for the Integrated Pico Fighting Board. Because the pin definitions are derived from FeralAI's carrier board, firmware for the Pico Fighting Board is expected to be compatible with minimal settings changes. Steps to customize GP2040-CE settings to fully utilize Turbo and PlayStation authentication are indicated below.

### Settings

To manually adjust the PicoFightingBoard firmware to work perfectly with the IPFB, just adjust these settings.

#### Turbo

- Add-on Configuration:
  - Enable turbo
  - Turbo LED Pin 23
  - Save
- Pin Mappings:
  - Set pin 28 to Turbo
  - Save

#### PS5 (or PS4)

- Input Mode Settings:
  - Current Input Mode: PS5 (or PS4)
  - Authentication Settings: Host USB
- Boot Input Modes:
  - Set B4 to PS5 (or PS4)

#### XBone

- Boot Input Modes:
  - Set R1 to XBone

## Support

All files are provided as-is and without warranty.

For issues with Integrated Pico Fighting Board hardware that was bought and sold via JasensCustoms.com, please reach out via the [Jasen's Customs Discord](https://discord.gg/UJmNMunTqa).

To discuss GP2040-CE firmware including features, issues, or anything else, please join the [OpenStick GP2040-CE Discord](https://discord.gg/k2pxhke7q8) or [create a GitHub issue](https://github.com/OpenStickCommunity/GP2040-CE/issues/new).

Hardware change suggestions can be submitted as GitHub issues on this repository, and will be reviewed on a case-by-case basis by the JasensCustoms.com team. Not all suggestions will be implemented.

## Acknowledgements

- [RegentOfOrigin](https://github.com/RegentOfOrigin) for helping manage the GitHub
- [wrennnnnn](https://github.com/wrennnnnn) for the initial management and compiling of the FW with the IPFB Config.h file
- [The entire Open Stick Community](https://github.com/OpenStickCommunity) for the GP2040-CE firmware
- Particularly [FeralAI](https://github.com/FeralAI) for the initial work in designing and making the [PicoFightingBoard](https://github.com/FeralAI/PicoFightingBoard) available

Copyright for the Pico Fighting Board is held by FeralAI, 2021.
Copyright for GP2040-CE is held by The Open Stick Community, 2024.

## Community & Discussion

Questions, ideas, or just want to talk builds? Join the Jasen's Customs Discord: [discord.gg/UJmNMunTqa](https://discord.gg/UJmNMunTqa)

## License — Personal, Non-Commercial Use Only

Copyright © 2026 Jasen Hicks ([www.JasensCustoms.com](https://www.JasensCustoms.com)). All rights reserved.

These designs are provided **solely for personal, private, non-commercial use.** You may build units for yourself, modify the designs for your own projects, and share the unmodified files (with attribution and the license intact). You may **not** sell parts, kits, units, or derivatives, manufacture for profit, or use these files commercially in any way.

Full terms — including the **No Warranty** and **No Support** notices — are in [LICENSE.md](LICENSE.md). By downloading, copying, or using any file in this repository, you agree to them.
