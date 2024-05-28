/*
 * ap.cpp
 *
 *  Created on: 2021. 1. 9.
 *      Author: baram
 */




#include "ap.h"





void apInit(void)
{
  cliOpen(HW_UART_CH_UART, 115200);
}

void apMain(void)
{
  while(1)
  {
    cliMain();
    delay(1);
  }
}
