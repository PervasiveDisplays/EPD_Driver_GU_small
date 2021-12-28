/*
	demoImageData.h
  DEMO set of Image Data
*/

// Load Global Update Images
#if (SCREEN==154)   //1.54"
#include "image_data\1.54\image_154_152x152_BW.c"
#include "image_data\1.54\image_154_152x152_BWR.c"
#define BW_monoBuffer        (uint8_t *) & image_154_152x152_BW_mono
#define BW_0x00Buffer        (uint8_t *) & image_154_152x152_BW_0x00
#define BWR_blackBuffer      (uint8_t *) & image_154_152x152_BWR_blackBuffer
#define BWR_redBuffer        (uint8_t *) & image_154_152x152_BWR_redBuffer
#elif(SCREEN==213)   //2.13"
#include "image_data\2.13\image_213_212x104_BW.c"
#include "image_data\2.13\image_213_212x104_BWR.c"
#define BW_monoBuffer        (uint8_t *) & image_213_212x104_BW_mono
#define BW_0x00Buffer        (uint8_t *) & image_213_212x104_BW_0x00
#define BWR_blackBuffer      (uint8_t *) & image_213_212x104_BWR_blackBuffer
#define BWR_redBuffer        (uint8_t *) & image_213_212x104_BWR_redBuffer
#elif(SCREEN==266)   //2.66"
#include "image_data\2.66\image_266_296x152_BW.c"
#include "image_data\2.66\image_266_296x152_BWR.c"
#define BW_monoBuffer        (uint8_t *) & image_266_296x152_BW_mono
#define BW_0x00Buffer        (uint8_t *) & image_266_296x152_BW_0x00
#define BWR_blackBuffer      (uint8_t *) & image_266_296x152_BWR_blackBuffer
#define BWR_redBuffer        (uint8_t *) & image_266_296x152_BWR_redBuffer
#elif(SCREEN==271)   //2.71"
#include "image_data\2.71\image_271_264x176_BW.c"
#include "image_data\2.71\image_271_264x176_BWR.c"
#define BW_monoBuffer        (uint8_t *) & image_271_264x176_BW_mono
#define BW_0x00Buffer        (uint8_t *) & image_271_264x176_BW_0x00
#define BWR_blackBuffer      (uint8_t *) & image_271_264x176_BWR_blackBuffer
#define BWR_redBuffer        (uint8_t *) & image_271_264x176_BWR_redBuffer
#elif(SCREEN==287)   //2.87"
#include "image_data\2.87\image_287_296x128_BW.c"
#include "image_data\2.87\image_287_296x128_BWR.c"
#define BW_monoBuffer        (uint8_t *) & image_287_296x128_BW_mono
#define BW_0x00Buffer        (uint8_t *) & image_287_296x128_BW_0x00
#define BWR_blackBuffer      (uint8_t *) & image_287_296x128_BWR_blackBuffer
#define BWR_redBuffer        (uint8_t *) & image_287_296x128_BWR_redBuffer
#elif(SCREEN==370)   //3.70"
#include "image_data\3.70\image_370_416x240_BW.c"
#include "image_data\3.70\image_370_416x240_BWR.c"
#define BW_monoBuffer        (uint8_t *) & image_370_416x240_BW_mono
#define BW_0x00Buffer        (uint8_t *) & image_370_416x240_BW_0x00
#define BWR_blackBuffer      (uint8_t *) & image_370_416x240_BWR_blackBuffer
#define BWR_redBuffer        (uint8_t *) & image_370_416x240_BWR_redBuffer
#elif(SCREEN==420)   //4.2"
#include "image_data\4.20\image_420_400x300_BW.c"	//BW image error 
#include "image_data\4.20\image_420_400x300_BWR.c"
#define BW_monoBuffer        (uint8_t *) & image_420_400x300_BW_mono
#define BW_0x00Buffer        (uint8_t *) & image_420_400x300_BW_0x00
#define BWR_blackBuffer      (uint8_t *) & image_420_400x300_BWR_blackBuffer
#define BWR_redBuffer        (uint8_t *) & image_420_400x300_BWR_redBuffer
#elif(SCREEN==437)  //4.37"
#include "image_data\4.37\image_437_480x176_BW.c"
#include "image_data\4.37\image_437_480x176_BWR.c"
#define BW_monoBuffer        (uint8_t *) & image_437_480x176_BW_mono
#define BW_0x00Buffer        (uint8_t *) & image_437_480x176_BW_0x00
#define BWR_blackBuffer      (uint8_t *) & image_437_480x176_BWR_blackBuffer
#define BWR_redBuffer        (uint8_t *) & image_437_480x176_BWR_redBuffer
#endif