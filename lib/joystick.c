
#include <stdio.h>
#include <stdint.h>
#include "delay.h"
#include "test_pin.h"

#define KEYBOARD_LAST_KEY     0xD2

uint8_t left = 0;
uint8_t right = 0;
uint8_t up = 0;
uint8_t down = 0;
uint8_t fire = 0;

void joystick_run(void)
{

    __asm__ ("jsr $F651");

    left = 0;
    up = 0;
    right = 0;
    down = 0;
    fire = 0;

    switch(PEEK(KEYBOARD_LAST_KEY))
    {
        case 'W':
           up = 1;
           break;
        case 'A':
           left = 1;
           break;
        case 'S':
           down = 1;
           break;
        case 'D':
           right = 1;
           break;
        case ' ':
           fire = 1;
           break;        
    }
}

uint8_t joystick_fire_get(void)
{
    return fire;
}

uint8_t joystick_up_get(void)
{
    return up;
}

uint8_t joystick_down_get(void)
{
    return down;
}

uint8_t joystick_left_get(void)
{
    return left;
}

uint8_t joystick_right_get(void)
{
    return right;
}
