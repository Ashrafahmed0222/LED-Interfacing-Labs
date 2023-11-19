/*
 * main.c
 *
 *  Created Toggle: Feb 14, 2023
 *      Author: ASHRAF AHMED
 */

#include "BIT_MATH.h"
#include "STD_TYPES.h"


#include "DIO_interface.h"



#include "LED_interface.h"



#include <util/delay.h>




int main(void)
{
	LED_CONF LED0 = {LED_PORTA, LED_PIN0, ACTIVE_HIGH};
	LED_CONF LED1 = {LED_PORTA, LED_PIN1, ACTIVE_HIGH};
	LED_CONF LED2 = {LED_PORTA, LED_PIN2, ACTIVE_HIGH};
	LED_CONF LED3 = {LED_PORTA, LED_PIN3, ACTIVE_HIGH};
	LED_CONF LED4 = {LED_PORTA, LED_PIN4, ACTIVE_HIGH};
	LED_CONF LED5 = {LED_PORTA, LED_PIN5, ACTIVE_HIGH};
	LED_CONF LED6 = {LED_PORTA, LED_PIN6, ACTIVE_HIGH};
	LED_CONF LED7 = {LED_PORTA, LED_PIN7, ACTIVE_HIGH};



	LED_voidInIt(LED0);
	LED_voidInIt(LED1);
	LED_voidInIt(LED2);
	LED_voidInIt(LED3);
	LED_voidInIt(LED4);
	LED_voidInIt(LED5);
	LED_voidInIt(LED6);
	LED_voidInIt(LED7);

	/*******************************************FLASHING***********************************/

//	while(1)
//	{
//		LED_voidToggle(LED0);
//		LED_voidToggle(LED1);
//		LED_voidToggle(LED2);
//		LED_voidToggle(LED3);
//		LED_voidToggle(LED4);
//		LED_voidToggle(LED5);
//		LED_voidToggle(LED6);
//		LED_voidToggle(LED7);
//
//		_delay_ms(1000);
//
//	}

	/*******************************************SHIFT_LEFT***********************************/

//	while(1)
//		{
//		    LED_voidON(LED7);
//			LED_voidOFF(LED0);
//			_delay_ms(250);
//			LED_voidON(LED6);
//			LED_voidOFF(LED7);
//			_delay_ms(250);
//			LED_voidON(LED5);
//			LED_voidOFF(LED6);
//			_delay_ms(250);
//			LED_voidON(LED4);
//			LED_voidOFF(LED5);
//			_delay_ms(250);
//			LED_voidON(LED3);
//			LED_voidOFF(LED4);
//			_delay_ms(250);
//			LED_voidON(LED2);
//			LED_voidOFF(LED3);
//			_delay_ms(250);
//			LED_voidON(LED1);
//			LED_voidOFF(LED2);
//			_delay_ms(250);
//			LED_voidON(LED0);
//			LED_voidOFF(LED1);
//			_delay_ms(250);
//
//
//		}

	/*******************************************SHIFT_RIGHT***********************************/


//		while(1)
//			{
//			    LED_voidON(LED0);
//				LED_voidOFF(LED7);
//				_delay_ms(250);
//				LED_voidON(LED1);
//				LED_voidOFF(LED0);
//				_delay_ms(250);
//				LED_voidON(LED2);
//				LED_voidOFF(LED1);
//				_delay_ms(250);
//				LED_voidON(LED3);
//				LED_voidOFF(LED2);
//				_delay_ms(250);
//				LED_voidON(LED4);
//				LED_voidOFF(LED3);
//				_delay_ms(250);
//				LED_voidON(LED5);
//				LED_voidOFF(LED4);
//				_delay_ms(250);
//				LED_voidON(LED6);
//				LED_voidOFF(LED5);
//				_delay_ms(250);
//				LED_voidON(LED7);
//				LED_voidOFF(LED6);
//				_delay_ms(250);
//
//
//			}





	/*******************************************DIVERGING***********************************/

//	while(1)
//		{
//			LED_voidOFF(LED0);
//			LED_voidOFF(LED7);
//		    LED_voidON(LED3);
//			LED_voidON(LED4);
//			_delay_ms(250);
//
//			LED_voidOFF(LED4);
//			LED_voidOFF(LED3);
//			LED_voidON(LED2);
//			LED_voidON(LED5);
//			_delay_ms(250);
//			LED_voidOFF(LED5);
//			LED_voidOFF(LED2);
//			LED_voidON(LED1);
//			LED_voidON(LED6);
//			_delay_ms(250);
//			LED_voidOFF(LED1);
//			LED_voidOFF(LED6);
//		    LED_voidON(LED0);
//		    LED_voidON(LED7);
//			_delay_ms(250);
//
//
//
//		}

	/*******************************************CONVERGING***********************************/

//		while(1)
//			{
//				LED_voidOFF(LED3);
//				LED_voidOFF(LED4);
//			    LED_voidON(LED0);
//				LED_voidON(LED7);
//				_delay_ms(250);
//
//				LED_voidOFF(LED0);
//				LED_voidOFF(LED7);
//				LED_voidON(LED1);
//				LED_voidON(LED6);
//				_delay_ms(250);
//				LED_voidOFF(LED1);
//				LED_voidOFF(LED6);
//				LED_voidON(LED2);
//				LED_voidON(LED5);
//				_delay_ms(250);
//				LED_voidOFF(LED2);
//				LED_voidOFF(LED5);
//			    LED_voidON(LED3);
//			    LED_voidON(LED4);
//				_delay_ms(250);
//
//
//
//			}





	/*******************************************CONVERGING/DEIVERGING***********************************/

//
//
//
//		while(1)
//				{
//
//					LED_voidOFF(LED2);
//					LED_voidOFF(LED5);
//					LED_voidOFF(LED1);
//					LED_voidOFF(LED6);
//				    LED_voidON(LED3);
//					LED_voidON(LED4);
//					LED_voidON(LED0);
//					LED_voidON(LED7);
//					_delay_ms(250);
//
//					LED_voidOFF(LED4);
//					LED_voidOFF(LED3);
//					LED_voidOFF(LED0);
//					LED_voidOFF(LED7);
//				    LED_voidON(LED2);
//					LED_voidON(LED5);
//					LED_voidON(LED1);
//					LED_voidON(LED6);
//
//					_delay_ms(250);
//
//
//
//			}

	/*******************************************INCREMENT(SNAKE_EFFECT)***********************************/

//	while(1)
//		{
//			LED_voidOFF(LED1);
//			LED_voidOFF(LED2);
//			LED_voidOFF(LED3);
//			LED_voidOFF(LED4);
//			LED_voidOFF(LED5);
//			LED_voidOFF(LED6);
//			LED_voidOFF(LED7);
//			LED_voidON(LED0);
//			_delay_ms(250);
//			LED_voidON(LED1);
//			_delay_ms(250);
//			LED_voidON(LED2);
//			_delay_ms(250);
//			LED_voidON(LED3);
//			_delay_ms(250);
//			LED_voidON(LED4);
//			_delay_ms(250);
//			LED_voidON(LED5);
//			_delay_ms(250);
//			LED_voidON(LED6);
//			_delay_ms(250);
//			LED_voidON(LED7);
//			_delay_ms(250);
//
//		}



	/*******************************************PINGPONG***********************************/



	while(1)
			{
				LED_voidON(LED0);
				LED_voidOFF(LED1);
				_delay_ms(250);
				LED_voidON(LED1);
				LED_voidOFF(LED0);
				_delay_ms(250);
				LED_voidON(LED2);
				LED_voidOFF(LED1);
				_delay_ms(250);
				LED_voidON(LED3);
				LED_voidOFF(LED2);
				_delay_ms(250);
				LED_voidON(LED4);
				LED_voidOFF(LED3);
				_delay_ms(250);
				LED_voidON(LED5);
				LED_voidOFF(LED4);
				_delay_ms(250);
				LED_voidON(LED6);
				LED_voidOFF(LED5);
				_delay_ms(250);
				LED_voidON(LED7);
				LED_voidOFF(LED6);
				_delay_ms(250);
				LED_voidON(LED6);
				LED_voidOFF(LED7);
				_delay_ms(250);
				LED_voidON(LED5);
				LED_voidOFF(LED6);
				_delay_ms(250);
				LED_voidON(LED4);
				LED_voidOFF(LED5);
				_delay_ms(250);
				LED_voidON(LED3);
				LED_voidOFF(LED4);
				_delay_ms(250);
				LED_voidON(LED2);
				LED_voidOFF(LED3);
				_delay_ms(250);
				LED_voidON(LED1);
				LED_voidOFF(LED2);
				_delay_ms(250);


			}




}
