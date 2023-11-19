/*
********************************************* DIO_program.c ************************************************
*  Author:  Ashraf Ahmed Hamed
*  Date:    2/9/2023
*  Layer:   M_CAL
*  SWC:     DIO/GPIO
*/

#include "BIT_MATH.h"
#include "STD_TYPES.h"


#include "DIO_interface.h"
#include "DIO_private.h"
#include "DIO_config.h"


DIO_ErrorStatus DIO_enumSetPinDirection (u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Direction ){
	DIO_ErrorStatus LOC_enumState = DIO_OK;
	if(Copy_u8PORT <=  DIO_PORTD && Copy_u8PIN <= DIO_PIN7 )
	{


		if(Copy_u8Direction == DIO_PIN_OUTPUT)
		{
			switch(Copy_u8PORT)
			{
				case DIO_PORTA: SET_BIT(DDRA, Copy_u8PIN); break;
				case DIO_PORTB: SET_BIT(DDRB, Copy_u8PIN); break;
				case DIO_PORTC: SET_BIT(DDRC, Copy_u8PIN); break;
				case DIO_PORTD: SET_BIT(DDRD, Copy_u8PIN); break;
			}


		}
		else if (Copy_u8Direction == DIO_PIN_INPUT)
		{
			switch(Copy_u8PORT)
			{
				case DIO_PORTA: CLR_BIT(DDRA, Copy_u8PIN); break;
				case DIO_PORTB: CLR_BIT(DDRB, Copy_u8PIN); break;
				case DIO_PORTC: CLR_BIT(DDRC, Copy_u8PIN); break;
				case DIO_PORTD: CLR_BIT(DDRD, Copy_u8PIN); break;
			}
		}
		else
		{
			LOC_enumState = DIO_NOK;
		}
	}
	else
	{
		LOC_enumState = DIO_NOK;
	}


	return LOC_enumState;
}


/*------------------------------------------------------------------------------------------------------------*/
DIO_ErrorStatus DIO_enumSetPinValue (u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Value ){
	DIO_ErrorStatus LOC_enumState = DIO_OK;
	if(Copy_u8PORT <= DIO_PORTD && Copy_u8PIN <= DIO_PIN7)
	{
		if(Copy_u8Value == DIO_PIN_HIGH)
		{
			switch(Copy_u8PORT)
			{
				case DIO_PORTA: SET_BIT(PORTA, Copy_u8PIN); break;
				case DIO_PORTB: SET_BIT(PORTB, Copy_u8PIN); break;
				case DIO_PORTC: SET_BIT(PORTC, Copy_u8PIN); break;
				case DIO_PORTD: SET_BIT(PORTD, Copy_u8PIN); break;
			}


		}
		else if (Copy_u8Value == DIO_PIN_LOW)
		{
			switch(Copy_u8PORT)
			{
				case DIO_PORTA: CLR_BIT(PORTA, Copy_u8PIN); break;
				case DIO_PORTB: CLR_BIT(PORTB, Copy_u8PIN); break;
				case DIO_PORTC: CLR_BIT(PORTC, Copy_u8PIN); break;
				case DIO_PORTD: CLR_BIT(PORTD, Copy_u8PIN); break;
			}
		}
		else
		{
			LOC_enumState = DIO_NOK;
		}
	}
	else
	{
		LOC_enumState = DIO_NOK;
	}

	return LOC_enumState;
}

/*--------------------------------------------------------------------------------------------------------------*/
DIO_ErrorStatus DIO_enumGetPinValue (u8 Copy_u8PORT, u8 Copy_u8PIN, u8 *Copy_PtrData ){
	DIO_ErrorStatus LOC_enumState = DIO_OK;
	if(Copy_u8PORT <= DIO_PORTD && Copy_u8PIN <= DIO_PIN7)
	{

		switch(Copy_u8PORT)
			{
				case DIO_PORTA: *Copy_PtrData = GET_BIT(PINA, Copy_u8PIN); break;
				case DIO_PORTB: *Copy_PtrData = GET_BIT(PINB, Copy_u8PIN); break;
				case DIO_PORTC: *Copy_PtrData = GET_BIT(PINC, Copy_u8PIN); break;
				case DIO_PORTD: *Copy_PtrData = GET_BIT(PIND, Copy_u8PIN); break;
			}

	}
	else
	{
		LOC_enumState = DIO_NOK;
	}

	return LOC_enumState;
}

