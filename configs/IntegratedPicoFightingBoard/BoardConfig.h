/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include "enums.pb.h"
#include "class/hid/hid.h"

#define BOARD_CONFIG_LABEL "Integrated Pico Fighting Board"

/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2024 OpenStickCommunity (gp2040-ce.info)
 */

#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include "enums.pb.h"
#include "class/hid/hid.h"

#define BOARD_CONFIG_LABEL "Pico Fighting Board"

// Main pin mapping Configuration
//                                                  // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define GPIO_PIN_01 GpioAction::BUTTON_PRESS_UP     // UP     | UP     | UP      | UP       | UP     | UP     |
#define GPIO_PIN_02 GpioAction::BUTTON_PRESS_DOWN   // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define GPIO_PIN_03 GpioAction::BUTTON_PRESS_RIGHT  // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  |
#define GPIO_PIN_00 GpioAction::BUTTON_PRESS_LEFT   // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   |
#define GPIO_PIN_11 GpioAction::BUTTON_PRESS_B1     // B1     | A      | B       | Cross    | 2      | K1     |
#define GPIO_PIN_12 GpioAction::BUTTON_PRESS_B2     // B2     | B      | A       | Circle   | 3      | K2     |
#define GPIO_PIN_13 GpioAction::BUTTON_PRESS_R2     // R2     | RT     | ZR      | R2       | 8      | K3     |
#define GPIO_PIN_14 GpioAction::BUTTON_PRESS_L2     // L2     | LT     | ZL      | L2       | 7      | K4     |
#define GPIO_PIN_07 GpioAction::BUTTON_PRESS_B3     // B3     | X      | Y       | Square   | 1      | P1     |
#define GPIO_PIN_08 GpioAction::BUTTON_PRESS_B4     // B4     | Y      | X       | Triangle | 4      | P2     |
#define GPIO_PIN_09 GpioAction::BUTTON_PRESS_R1     // R1     | RB     | R       | R1       | 6      | P3     |
#define GPIO_PIN_10 GpioAction::BUTTON_PRESS_L1     // L1     | LB     | L       | L1       | 5      | P4     |
#define GPIO_PIN_05 GpioAction::BUTTON_PRESS_S1     // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define GPIO_PIN_06 GpioAction::BUTTON_PRESS_S2     // S2     | Start  | Plus    | Start    | 10     | Start  |
#define GPIO_PIN_21 GpioAction::BUTTON_PRESS_L3     // L3     | LS     | LS      | L3       | 11     | LS     |
#define GPIO_PIN_22 GpioAction::BUTTON_PRESS_R3     // R3     | RS     | RS      | R3       | 12     | RS     |
#define GPIO_PIN_04 GpioAction::BUTTON_PRESS_A1     // A1     | Guide  | Home    | PS       | 13     | ~      |
#define GPIO_PIN_20 GpioAction::BUTTON_PRESS_A2     // A2     | ~      | Capture | ~        | 14     | ~      |

// Setting GPIO pins to assigned by add-on
//
#define GPIO_PIN_15 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_16 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_17 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_18 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_19 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_24 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_25 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_26 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_27 GpioAction::ASSIGNED_TO_ADDON

