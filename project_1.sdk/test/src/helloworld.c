/******************************************************************************
*
* Copyright (C) 2009 - 2014 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/

/*
 * helloworld.c: simple test application
 */

#include "xparameters.h"
#include "xgpiops.h"
#include "xstatus.h"
	int Status;
	XGpioPs Gpio;	/* The driver instance for GPIO Device. */
	XGpioPs_Config *ConfigPtr;
#define PIN_OFFSET 54
int main()
{

	uint8_t val_0,val_1,val_2,val_3,val_4,val_5,val_6,val_7;
	/* Initialize the GPIO driver. */
	ConfigPtr = XGpioPs_LookupConfig(XPAR_XGPIOPS_0_DEVICE_ID);
	Status = XGpioPs_CfgInitialize(&Gpio, ConfigPtr,
					ConfigPtr->BaseAddr);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}
 // buttons
    print("Hello World\n\r");
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET, 0);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET, 0);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+1, 0);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+1, 0);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+2, 0);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+2, 0);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+3, 0);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+3, 0);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+4, 0);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+4, 0);
    //switches
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+5, 0);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+5, 0);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+6, 0);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+6, 0);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+7, 0);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+7, 0);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+8, 0);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+8, 0);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+9, 0);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+9, 0);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+10, 0);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+10, 0);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+11, 0);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+11, 0);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+12, 0);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+12, 0);
    //led
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+13, 1);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+13, 1);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+14, 1);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+14, 1);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+15, 1);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+15, 1);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+16, 1);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+16, 1);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+17, 1);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+17, 1);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+18, 1);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+18, 1);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+19, 1);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+19, 1);
    XGpioPs_SetDirectionPin(&Gpio, PIN_OFFSET+20, 1);
    XGpioPs_SetOutputEnablePin(&Gpio, PIN_OFFSET+20, 1);
    while (1){
    	val_0 = 0; val_1 =0; val_2 = 0; val_3 = 0;
    	val_4 = 0; val_5 =0; val_6 = 0; val_7 = 0;
    	val_0 = XGpioPs_ReadPin(&Gpio, PIN_OFFSET);    //button BTNC
    	XGpioPs_WritePin(&Gpio, PIN_OFFSET+13, val_0); //LD0
    	val_1 = XGpioPs_ReadPin(&Gpio, PIN_OFFSET+1);  //button BTND
    	XGpioPs_WritePin(&Gpio, PIN_OFFSET+14, val_1); //LD1

    	val_2 = XGpioPs_ReadPin(&Gpio, PIN_OFFSET+5); //SW0
    	XGpioPs_WritePin(&Gpio, PIN_OFFSET+15, val_2);//LED2
    	val_3 = XGpioPs_ReadPin(&Gpio, PIN_OFFSET+6); //SW1
    	XGpioPs_WritePin(&Gpio, PIN_OFFSET+16, val_3);//LED3
    	val_4 = XGpioPs_ReadPin(&Gpio, PIN_OFFSET+7); //SW2
    	XGpioPs_WritePin(&Gpio, PIN_OFFSET+17, val_4);//LED4
    	val_5 = XGpioPs_ReadPin(&Gpio, PIN_OFFSET+8); //SW3
    	XGpioPs_WritePin(&Gpio, PIN_OFFSET+18, val_5);//LED5
    	val_6 = XGpioPs_ReadPin(&Gpio, PIN_OFFSET+9); //SW4
    	XGpioPs_WritePin(&Gpio, PIN_OFFSET+19, val_6);//LED6
    	val_7 = XGpioPs_ReadPin(&Gpio, PIN_OFFSET+10); //SW5
    	XGpioPs_WritePin(&Gpio, PIN_OFFSET+20, val_7);//LED7
    }
    return 0;
}