/*-----------------------------------------------------------------------------------------------------------------*/
DIO_ErrorStatus DIO_enumTogglePinValue  (u8 Copy_u8PORT, u8 Copy_u8PIN                      )
{
	DIO_ErrorStatus LOC_enumState = DIO_OK;

	if(Copy_u8PORT <= DIO_PORTD)
	{
		switch(Copy_u8PORT)
			{
				case DIO_PORTA: TOG_BIT(PORTA, Copy_u8PIN); break;
				case DIO_PORTB: TOG_BIT(PORTB, Copy_u8PIN); break;
				case DIO_PORTC: TOG_BIT(PORTC, Copy_u8PIN); break;
				case DIO_PORTD: TOG_BIT(PORTD, Copy_u8PIN); break;
			}
	}
	else
	{
		LOC_enumState = DIO_NOK;
	}
	return LOC_enumState;
}

/*--------------------------------------------------------------------------------------------------------------------*/
DIO_ErrorStatus DIO_enumSetPortDirection (u8 Copy_u8PORT, u8 Copy_u8Direction ){
	DIO_ErrorStatus LOC_enumState = DIO_OK;
	if(Copy_u8PORT <= DIO_PORTD)
	{
		if(Copy_u8Direction == DIO_PIN_OUTPUT)
		{
			switch(Copy_u8PORT)
			{
				case DIO_PORTA: SET_BIT(DDRA, DIO_PIN0);
								SET_BIT(DDRA, DIO_PIN1);
								SET_BIT(DDRA, DIO_PIN2);
								SET_BIT(DDRA, DIO_PIN3);
								SET_BIT(DDRA, DIO_PIN4);
								SET_BIT(DDRA, DIO_PIN5);
								SET_BIT(DDRA, DIO_PIN6);
								SET_BIT(DDRA, DIO_PIN7);break;


				case DIO_PORTB: SET_BIT(DDRB, DIO_PIN0);
								SET_BIT(DDRB, DIO_PIN1);
								SET_BIT(DDRB, DIO_PIN2);
								SET_BIT(DDRB, DIO_PIN3);
								SET_BIT(DDRB, DIO_PIN4);
								SET_BIT(DDRB, DIO_PIN5);
								SET_BIT(DDRB, DIO_PIN6);
								SET_BIT(DDRB, DIO_PIN7);break;


				case DIO_PORTC: SET_BIT(DDRC, DIO_PIN0);
								SET_BIT(DDRC, DIO_PIN1);
								SET_BIT(DDRC, DIO_PIN2);
								SET_BIT(DDRC, DIO_PIN3);
								SET_BIT(DDRC, DIO_PIN4);
								SET_BIT(DDRC, DIO_PIN5);
								SET_BIT(DDRC, DIO_PIN6);
								SET_BIT(DDRC, DIO_PIN7);break;


				case DIO_PORTD: SET_BIT(DDRD, DIO_PIN0);
								SET_BIT(DDRD, DIO_PIN1);
								SET_BIT(DDRD, DIO_PIN2);
								SET_BIT(DDRD, DIO_PIN3);
								SET_BIT(DDRD, DIO_PIN4);
								SET_BIT(DDRD, DIO_PIN5);
								SET_BIT(DDRD, DIO_PIN6);
								SET_BIT(DDRD, DIO_PIN7);break;
				default :       LOC_enumState = DIO_NOK    ;break;
			}


		}
		else if (Copy_u8Direction == DIO_PIN_INPUT)
		{
			switch(Copy_u8PORT)
			{
				case DIO_PORTA: CLR_BIT(DDRA, DIO_PIN0);
								CLR_BIT(DDRA, DIO_PIN1);
								CLR_BIT(DDRA, DIO_PIN2);
								CLR_BIT(DDRA, DIO_PIN3);
								CLR_BIT(DDRA, DIO_PIN4);
								CLR_BIT(DDRA, DIO_PIN5);
								CLR_BIT(DDRA, DIO_PIN6);
								CLR_BIT(DDRA, DIO_PIN7);break;


				case DIO_PORTB: CLR_BIT(DDRB, DIO_PIN0);
								CLR_BIT(DDRB, DIO_PIN1);
								CLR_BIT(DDRB, DIO_PIN2);
								CLR_BIT(DDRB, DIO_PIN3);
								CLR_BIT(DDRB, DIO_PIN4);
								CLR_BIT(DDRB, DIO_PIN5);
								CLR_BIT(DDRB, DIO_PIN6);
								CLR_BIT(DDRB, DIO_PIN7);break;


				case DIO_PORTC: CLR_BIT(DDRC, DIO_PIN0);
								CLR_BIT(DDRC, DIO_PIN1);
								CLR_BIT(DDRC, DIO_PIN2);
								CLR_BIT(DDRC, DIO_PIN3);
								CLR_BIT(DDRC, DIO_PIN4);
								CLR_BIT(DDRC, DIO_PIN5);
								CLR_BIT(DDRC, DIO_PIN6);
								CLR_BIT(DDRC, DIO_PIN7);break;


				case DIO_PORTD: CLR_BIT(DDRD, DIO_PIN0);
								CLR_BIT(DDRD, DIO_PIN1);
								CLR_BIT(DDRD, DIO_PIN2);
								CLR_BIT(DDRD, DIO_PIN3);
								CLR_BIT(DDRD, DIO_PIN4);
								CLR_BIT(DDRD, DIO_PIN5);
								CLR_BIT(DDRD, DIO_PIN6);
								CLR_BIT(DDRD, DIO_PIN7);break;
				default :       LOC_enumState = DIO_NOK    ;break;
			}
		}
		else
		{
			LOC_enumState = DIO_NOK;
		}
	}
	else
	{
		LOC_enumState = DIO_NOK;
	}
	return LOC_enumState;
}