// Keyboard Mapping Configuration
//                                            // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define KEY_DPAD_UP     HID_KEY_ARROW_UP      // UP     | UP     | UP      | UP       | UP     | UP     |
#define KEY_DPAD_DOWN   HID_KEY_ARROW_DOWN    // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define KEY_DPAD_RIGHT  HID_KEY_ARROW_RIGHT   // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  |
#define KEY_DPAD_LEFT   HID_KEY_ARROW_LEFT    // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   |
#define KEY_BUTTON_B1   HID_KEY_SHIFT_LEFT    // B1     | A      | B       | Cross    | 2      | K1     |
#define KEY_BUTTON_B2   HID_KEY_Z             // B2     | B      | A       | Circle   | 3      | K2     |
#define KEY_BUTTON_R2   HID_KEY_X             // R2     | RT     | ZR      | R2       | 8      | K3     |
#define KEY_BUTTON_L2   HID_KEY_V             // L2     | LT     | ZL      | L2       | 7      | K4     |
#define KEY_BUTTON_B3   HID_KEY_CONTROL_LEFT  // B3     | X      | Y       | Square   | 1      | P1     |
#define KEY_BUTTON_B4   HID_KEY_ALT_LEFT      // B4     | Y      | X       | Triangle | 4      | P2     |
#define KEY_BUTTON_R1   HID_KEY_SPACE         // R1     | RB     | R       | R1       | 6      | P3     |
#define KEY_BUTTON_L1   HID_KEY_C             // L1     | LB     | L       | L1       | 5      | P4     |
#define KEY_BUTTON_S1   HID_KEY_5             // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define KEY_BUTTON_S2   HID_KEY_1             // S2     | Start  | Plus    | Start    | 10     | Start  |
#define KEY_BUTTON_L3   HID_KEY_EQUAL         // L3     | LS     | LS      | L3       | 11     | LS     |
#define KEY_BUTTON_R3   HID_KEY_MINUS         // R3     | RS     | RS      | R3       | 12     | RS     |
#define KEY_BUTTON_A1   HID_KEY_9             // A1     | Guide  | Home    | PS       | 13     | ~      |
#define KEY_BUTTON_A2   HID_KEY_F2            // A2     | ~      | Capture | ~        | 14     | ~      |
#define KEY_BUTTON_FN   -1                    // Hotkey Function                                        |


#define USB_PERIPHERAL_ENABLED 1
#define USB_PERIPHERAL_PIN_DPLUS 24

#define DEFAULT_INPUT_MODE_R1 INPUT_MODE_XBONE
#define DEFAULT_INPUT_MODE_B4 INPUT_MODE_PS5
#define DEFAULT_PS5AUTHENTICATION_TYPE INPUT_MODE_AUTH_TYPE_USB

#define PSPASSTHROUGH_ENABLED 1

#define XBONEPASSTHROUGH_ENABLED 1


// This is the SOCD section.
// SOCD stands for `simultaneous opposing cardinal directions`.
// There are three options for `DEFAULT_SOCD_MODE` currently:
// 1 - `SOCD_MODE_NEUTRAL` - This is a neutral SOCD.  EG. when you press `up` + `down` no input will be registered.
// 2 - `SOCD_MODE_UP_PRIORITY` - This is up priority SOCD.  EG. when you press `up` + `down` `up` will be registered.
// 3 - `SOCD_MODE_SECOND_INPUT_PRIORITY` - This is last priority SOCD.  EG. when you press and hold `up` then press `down` `down` will be registered.
// 4 - `SOCD_MODE_FIRST_INPUT_PRIORITY` - This is first priority SOCD.  EG. when you press and hold `up` then press `down` `up` will be registered.

#define DEFAULT_SOCD_MODE SOCD_MODE_NEUTRAL
// SOCD Slider Slot Defaults
#define SLIDER_SOCD_SLOT_ONE SOCD_MODE_UP_PRIORITY
#define SLIDER_SOCD_SLOT_TWO  SOCD_MODE_SECOND_INPUT_PRIORITY
#define SLIDER_SOCD_SLOT_DEFAULT SOCD_MODE_NEUTRAL

#define DEFAULT_FORCED_SETUP_MODE FORCED_SETUP_MODE_OFF // 	FORCED_SETUP_MODE_OFF, FORCED_SETUP_MODE_LOCK_MODE_SWITCH, FORCED_SETUP_MODE_LOCK_WEB_CONFIG, FORCED_SETUP_MODE_LOCK_BOTH
#define DEFAULT_LOCK_HOTKEYS false // or true


// This is the LEDs section.
#define TURBO_ENABLED 1
#define PIN_BUTTON_TURBO 28
#define TURBO_LED_PIN 23

