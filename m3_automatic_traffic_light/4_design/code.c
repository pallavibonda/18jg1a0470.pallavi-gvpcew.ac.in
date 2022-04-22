#include<avr/io.h>
#include<util/delay.h>

void main()
{

DDRB=0XFF;
DDRD=0XFF;


while(1)
{

PORTB=0b01001100;
PORTD=0b00000010;
_delay_ms(4000);

PORTB=0b01010010;
PORTD=0b00000010;

_delay_ms(1500);

////////////////////
PORTB=0b01100001;
PORTD=0b00000010;
_delay_ms(4000);

PORTB=0b10010001;
PORTD=0b00000010;

_delay_ms(1500);

//////////////////////////////

PORTD=0b00000011;
PORTB=0b00001001;
_delay_ms(4000);

PORTB=0b10001001;
PORTD=0b00000100;

_delay_ms(1500);

////////////////////////////

PORTD=0b00001000;
PORTB=0b01001001;
_delay_ms(4000);

PORTD=0b00000100;
PORTB=0b01001010;

_delay_ms(1500);

}
}
