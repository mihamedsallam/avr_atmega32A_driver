#include "rigistars.h"
#include "datatyps.h"
#include "std_macros/stdmach.h"
#include "gpio.c"
#include<util/delay.h>
#define intial 0x00
#define heigh 1
#define low  0
#define input 0
#define output 1
#define pull_up 2

void gpio_intia();
/**********************************************/
void gpio_setpin_ddr(u8 port,u8 pinnum,u8 stat){
	/*
	set the  pin as input  or  out put 
	it  takes  the  port
	the  number of the pin 
	the  state of input  or  out put 
	*/	
}
void gpio_set_out_pin(u8 port,u8 pinnum,u8 stat)
{
	/*
	set  out put pin to heigh  or low*/
}
u8  gpio_readpin (u8 port,u8 pinum){
	/*
	return the  status  of  the   pin */
	
	
}
/*********************************************/
void gpio_set_dir_heighorlow_nibble(u8 port,u8 HorL,u8 stat);
void gpio_write_nible(u8 port,u8 HorL,u8 value);
/*******************************************/
void gpio_write_port(u8 port,u8 value);
void gpio_set_port(u8 port,u8 stat);
u8 gpio_read_port(u8 port);