/*------------------------------------------------------------------------------------------------------------------------*/
DIO_ErrorStatus DIO_enumSetPortValue     (u8 Copy_u8PORT, u8 Copy_u8Value     ){
	DIO_ErrorStatus LOC_enumState = DIO_OK;
	if (Copy_u8PORT <= DIO_PORTD )
	{

		if(Copy_u8Value == DIO_PIN_HIGH)
		{
		switch(Copy_u8PORT)
			{
				case DIO_PORTA: SET_BIT(PORTA, DIO_PIN0);
								SET_BIT(PORTA, DIO_PIN1);
								SET_BIT(PORTA, DIO_PIN2);
								SET_BIT(PORTA, DIO_PIN3);
								SET_BIT(PORTA, DIO_PIN4);
								SET_BIT(PORTA, DIO_PIN5);
								SET_BIT(PORTA, DIO_PIN6);
								SET_BIT(PORTA, DIO_PIN7);break;


				case DIO_PORTB: SET_BIT(PORTB, DIO_PIN0);
								SET_BIT(PORTB, DIO_PIN1);
								SET_BIT(PORTB, DIO_PIN2);
								SET_BIT(PORTB, DIO_PIN3);
								SET_BIT(PORTB, DIO_PIN4);
								SET_BIT(PORTB, DIO_PIN5);
								SET_BIT(PORTB, DIO_PIN6);
								SET_BIT(PORTB, DIO_PIN7);break;


				case DIO_PORTC: SET_BIT(PORTC, DIO_PIN0);
								SET_BIT(PORTC, DIO_PIN1);
								SET_BIT(PORTC, DIO_PIN2);
								SET_BIT(PORTC, DIO_PIN3);
								SET_BIT(PORTC, DIO_PIN4);
								SET_BIT(PORTC, DIO_PIN5);
								SET_BIT(PORTC, DIO_PIN6);
								SET_BIT(PORTC, DIO_PIN7);break;


				case DIO_PORTD: SET_BIT(PORTD, DIO_PIN0);
								SET_BIT(PORTD, DIO_PIN1);
								SET_BIT(PORTD, DIO_PIN2);
								SET_BIT(PORTD, DIO_PIN3);
								SET_BIT(PORTD, DIO_PIN4);
								SET_BIT(PORTD, DIO_PIN5);
								SET_BIT(PORTD, DIO_PIN6);
								SET_BIT(PORTD, DIO_PIN7);break;
				default :       LOC_enumState = DIO_NOK     ;break;
			}

		}
		else if (Copy_u8Value == DIO_PIN_LOW)
		{
			switch(Copy_u8PORT)
			{
				case DIO_PORTA: CLR_BIT(PORTA, DIO_PIN0);
								CLR_BIT(PORTA, DIO_PIN1);
								CLR_BIT(PORTA, DIO_PIN2);
								CLR_BIT(PORTA, DIO_PIN3);
								CLR_BIT(PORTA, DIO_PIN4);
								CLR_BIT(PORTA, DIO_PIN5);
								CLR_BIT(PORTA, DIO_PIN6);
								CLR_BIT(PORTA, DIO_PIN7);break;


				case DIO_PORTB: CLR_BIT(PORTB, DIO_PIN0);
								CLR_BIT(PORTB, DIO_PIN1);
								CLR_BIT(PORTB, DIO_PIN2);
								CLR_BIT(PORTB, DIO_PIN3);
								CLR_BIT(PORTB, DIO_PIN4);
								CLR_BIT(PORTB, DIO_PIN5);
								CLR_BIT(PORTB, DIO_PIN6);
								CLR_BIT(PORTB, DIO_PIN7);break;


				case DIO_PORTC: CLR_BIT(PORTC, DIO_PIN0);
								CLR_BIT(PORTC, DIO_PIN1);
								CLR_BIT(PORTC, DIO_PIN2);
								CLR_BIT(PORTC, DIO_PIN3);
								CLR_BIT(PORTC, DIO_PIN4);
								CLR_BIT(PORTC, DIO_PIN5);
								CLR_BIT(PORTC, DIO_PIN6);
								CLR_BIT(PORTC, DIO_PIN7);break;


				case DIO_PORTD: CLR_BIT(PORTD, DIO_PIN0);
								CLR_BIT(PORTD, DIO_PIN1);
								CLR_BIT(PORTD, DIO_PIN2);
								CLR_BIT(PORTD, DIO_PIN3);
								CLR_BIT(PORTD, DIO_PIN4);
								CLR_BIT(PORTD, DIO_PIN5);
								CLR_BIT(PORTD, DIO_PIN6);
								CLR_BIT(PORTD, DIO_PIN7);break;
				default :       LOC_enumState = DIO_NOK     ;break;
			}
		}
		else
		{
			LOC_enumState = DIO_NOK;
		}


	}
	else
	{
		LOC_enumState = DIO_NOK;
	}
	return LOC_enumState;
}



