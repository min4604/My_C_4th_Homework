#include<stdio.h>
#include<stdlib.h>

float money;

int main(void)
{

	while (money != -1)
	{
		printf("Enter sales in dollars (-1 to end):");
		scanf_s("%f", &money);
		if (money == -1)
			break;
		printf("Salary is:%.2f\n", (200 + (money*0.09)));
	}

	system("pause");
	return 0;
}