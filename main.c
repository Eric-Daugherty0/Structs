// Understanding structs in STM32
#include<stdio.h>
#include<stdint.h>

struct carModel{

	uint32_t carNumber;
	uint32_t carPrice;
	uint32_t carMaxSpeed;
	float carWeight;

};

int main(void)
{
	// The first way which order matters.
	struct carModel carBMW = {2021,15000,220,1330};
	struct carModel carFord = {4021,35000,160,1900.6};
	// The second way in which order does not matter.
	struct carModel carHonda = {.carWeight = 90.89, .carPrice = 15000};

	// Printing and accessing the members using the dot operator.
	printf("Details of car BMW is as follows\n");
	printf("carNumber = %u\n", carBMW.carNumber);
	printf("carNumber = %u\n", carBMW.carPrice);
	printf("carNumber = %u\n", carBMW.carMaxSpeed);
	printf("carNumber = %u\n", carBMW.carWeight);

	// Changing the value
	carFord.carNumber = 1000;

	printf("Details of car Ford is as follows\n");
	printf("carNumber = %u\n", carFord.carNumber);
	printf("carNumber = %u\n", carFord.carPrice);
	printf("carNumber = %u\n", carFord.carMaxSpeed);
	printf("carNumber = %u\n", carFord.carWeight);

	return 0;

}
