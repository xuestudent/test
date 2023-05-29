#include <REGX52.H>
#include "Delay.h"
#include "key.h"
#include "BuzzerTime.h"
#include "nixielight.h"
unsigned char keynum;
void main()
{

 nixie(1,0);
    while(1)
{
	keynum=key();
	if(keynum)
	{
		Buzzer_Time(1000);
		nixie(1,keynum);
		
		
	}
	
}


}