#include "walk.h"

#include <SPI.h>
#include <TFT_eSPI.h> // Hardware-specific library
TFT_eSPI tft = TFT_eSPI();

void setup() {

  tft.init();
  tft.setRotation(1);

  tft.setSwapBytes(true);
  tft.fillScreen(TFT_WHITE);
  
}

int vert =0;
void loop() {

  for(int i=0;i<frames;i++)
  {
    delay(40);
    tft.pushImage(vert, 15,animation_width  , animation_height, walk[i]);
    vert+=3;
    if(vert>=479)
      vert=0;
  }

}