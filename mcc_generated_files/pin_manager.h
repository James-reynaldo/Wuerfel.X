/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F1936
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED1 aliases
#define LED1_TRIS                 TRISAbits.TRISA0
#define LED1_LAT                  LATAbits.LATA0
#define LED1_PORT                 PORTAbits.RA0
#define LED1_ANS                  ANSELAbits.ANSA0
#define LED1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LED1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LED1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LED1_GetValue()           PORTAbits.RA0
#define LED1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LED1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISAbits.TRISA1
#define LED2_LAT                  LATAbits.LATA1
#define LED2_PORT                 PORTAbits.RA1
#define LED2_ANS                  ANSELAbits.ANSA1
#define LED2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED2_GetValue()           PORTAbits.RA1
#define LED2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED2_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED3 aliases
#define LED3_TRIS                 TRISAbits.TRISA2
#define LED3_LAT                  LATAbits.LATA2
#define LED3_PORT                 PORTAbits.RA2
#define LED3_ANS                  ANSELAbits.ANSA2
#define LED3_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED3_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED3_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED3_GetValue()           PORTAbits.RA2
#define LED3_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED3_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED3_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED3_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED4 aliases
#define LED4_TRIS                 TRISAbits.TRISA3
#define LED4_LAT                  LATAbits.LATA3
#define LED4_PORT                 PORTAbits.RA3
#define LED4_ANS                  ANSELAbits.ANSA3
#define LED4_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LED4_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LED4_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LED4_GetValue()           PORTAbits.RA3
#define LED4_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LED4_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LED4_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define LED4_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set LED5 aliases
#define LED5_TRIS                 TRISAbits.TRISA4
#define LED5_LAT                  LATAbits.LATA4
#define LED5_PORT                 PORTAbits.RA4
#define LED5_ANS                  ANSELAbits.ANSA4
#define LED5_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED5_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED5_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED5_GetValue()           PORTAbits.RA4
#define LED5_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED5_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED5_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define LED5_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set LED6 aliases
#define LED6_TRIS                 TRISAbits.TRISA5
#define LED6_LAT                  LATAbits.LATA5
#define LED6_PORT                 PORTAbits.RA5
#define LED6_ANS                  ANSELAbits.ANSA5
#define LED6_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED6_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED6_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED6_GetValue()           PORTAbits.RA5
#define LED6_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED6_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED6_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define LED6_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set LED7 aliases
#define LED7_TRIS                 TRISAbits.TRISA6
#define LED7_LAT                  LATAbits.LATA6
#define LED7_PORT                 PORTAbits.RA6
#define LED7_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define LED7_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define LED7_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define LED7_GetValue()           PORTAbits.RA6
#define LED7_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define LED7_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set Taster aliases
#define Taster_TRIS                 TRISBbits.TRISB0
#define Taster_LAT                  LATBbits.LATB0
#define Taster_PORT                 PORTBbits.RB0
#define Taster_WPU                  WPUBbits.WPUB0
#define Taster_ANS                  ANSELBbits.ANSB0
#define Taster_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define Taster_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define Taster_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define Taster_GetValue()           PORTBbits.RB0
#define Taster_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define Taster_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define Taster_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define Taster_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define Taster_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define Taster_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF0 pin functionality
 * @Example
    IOCBF0_ISR();
 */
void IOCBF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF0_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF0_SetInterruptHandler() method.
    This handler is called every time the IOCBF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(IOCBF0_InterruptHandler);

*/
extern void (*IOCBF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF0_SetInterruptHandler() method.
    This handler is called every time the IOCBF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(IOCBF0_DefaultInterruptHandler);

*/
void IOCBF0_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/