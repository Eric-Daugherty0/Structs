#include<stdint.h>

int main(void)
{
	// Using volatile to tell compiler not to optimize these variables
	// this helps stop the compiler from changing the variables during runtime
	// producing unexpected changes.
	uint8_t volatile data1;
	uint8_t volatile data2;

	data1 = 50;

	data2 = data1;
	for(;;);

}
