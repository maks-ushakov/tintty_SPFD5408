#include "Arduino.h"

// #include <MCUFRIEND_kbv.h>
// library SPFD5408 

// #include "TFT_Display.h"    // Core graphics library
#include <SPFD5408_Adafruit_TFTLCD.h>

// extern TFT_Display tft;
extern Adafruit_TFTLCD tft;

// @todo move?
#define ILI9341_WIDTH 240
#define ILI9341_HEIGHT 320

#define KEYBOARD_HEIGHT 92

void input_init();
void input_idle();
