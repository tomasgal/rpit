#include <itead_GFX.h>
#include <itead_SSD1306.h>
#define OLED_RESET 16 
#define DELAY 200
SSD1306 display(OLED_RESET);
int i=0;

void setup()   {                

  display.begin(SSD1306_SWITCHCAPVCC, 0x3c);     // initialize with the I2C addr 0x3C (for the 128x64)
  display.clearDisplay();   // clears the screen and buffer

  display.setTextSize(3);
  display.setTextColor(WHITE);
  display.setCursor(1,2);
  display.println("RPiFM"); 
  display.setCursor(1,26); 
  display.setTextSize(1);
  display.println("RPiRadui 100MHz"); 
  display.setCursor(1,36); 
