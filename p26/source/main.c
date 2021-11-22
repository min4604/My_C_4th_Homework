#include<stdio.h>
#include<stdlib.h>

int account;
float balance,charges,credits,limit, newbalance;

int main(void)
{
	while (account != -1)
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &account);
		if (account == -1)
		{
			break;
		}
		printf("Enter beginning balance:");
		scanf_s("%f", &balance);
		printf("Enter total charges:");
		scanf_s("%f", &charges);
		printf("Enter total credits:");
		scanf_s("%f", &credits);
		printf("Enter credit limit:");
		scanf_s("%f", &limit);
		newbalance = balance + charges - credits;
		if (newbalance > limit)
		{
			printf("Account:\t%d\n", account);
			printf("Credit limit:\t%.2f\n",limit);
			printf("Balance:\t%.2f\n", newbalance);
			printf("Credit Limit Exceeded\n");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}