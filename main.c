#include <stm32f10x.h>
int main()
{	while(1)
	{
		KeyScan();		
		Measure_Wave();
//		USART1_printf( USART1, "\r\n this is a demo \r\n" );
//		MyPrintf("%d,fasfda, %s\n", cs1, "hello");
	}
}