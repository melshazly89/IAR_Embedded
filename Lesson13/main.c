#include <stdint.h>

#include "tm4c_cmsis.h"
#include "delay.h"

#define LED_RED   (1U << 1)
#define LED_BLUE  (1U << 2)
#define LED_GREEN (1U << 3)


typedef __packed struct {
    uint8_t y;
    uint16_t x;
} Point;

Point p2;
Point p1={0x55u,0x1234u};

typedef struct {
    Point top_left;
    Point bottom_right;
} Window;

typedef struct {
     Point corners[3];
} Triangle;



int main() {
Point *PP;
PP=&p1;
PP->y=0u;
PP->x=2u;
p2.x=3u;
p2.y=4u;
    SYSCTL->RCGC2 |= (1U << 5);  /* enable clock for GPIOF */
    SYSCTL->GPIOHSCTL |= (1U << 5); /* enable AHB for GPIOF */
    GPIOF_HS->DIR |= (LED_RED | LED_BLUE | LED_GREEN);
    GPIOF_HS->DEN |= (LED_RED | LED_BLUE | LED_GREEN);

    GPIOF_HS->DATA_Bits[LED_BLUE] = LED_BLUE;
    while (1) {
        GPIOF_HS->DATA_Bits[LED_RED] = LED_RED;
        delay(500000);
        
        GPIOF_HS->DATA_Bits[LED_RED] = 0;

        delay(500000);
    }
    //return 0;
}
