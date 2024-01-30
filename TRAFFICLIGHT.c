#include<pic.h>
int Led_array1[10]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};
int Led_array2[10]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};
int number;	
void delay(int count)
{
	while(count--);
}
int main()
{
	TRISA=0X00;
	PORTA=0X00; 
	TRISB=0X00;
	PORTB=0X00;	
	TRISC=0X00;
	PORTC=0X00; 
	TRISD=0X00;
	PORTD=0X00;	
	ANSEL=0X00;
	ANSELH=0X00;
	while(1)
	{
		RA0=0;
		RA1=0;
		RA2=1;			
		RB0=1;
		RB1=0;
		RB2=0;	
		for(number=30;number>0;number--)
	    {			    
		  	RA3=1,RA4=0;
			PORTC=Led_array1[number/10];
			delay(9000);
	    	RA3=0,RA4=1;
			PORTC=Led_array2[number%10];
			delay(9000);
			///////
			RB3=1,RB4=0;
			PORTD=Led_array1[number/10];
			delay(9000);
			RB3=0,RB4=1;
			PORTD=Led_array2[number%10];
			delay(9000);
			////////////////////////////////
			
			if(number<=5)
			{
				RA1=1;
				RB1=1;
				RA0=0;
				RA2=0;
				RB0=0;
				RB2=0;
			}
			
			}
		////////////////////
		RA0=1;
		RA1=0;
		RA2=0;			
		RB0=0;
		RB1=0;
		RB2=1;	
		for(number=30;number>0;number--)
	    {			    
		  	RA3=1,RA4=0;
			PORTC=Led_array1[number/10];
			delay(9000);
	    	RA3=0,RA4=1;
			PORTC=Led_array2[number%10];
			delay(9000);
			///////
			RB3=1,RB4=0;
			PORTD=Led_array1[number/10];
			delay(9000);
			RB3=0,RB4=1;
			PORTD=Led_array2[number%10];
			delay(9000);
			////////////////////////////////
			
			if(number<=5)
			{
				RA1=1;
				RB1=1;
				RA0=0;
				RA2=0;
				RB0=0;
				RB2=0;
			}
			
		}	
				
	}
}				