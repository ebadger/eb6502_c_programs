
#include <stdio.h>
#include "../test_pin/test_pin.h"

void main(void)
{
   printf("HELLO, WORLD!\n");

   while(1)
   {
       TEST_PIN_HIGH;
       TEST_PIN_LOW;
   }
}
