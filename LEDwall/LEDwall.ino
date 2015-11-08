// VHS LED wall, 
// Last updated: Nov 7, 2015 
// Created by: Steven Smethurst 

#include "FastLED.h"

#define BRIGHTNESS  64
#define LED_TYPE    WS2812
#define COLOR_ORDER GRB

#define NUM_LEDS_PER_PANEL  64

#define NUM_LEDS_TOP        NUM_LEDS_PER_PANEL * 1 
#define NUM_LEDS_MIDDLE     NUM_LEDS_PER_PANEL * 4
#define NUM_LEDS_BOTTOM     NUM_LEDS_PER_PANEL * 4 
#define NUM_LEDS_TOTAL      NUM_LEDS_TOP + NUM_LEDS_MIDDLE + NUM_LEDS_BOTTOM


CRGB leds[NUM_LEDS_TOTAL];

// For mirroring strips, all the "special" stuff happens just in setup.  We
// just addLeds multiple times, once for each strip
void setup() {
  FastLED.addLeds<LED_TYPE, 7, COLOR_ORDER>(leds, NUM_LEDS_TOP);
  FastLED.addLeds<LED_TYPE, 8, COLOR_ORDER>(leds+NUM_LEDS_TOP, NUM_LEDS_MIDDLE);
  FastLED.addLeds<LED_TYPE, 9, COLOR_ORDER>(leds+NUM_LEDS_TOP+NUM_LEDS_MIDDLE, NUM_LEDS_BOTTOM);
  
}

void loop() {
  static uint8_t hue = 0;
  for(int i = 0; i < NUM_LEDS_TOTAL; i++) {
    leds[i] = CHSV( (hue + i) % 255, 255, 255);
  }
  delay(1);
  FastLED.show();
  hue++; 
}