#define BOARD_LEDS_PIN 15

#define LED_BRIGHTNESS_MAXIMUM 150
#define LED_BRIGHTNESS_STEPS 5
#define LED_FORMAT LED_FORMAT_GRB
#define LEDS_PER_PIXEL 2

#define LEDS_DPAD_LEFT   11
#define LEDS_DPAD_DOWN   10
#define LEDS_DPAD_RIGHT  9
#define LEDS_DPAD_UP     0
#define LEDS_BUTTON_B3   8
#define LEDS_BUTTON_B4   7
#define LEDS_BUTTON_R1   6
#define LEDS_BUTTON_L1   5
#define LEDS_BUTTON_B1   1
#define LEDS_BUTTON_B2   2
#define LEDS_BUTTON_R2   3
#define LEDS_BUTTON_L2   4
#define LEDS_BUTTON_S1   -1
#define LEDS_BUTTON_S2   -1
#define LEDS_BUTTON_L3   -1
#define LEDS_BUTTON_R3   -1
#define LEDS_BUTTON_A1   -1
#define LEDS_BUTTON_A2   -1


// This is the Player LED section.
// In this section you can specify if Player LEDs will be active, and, if active, which pins will be used for them.
// The defualt is `PLED_TYPE_NONE` which will turn the Player LEDs off.
// The default pin for each Player LED is `-1` which disables it.
// To enable a `PLED#_PIN`, replace the `-1` with the GPIO pin number that is desired.
// There are three options for `PLED_TYPE` currently:
// 1 - `PLED_TYPE_NONE` - This will disable the Player LEDs
// 2 - `PLED_TYPE_PWM` - This will enable the Player LEDs ( it is recommended to run through 3V3(OUT) with a resistor)
// 3 - `PLED_TYPE_RGB` - This will enable the Player LEDs as addressible RGB LEDs (please not that this has not been implemented yet)

#define PLED_TYPE PLED_TYPE_PWM
#define PLED1_PIN 16
#define PLED2_PIN 17
#define PLED3_PIN 18
#define PLED4_PIN 19


// This is the Analog section.
// In this section you can specify if Analog is enabled, and, if endabled, which pins will be used for it.
// The default for `ANALOG_ADC_VRX` and `ANALOG_ADC_VRY` is `-1` which disables them.
// To enable a `ANALOG_ADC_VRX` and `ANALOG_ADC_VRY`, replace the `-1` with the GPIO pin numbers that are desired. 

#define ANALOG_ADC_1_VRX -1
#define ANALOG_ADC_1_VRY -1
#define ANALOG_ADC_1_MODE DPAD_MODE_LEFT_ANALOG
#define ANALOG_ADC_1_INVERT INVERT_NONE

#define ANALOG_ADC_2_VRX -1
#define ANALOG_ADC_2_VRY -1
#define ANALOG_ADC_2_MODE DPAD_MODE_RIGHT_ANALOG
#define ANALOG_ADC_2_INVERT INVERT_NONE

// This is the I2C Display section (commonly known as the OLED display section).

#define HAS_I2C_DISPLAY 1
#define I2C0_ENABLED
#define I2C0_PIN_SDA 26
#define I2C0_PIN_SCL 27

// Reverse Button section
#define REVERSE_LED_PIN -1
#define REVERSE_UP_DEFAULT 1
#define REVERSE_DOWN_DEFAULT 1
#define REVERSE_LEFT_DEFAULT 1
#define REVERSE_RIGHT_DEFAULT 1

#define BUTTON_LAYOUT BUTTON_LAYOUT_STICKLESS
#define BUTTON_LAYOUT_RIGHT BUTTON_LAYOUT_STICKLESSB
#define SPLASH_MODE SPLASH_MODE_NONE
#define SPLASH_CHOICE SPLASH_CHOICE_MAIN
#define SPLASH_DURATION 7500 // Duration in milliseconds

#endif
