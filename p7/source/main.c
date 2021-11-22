#include<stdio.h>
#include<stdlib.h>

float hourwork,rate,total;
int main(void)
{
	while (1 == 1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%f", &hourwork);
		if (hourwork == -1)
			break;
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &rate);
		if (hourwork <= 40)
		{
			total = hourwork * rate;
		}
		else
		{
			total = rate * 40 + rate * 1.5*(hourwork - 40);
		}
		printf("Salary is $%.2f\n\n", total);
	}
	system("pause");
	return 0;
}