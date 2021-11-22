#include<stdio.h>
#include<stdlib.h>

int who;
float Weeklysalary = 1000;
float hoursalary = 150;
float ressalary = 50;
float hourwork,total;
int main(void)
{
	while (1 == 1)
	{
		printf("Enter  1  is managers\n");
		printf("Enter  2  is hourly workers\n");
		printf("Enter  3  is commission workers\n");
		printf("Enter  4  is pieccworker\n");
		printf("Enter -1  to end");
		scanf_s("%d", &who);
		if (who == -1)
			break;
		switch (who)
		{
		case 1:
			printf("Salary is $%.2f\n\n", Weeklysalary);
			break;
		case 2:
			printf("Enter # of hours worked :");
			scanf_s("%f", &hourwork);
			
			if (hourwork <= 40)
			{
				total = hourwork * hoursalary;
			}
			else
			{
				total = hoursalary * 40 + hoursalary * 1.5*(hourwork - 40);
			}
			printf("Salary is $%.2f\n\n", total);
			break;
		case 3:
			printf("Enter # of gross weekiy sales :");
			scanf_s("%f", &hourwork);
			total = 250 + (hourwork*0.057);
			printf("Salary is $%.2f\n\n", total);
			break;
		case 4:
			printf("Enter # of items they produce :");
			scanf_s("%f", &hourwork);
			total = hourwork * ressalary;
			printf("Salary is $%.2f\n\n", total);
			break;
		
		}
	}
	

	system("pause");
	return 0;
}