

#include <stdbool.h>
#include <stdint.h>
#include <lcd.h>

#include "driverlib/sysctl.h"

int main(void) {

        SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);

        LCD_init();

        while (1) {
            LCD_Print("Merhaba!", "....................");

            SysCtlDelay(80000000/3); //Delay
            LCD_Clear();

            LCD_PrintLn(0, "GITHUB:");
            SysCtlDelay(8000000/3); //Delay

            LCD_PrintLn(1, "FurkanKinali");

            SysCtlDelay(80000000/3); //Delay
            LCD_Clear();

            LCD_PrintJustify(0, "Hello", "World!");

            SysCtlDelay(80000000/3); //Delay
            LCD_Clear();
        }

}
