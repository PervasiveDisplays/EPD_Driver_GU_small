/*
  EPD_Driver_demo
  This is a demo sketch for the 2.71" small EPD from Pervasive Displays, Inc.
  The aim of this demo and the library used is to introduce CoG usage and global update functionality.
  
  Hardware Suggested:
  * Launchpad MSP432P401R or (Tiva-C) with TM4C123/Arduino M0 Pro/Raspberry Pi Pico
  * EPD Extension Kit (EXT2 or EXT3)
  * 2.71" EPD
  * 20-pin rainbow jumper cable
*/

#include <EPD_Driver.h>

// DEMO Image Set <Comment out when in User Mode>
// Screen Size: 154, 213, 266, 271, 287, 370, 420, 437
#define SCREEN 437
#include "globalupdate_src/demoImageData.h"
// User Mode Image Set
//#include "globalupdate_src/userImageData.h"
//------------------------------------------------------------

void setup()
{
  EPD_Driver epdtest(eScreen_EPD_271, boardLaunchPad_EXT3);
  // EPD_Driver epdtest(eScreen_EPD_271, boardRaspberryPiPico_RP2040_EXT3);
  
  // Initialize CoG
  epdtest.COG_initial();

  // Global Update Call
  epdtest.globalUpdate(BW_monoBuffer, BW_0x00Buffer);

  // Turn off CoG
  epdtest.COG_powerOff();
}

void loop()
{
  delay(1000);
}
