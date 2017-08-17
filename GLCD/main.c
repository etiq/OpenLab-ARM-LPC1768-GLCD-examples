#include <lpc17xx.h>
#include "KS0108.h"
#include "graphic.h"
#include "delay.h"
#include "bitmap.h"

int main()
{
	SystemInit();
	GLCD_Initalize();
	GLCD_ClearScreen();
	
	while(1){
	GLCD_Rectangle(30, 12, 70,40);
	delay_ms(2000);
	GLCD_ClearScreen();
	GLCD_Circle(64, 32, 28);
  delay_ms(2000);
	GLCD_ClearScreen();
	GLCD_GoTo(0,0);
	GLCD_WriteString("TESTING GLCD");
	delay_ms(2000);
	GLCD_ClearScreen();
  GLCD_Bitmap(logoglcd1, 0, 0, 128, 64);
	delay_ms(2000);
	GLCD_ClearScreen();
	}
}