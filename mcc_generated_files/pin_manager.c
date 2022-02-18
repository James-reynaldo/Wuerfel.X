/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pin_manager.c

  Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F1936
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB             :  MPLAB X 5.45

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "pin_manager.h"
#include "mcc.h"
#include "tmr0.h"




void (*IOCBF0_InterruptHandler)(void);

int i = 0; //speichert den letzen Wurf

void PIN_MANAGER_Initialize(void)
{
    /**
    LATx registers
    */
    LATE = 0x00;
    LATA = 0x00;
    LATB = 0x00;
    LATC = 0x00;

    /**
    TRISx registers
    */
    TRISE = 0x08;
    TRISA = 0x80;
    TRISB = 0xFF;
    TRISC = 0xFF;

    /**
    ANSELx registers
    */
    ANSELB = 0x3E;
    ANSELA = 0x3F;

    /**
    WPUx registers
    */
    WPUE = 0x00;
    WPUB = 0x00;
    OPTION_REGbits.nWPUEN = 1;


    /**
    APFCONx registers
    */
    APFCON = 0x00;

    /**
    IOCx registers 
    */
    //interrupt on change for group IOCBF - flag
    IOCBFbits.IOCBF0 = 0;
    //interrupt on change for group IOCBN - negative
    IOCBNbits.IOCBN0 = 1;
    //interrupt on change for group IOCBP - positive
    IOCBPbits.IOCBP0 = 0;



    // register default IOC callback functions at runtime; use these methods to register a custom function
    IOCBF0_SetInterruptHandler(IOCBF0_DefaultInterruptHandler);
   
    // Enable IOCI interrupt 
    INTCONbits.IOCIE = 1; 
    
}
  
void PIN_MANAGER_IOC(void)
{   
	// interrupt on change for pin IOCBF0
    if(IOCBFbits.IOCBF0 == 1)
    {
        IOCBF0_ISR();  
    }	
}

/**
   IOCBF0 Interrupt Service Routine
*/
void turnon(int i) // schaltet die LED entsprechend dem Wurf ein
{
    switch(i)
    {
        case 0:LED1_SetHigh();LED2_SetHigh();LED3_SetHigh();LED4_SetHigh();LED5_SetHigh();LED6_SetHigh();break;
        case 1: LED7_SetHigh();break;
        case 2: LED3_SetHigh();LED4_SetHigh();break;
        case 3: LED1_SetHigh();LED7_SetHigh();LED6_SetHigh();break;
        case 4: LED1_SetHigh();LED3_SetHigh();LED4_SetHigh();LED6_SetHigh();break;
        case 5: LED1_SetHigh();LED3_SetHigh();LED4_SetHigh();LED6_SetHigh();LED7_SetHigh();break;
        default : break;
    }
}

void IOCBF0_ISR(void) {

    // Add custom IOCBF0 code
    if(LATAbits.LATA0==0&&LATAbits.LATA1==0&&LATAbits.LATA2==0&&LATAbits.LATA6==0)
        //Meisten der LED waren aus,Mikrocontroller war im Sleep Modus
    {
        turnon(i);//zeigt den letzten Wurf
    }
    else
    {TMR0_Reload();//TMR wieder auf Anfangswert setzen
     LED1_SetLow();LED2_SetLow();LED3_SetLow();//alle licht aus
     LED4_SetLow();LED5_SetLow();LED6_SetLow();LED7_SetLow();
     i=rand()%6;// eine Zufallszahl generieren
     __delay_ms(100);
     while(!Taster_GetValue()) // while Taster gedrückt ist
        {
            TMR0_Reload();
        }
     
     turnon(i);//zeigt Wurf
    }
          
    // Call the interrupt handler for the callback registered at runtime
    if(IOCBF0_InterruptHandler)
    {
        IOCBF0_InterruptHandler();
    }
    IOCBFbits.IOCBF0 = 0;
}

/**
  Allows selecting an interrupt handler for IOCBF0 at application runtime
*/
void IOCBF0_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCBF0_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCBF0
*/
void IOCBF0_DefaultInterruptHandler(void){
    // add your IOCBF0 interrupt custom code
    // or set custom function using IOCBF0_SetInterruptHandler()
}

/**
 End of File
*/