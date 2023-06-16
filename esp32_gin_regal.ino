#include <Adafruit_NeoPixel.h>

#define PIN_1            0
#define PIN_2            26
#define PIN_3            32
#define PIN_4            17
#define PIN_5            14

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      8

Adafruit_NeoPixel pixel_1 = Adafruit_NeoPixel(NUMPIXELS, PIN_1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixel_2 = Adafruit_NeoPixel(NUMPIXELS, PIN_2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixel_3 = Adafruit_NeoPixel(NUMPIXELS, PIN_3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixel_4 = Adafruit_NeoPixel(NUMPIXELS, PIN_4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixel_5 = Adafruit_NeoPixel(NUMPIXELS, PIN_5, NEO_GRB + NEO_KHZ800);

int delayval = 1000; // delay for a second

void setup() 
  {
  pixel_1.begin(); // This initializes the NeoPixel library.
  pixel_2.begin();
  pixel_3.begin(); 
  pixel_4.begin(); 
  pixel_5.begin();
}

void loop() 
{
  for(int i=0;i<NUMPIXELS;i++)
  {
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixel_1.setBrightness(100);
    pixel_2.setBrightness(150);
    pixel_3.setBrightness(100);
    pixel_4.setBrightness(80);
    pixel_5.setBrightness(100);
    
    pixel_1.setPixelColor(i, pixel_1.Color(0,128,255)); // Moderately bright blue color.
    pixel_2.setPixelColor(i, pixel_2.Color(255,0,0)); // Moderately bright red color.
    pixel_3.setPixelColor(i, pixel_3.Color(255,255,51)); // Moderately bright orange color.
    pixel_4.setPixelColor(i, pixel_4.Color(255,255,255)); // Moderately bright white color.
    pixel_5.setPixelColor(i, pixel_5.Color(255,128,0)); // Moderately bright yellow color.
    
    pixel_1.show(); // This sends the updated pixel color to the hardware.
    pixel_2.show(); // This sends the updated pixel color to the hardware.
    pixel_3.show(); // This sends the updated pixel color to the hardware.
    pixel_4.show(); // This sends the updated pixel color to the hardware.
    pixel_5.show(); // This sends the updated pixel color to the hardware.
    
    delay(delayval);
  }
}