/*------------------------------------------------------------------------------------------------------*/
DIO_ErrorStatus   DIO_enumGetPortValue         (u8 Copy_u8PORT , u8 *Copy_PortPtrData                   ){
	DIO_ErrorStatus LOC_enumState = DIO_OK;
	if(Copy_u8PORT <= DIO_PORTD)
	{
		u8 Local_u8status_PIN0 = 0;
		u8 Local_u8status_PIN1 = 0;
		u8 Local_u8status_PIN2 = 0;
		u8 Local_u8status_PIN3 = 0;
		u8 Local_u8status_PIN4 = 0;
		u8 Local_u8status_PIN5 = 0;
		u8 Local_u8status_PIN6 = 0;
		u8 Local_u8status_PIN7 = 0;
		switch(Copy_u8PORT)
			{
				case DIO_PORTA: Local_u8status_PIN0 = GET_BIT(PINA, DIO_PIN0);
								Local_u8status_PIN1 = GET_BIT(PINA, DIO_PIN1);
								Local_u8status_PIN2 = GET_BIT(PINA, DIO_PIN2);
								Local_u8status_PIN3 = GET_BIT(PINA, DIO_PIN3);
								Local_u8status_PIN4 = GET_BIT(PINA, DIO_PIN4);
								Local_u8status_PIN5 = GET_BIT(PINA, DIO_PIN5);
								Local_u8status_PIN6 = GET_BIT(PINA, DIO_PIN6);
								Local_u8status_PIN7 = GET_BIT(PINA, DIO_PIN7);break;


				case DIO_PORTB: Local_u8status_PIN0 = GET_BIT(PINB, DIO_PIN0);
								Local_u8status_PIN1 = GET_BIT(PINB, DIO_PIN1);
								Local_u8status_PIN2 = GET_BIT(PINB, DIO_PIN2);
								Local_u8status_PIN3 = GET_BIT(PINB, DIO_PIN3);
								Local_u8status_PIN4 = GET_BIT(PINB, DIO_PIN4);
								Local_u8status_PIN5 = GET_BIT(PINB, DIO_PIN5);
								Local_u8status_PIN6 = GET_BIT(PINB, DIO_PIN6);
								Local_u8status_PIN7 = GET_BIT(PINB, DIO_PIN7);break;


				case DIO_PORTC: Local_u8status_PIN0 = GET_BIT(PINC, DIO_PIN0);
								Local_u8status_PIN1 = GET_BIT(PINC, DIO_PIN1);
								Local_u8status_PIN2 = GET_BIT(PINC, DIO_PIN2);
								Local_u8status_PIN3 = GET_BIT(PINC, DIO_PIN3);
								Local_u8status_PIN4 = GET_BIT(PINC, DIO_PIN4);
								Local_u8status_PIN5 = GET_BIT(PINC, DIO_PIN5);
								Local_u8status_PIN6 = GET_BIT(PINC, DIO_PIN6);
								Local_u8status_PIN7 = GET_BIT(PINC, DIO_PIN7);break;

				case DIO_PORTD: Local_u8status_PIN0 = GET_BIT(PIND, DIO_PIN0);
								Local_u8status_PIN1 = GET_BIT(PIND, DIO_PIN1);
								Local_u8status_PIN2 = GET_BIT(PIND, DIO_PIN2);
								Local_u8status_PIN3 = GET_BIT(PIND, DIO_PIN3);
								Local_u8status_PIN4 = GET_BIT(PIND, DIO_PIN4);
								Local_u8status_PIN5 = GET_BIT(PIND, DIO_PIN5);
								Local_u8status_PIN6 = GET_BIT(PIND, DIO_PIN6);
								Local_u8status_PIN7 = GET_BIT(PIND, DIO_PIN7);break;
				default :       LOC_enumState = DIO_NOK                          ;break;

			}


			*Copy_PortPtrData =   Local_u8status_PIN0
								& Local_u8status_PIN1
								& Local_u8status_PIN2
								& Local_u8status_PIN3
								& Local_u8status_PIN4
								& Local_u8status_PIN5
								& Local_u8status_PIN6
								& Local_u8status_PIN7;
	}

	else
	{
		LOC_enumState = DIO_NOK;
	}
	return LOC_enumState;
}




