#include <RASLib/inc/common.h>
#include <RASLib/inc/gpio.h>
#include <RASLib/inc/time.h>
#include <RASLib/inc/motor.h>
#include <RASLib/inc/adc.h>
#include <RASLib/inc/servo.h>
#include "RASDemo.h"
#include <stdbool.h>


// Blink the LED to show we're on
tBoolean blink_on = true;

static tADC *adc[2];
static tBoolean initialized = false;

void blink(void) {
    SetPin(PIN_F2, blink_on);
    blink_on = !blink_on;
}

void blinkG(bool state) {
    SetPin(PIN_F0, state);
}

void blinkR(bool state) {
    SetPin(PIN_F1, state);
}


// The 'main' function is the entry point of the program
int main(void) {
    
    //topsensor = 0;
    //leftsensor = 0;
	
    //adc[0] = InitializeADC(PIN_D0);
    //adc[1] = InitializeADC(PIN_E2);
    // adc[2] = InitializeADC(PIN_D2);
    //adc[3] = InitializeADC(PIN_D3);

    // Initialization code can go here
    // Motors
    //tMotor *left = InitializeServoMotor(PIN_D1, true);
    //tMotor *right = InitializeServoMotor(PIN_D3, false);
    CallEvery(blink, 0, 0.5);
    // MicroServo
    tServo *ser = InitializeServo(PIN_D1);

    

    while (1) {
        // Runtime code can go here
    	SetServo(ser, 0.5);
	Wait(2);
	SetServo(ser, 0);
	//SetMotor(right, 0.2);
	//SetMotor(left, 1);
	}
    //while (1){
	//if (ADCRead(adc[1]) < 0.3) // Away from wall
	//{
		//Printf("%f\n", ADCRead(adc[1]));
		//blinkR(true);
		//SetMotor(right, 0.2);
		//SetMotor(left, 1);	
		//SetMotor(right, -1);
		//SetMotor(left, 1);
		//Wait(1);
		//SetMotor(left, 1);
		//SetMotor(right, 1);
		//Wait(.5);
	//}
	//else {
		//blinkR(false);
		//SetMotor(right, 1);
		//SetMotor(left, 1);		
	//}
	//else if (ADCRead(adc[0]) > 0.2) {
	//SetMotor(right, 0);
	//SetMotor(left, 1);
	//Wait(.4);
     //}
	//else if (ADCRead(adc[0]) < 0.2) && (ADCRead(adc[1]) > 0.4) {
	//SetMotor(right, 1);
	//SetMotor(left, 1);
	//}
    //while (1){

	//if (ADCRead(adc[0]) > 0.2) {
	  // SetMotor(left, 0);
	//SetMotor(right, 1);
	  // Wait(0.1);
	//}
	  // else{
		//SetMotor(left, 1);
	

	//}
	//break;
     

	//Wait(1.800);
	//SetMotor(left, 0);
	//Wait(2.00);
        //SetMotor(right, 1.0);
	//Printf("IR Value: %1.3f \n", ADCRead(adc[0]));
   

}
