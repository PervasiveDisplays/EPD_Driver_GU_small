///
/// @file EPD_Configuration.h
/// @brief Configuration of the options for Pervasive Displays Library Suite
///
/// @details Project Pervasive Displays Library Suite
/// @n Based on highView technology
///
/// 1- List of supported Pervasive Displays screens
/// 2- List of pre-configured boards
/// 3- Register initializations
///
/// @author Pervasive Displays, Inc.
/// @date 25 Nov 2021
///
/// @copyright (c) Pervasive Displays, Inc., 2010-2021
/// @copyright All rights reserved
///
/// * Basic edition: for hobbyists and for personal usage
/// @n Creative Commons Attribution-NonCommercial-ShareAlike 4.0 Unported (CC BY-NC-SA 4.0)
///
/// * Advanced edition: for professionals or organisations, no commercial usage
/// @n All rights reserved
///
/// * Commercial edition: for professionals or organisations, commercial usage
/// @n All rights reserved
///

// SDK
#include "stdint.h"

#ifndef hV_CONFIGURATION_RELEASE
///
/// @brief Release
///
#define hV_CONFIGURATION_RELEASE
\
///
/// @name 1- List of supported Pervasive Displays screens
/// @see https://www.pervasivedisplays.com/products/
/// @{
///
#define eScreen_EPD_t uint32_t ///< screen type
///
/// * Monochrome screens and default colour screens
#define eScreen_EPD_154 (uint32_t)0x1509 ///< reference xE2154CSxxx
#define eScreen_EPD_213 (uint32_t)0x2100 ///< reference xE2213CSxxx
#define eScreen_EPD_266 (uint32_t)0x2600 ///< reference xE2266CSxxx
#define eScreen_EPD_271 (uint32_t)0x2700 ///< reference xE2271CSxxx
#define eScreen_EPD_287 (uint32_t)0x2800 ///< reference xE2287CSxxx
#define eScreen_EPD_370 (uint32_t)0x3700 ///< reference xE2370CSxxx
#define eScreen_EPD_417 (uint32_t)0x4100 ///< reference xE2417CSxxx
#define eScreen_EPD_437 (uint32_t)0x430C ///< reference xE2437CSxxx

/// @}

///
/// @name Frame Frame-buffer sizes
/// @details Frame-buffer size = width * height / 8 * depth, uint32_t
/// @note Only one frame buffer is required.
/// @n Depth = 2 for black-white-red screens and monochrome screens
///

#define frameSize_EPD_EXT3_154 (uint32_t)(2888)
#define frameSize_EPD_EXT3_213 (uint32_t)(2756)
#define frameSize_EPD_EXT3_266 (uint32_t)(5624)
#define frameSize_EPD_EXT3_271 (uint32_t)(5808)
#define frameSize_EPD_EXT3_287 (uint32_t)(4736)
#define frameSize_EPD_EXT3_370 (uint32_t)(12480)
#define frameSize_EPD_EXT3_417 (uint32_t)(15000)
#define frameSize_EPD_EXT3_437 (uint32_t)(10560)

// Screen resolutions for small and mid-sized EPDs
// const uint16_t EPD_idx[] = {0x15, 0x21, 0x26, 0x27, 0x28, 0x37, 0x41, 0x43, 0x58, 0x74};
// const long image_data_size[] = { 2888, 2756, 5624, 5808, 4736, 12480, 15000, 10560, 23040, 48000};


struct LUT_data
{
	uint8_t panelSet[2];
	uint8_t vcomIntrval[1];
	uint8_t vcomDC[1];
	uint8_t PLLframert[1];
	uint8_t lutC[42];
	uint8_t lutWb_W[42];
	uint8_t lutBW_R[42];
	uint8_t lutWW[42];
	uint8_t lutBB_B[42];
	uint8_t vcomIntrval_fix[1];
};

/// @name 2- List of pre-configured boards
/// @{

///
/// @brief Not connected pin
///
#define NOT_CONNECTED (uint8_t)0xff

///
/// @brief Board configuration structure
///