/*--------------------------------------------------------------------------------------------------------------------------*/
DIO_ErrorStatus DIO_enumTogglePortValue  (u8 Copy_u8PORT                     ){
	DIO_ErrorStatus LOC_enumState = DIO_OK;
	if(Copy_u8PORT <= DIO_PORTD)
	{
		switch(Copy_u8PORT)
			{
				case DIO_PORTA: TOG_BIT(PORTA, DIO_PIN0);
								TOG_BIT(PORTA, DIO_PIN1);
								TOG_BIT(PORTA, DIO_PIN2);
								TOG_BIT(PORTA, DIO_PIN3);
								TOG_BIT(PORTA, DIO_PIN4);
								TOG_BIT(PORTA, DIO_PIN5);
								TOG_BIT(PORTA, DIO_PIN6);
								TOG_BIT(PORTA, DIO_PIN7);break;


				case DIO_PORTB: TOG_BIT(PORTB, DIO_PIN0);
								TOG_BIT(PORTB, DIO_PIN1);
								TOG_BIT(PORTB, DIO_PIN2);
								TOG_BIT(PORTB, DIO_PIN3);
								TOG_BIT(PORTB, DIO_PIN4);
								TOG_BIT(PORTB, DIO_PIN5);
								TOG_BIT(PORTB, DIO_PIN6);
								TOG_BIT(PORTB, DIO_PIN7);break;


				case DIO_PORTC: TOG_BIT(PORTC, DIO_PIN0);
								TOG_BIT(PORTC, DIO_PIN1);
								TOG_BIT(PORTC, DIO_PIN2);
								TOG_BIT(PORTC, DIO_PIN3);
								TOG_BIT(PORTC, DIO_PIN4);
								TOG_BIT(PORTC, DIO_PIN5);
								TOG_BIT(PORTC, DIO_PIN6);
								TOG_BIT(PORTC, DIO_PIN7);break;


				case DIO_PORTD: TOG_BIT(PORTD, DIO_PIN0);
								TOG_BIT(PORTD, DIO_PIN1);
								TOG_BIT(PORTD, DIO_PIN2);
								TOG_BIT(PORTD, DIO_PIN3);
								TOG_BIT(PORTD, DIO_PIN4);
								TOG_BIT(PORTD, DIO_PIN5);
								TOG_BIT(PORTD, DIO_PIN6);
								TOG_BIT(PORTD, DIO_PIN7);break;
				default :       LOC_enumState = DIO_NOK     ;break;
			}
	}
	else
	{
		LOC_enumState = DIO_NOK;
	}
	return LOC_enumState;
}




