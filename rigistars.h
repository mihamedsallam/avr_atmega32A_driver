
#include "datatyps.h"


#ifndef reigistar_H_

#define  registar_H_
#define mddra *(volatile u8 const *)(0x3A)
#define mporta *(volatile u8 const *)(0x3B)
#define mpina *(volatile u8 const *)(0x39)
/**********************************************/
#define mddrb *(volatile u8 const *)(0x37)
#define mportb *(volatile u8 const *)(0x38)
#define mpinb *(volatile u8 const *)(0x36)
/**********************************************/
#define mddrc *(volatile u8 const *)(0x34)
#define mportc *(volatile u8 const *)(0x35)
#define mpinc *(volatile u8 const *)(0x33)
/**********************************************/
#define mddrd *(volatile u8 const *)(0x31)
#define mportd *(volatile u8 const *)(0x32)
#define mpind *(volatile u8 const *)(0x30)
/**********************************************/
#define  mysfior *(void u8 const *)(0x50)
#define  pud 2
#endif