struct pins_t
{
    // uint8_t panelSCL;
    ///< EXT3 pin 1 Black -> +3.3V
    ///< EXT3 pin 2 Brown -> SPI SCK
    uint8_t panelBusy; ///< EXT3 pin 3 Red
    uint8_t panelDC; ///< EXT3 pin 4 Orange
    uint8_t panelReset; ///< EXT3 pin 5 Yellow
    ///< EXT3 pin 6 Green -> SPI MISO
    ///< EXT3 pin 7 Blue -> SPI MOSI
    // uint8_t panelSDA;
    uint8_t panelCS;
    uint8_t panelON_EXT2;
    uint8_t panelSPI43_EXT2;
    uint8_t flashCS;
};

///
/// @brief MSP430 and MSP432 LaunchPad configuration, tested
///
const pins_t boardLaunchPad_EXT3 =
{
    .panelBusy = 11, ///< EXT3 pin 3 Red
    .panelDC = 12, ///< EXT3 pin 4 Orange
    .panelReset = 13, ///< EXT3 pin 5 Yellow
    .panelCS = 19,
    .panelON_EXT2 = NOT_CONNECTED,
    .panelSPI43_EXT2 = NOT_CONNECTED,
    .flashCS = NOT_CONNECTED
};

///
/// @brief MSP430 and MSP432 LaunchPad configuration, tested
///
const pins_t boardLaunchPad_EXT2 =
{
    .panelBusy = 8, ///< EXT3 pin 3 Red
    .panelDC = 9, ///< EXT3 pin 4 Orange
    .panelReset = 10, ///< EXT3 pin 5 Yellow
    .panelCS = 19,
    .panelON_EXT2 = 11,
    .panelSPI43_EXT2 = 17,
    .flashCS = 18
};

///
/// @brief Raspberry Pi Pico with default RP2040 configuration, tested
///
const pins_t boardRaspberryPiPico_RP2040_EXT3 =
{
    .panelBusy = 13, ///< EXT3 pin 3 Red -> GP13
    .panelDC = 12, ///< EXT3 pin 4 Orange -> GP12
    .panelReset = 11, ///< EXT3 pin 5 Yellow -> GP11
    .panelCS = 17,
    .panelON_EXT2 = NOT_CONNECTED,
    .panelSPI43_EXT2 = NOT_CONNECTED,
    .flashCS = 10
};

///
/// @brief Raspberry Pi Pico with default RP2040 configuration, tested
///
const pins_t boardRaspberryPiPico_RP2040_EXT2 =
{
    .panelBusy = 13, ///< EXT3 pin 3 Red -> GP13
    .panelDC = 12, ///< EXT3 pin 4 Orange -> GP12
    .panelReset = 11, ///< EXT3 pin 5 Yellow -> GP11
    .panelCS = 17,
    .panelON_EXT2 = 8,
    .panelSPI43_EXT2 = 7,
    .flashCS = 10
};

///
/// @brief Arduino M0Pro configuration, tested
///
const pins_t boardArduinoM0Pro_EXT3 =
{
    .panelBusy = 4, ///< EXT3 pin 3 Red
    .panelDC = 5, ///< EXT3 pin 4 Orange
    .panelReset = 6, ///< EXT3 pin 5 Yellow
    .panelCS = 8,
    .panelON_EXT2 = NOT_CONNECTED,
    .panelSPI43_EXT2 = NOT_CONNECTED,
    .flashCS = NOT_CONNECTED
};

///
/// @brief Arduino M0Pro configuration, tested
///
const pins_t boardArduinoM0Pro_EXT2 =
{
    .panelBusy = 4, ///< EXT3 pin 3 Red
    .panelDC = 5, ///< EXT3 pin 4 Orange
    .panelReset = 6, ///< EXT3 pin 5 Yellow
    .panelCS = 8,
    .panelON_EXT2 = 11,
    .panelSPI43_EXT2 = 9,
    .flashCS = NOT_CONNECTED
};
/// @}

///
/// @name 3- Register initializations
/// @{
///

//0x00, soft-reset, temperature, active temp, PSR0, PSR1
const uint8_t register_data_mid[] = { 0x00, 0x0e, 0x19, 0x02, 0x0f, 0x89 };	// 4.2"
const uint8_t register_data_sm[] = { 0x00, 0x0e, 0x19, 0x02, 0xcf, 0x8d };	// other sizes

/// @}

#endif // hV_CONFIGURATION_RELEASE
