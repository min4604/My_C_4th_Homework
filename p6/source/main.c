#include<stdio.h>
#include<stdlib.h>

float prin,rate,day ;

int main(void)
{
	while (prin != -1)
	{
		printf("Enter loan principal (-1 to end):");
		scanf_s("%f", &prin);
		if (prin == -1)
			break;
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in day:");
		scanf_s("%f", &day);
		printf("The interest charge is $%.2f\n\n", (prin*rate*day / 365));
	}
	system("pause");
	return 0;
}