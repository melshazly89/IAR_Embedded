#include"lm4f120h5qr.h"
#include<stdint.h>
#include"delay.h"
#define LED_RED (1U<<1)
#define LED_BLUE (1U<<2)
#define LED_GREEN (1U<<3)

uint8_t u8a,u8b;
uint16_t u16c,u16d;
uint32_t u32e,u32f;

int8_t s8;
int16_t s16;
int32_t s32;
int main()
{
  u8a=sizeof(u8a);
  u16c=sizeof(u16c);
  u32e=sizeof(u32e);
  
  u8a=0xa1u;
  u16c=0xc1c2u;
  u32e=0xe1e2e3e4u;
  u8b=u8a;
  u16d=u16c;
  u32f=u32e;
  SYSCTL_RCGCGPIO_R|=(1U<<5);   
  GPIO_PORTF_DIR_R|=(LED_RED|LED_BLUE|LED_GREEN); 
  GPIO_PORTF_DEN_R|=(LED_RED|LED_BLUE|LED_GREEN);   
  GPIO_PORTF_DATA_BITS_R[LED_BLUE]=LED_BLUE;
  while(1)
  {
  GPIO_PORTF_DATA_BITS_R[LED_RED]=LED_RED;   
  delay(1000000);
  GPIO_PORTF_DATA_BITS_R[LED_RED]=0;
  delay(500000);
  }
  return 0;
}
