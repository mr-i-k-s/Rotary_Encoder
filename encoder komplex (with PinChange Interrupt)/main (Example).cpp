/*
 * GccApplication7.cpp
 *
 * Created: 11.06.2021 10:44:48
 * Author : mr_iks
 */ 

#include <avr/io.h>
#include "encoder_komplex.cpp"

int main(void)
{
	//Encoder Settings and Initialisation//
    Encoder encoder;
	encoder.encoder_init();
	encoder.e_value_max = 100;
	encoder.e_value_max = 0;
	
	uint8_t counter = 0;
	
    while (1) 
    {
		counter = encoder.encoder_value;		// get Encoder value
		
    }
}

