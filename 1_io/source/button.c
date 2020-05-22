#include "button.h"
#include "gpio.h"

/* Fyll inn disse to */
#define BUTTON_A_PIN 17
#define BUTTON_B_PIN 26

void button_init(){
    GPIO->PIN_CNF[BUTTON_A_PIN] = 0;
    GPIO->PIN_CNF[BUTTON_B_PIN] = 0;
}

uint8_t button_a_pressed(){
    if (!(GPIO->IN & (1 << 17))){
			
	for(int i = 13; i < 16; i++){
		GPIO->OUTSET = (1 << i);
		}
	return 1;
	}
    return 0;
}

uint8_t button_b_pressed(){
    if (!(GPIO->IN & (1 << 26))){
	
	for(int i = 13; i < 16; i++){
		GPIO->OUTSET = (1 << i);
		}
	return 1;
	}
    return 0;	
}
