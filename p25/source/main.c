#include<stdio.h>
#include<stdlib.h>
int i, j,k;
int main(void)
{
	k = 1;
	for (i = 5; i > 0; i--)
	{
		for (j = i; j > 0; j--)
		{
			printf("%s", " ");
		}
		for (j = 0 ; j < k; j++)
		{
			printf("%s", "*");
		}
		k += 2;
		printf("\n");
	}
	k -= 4;
	for (i =0; i <4 ; i++)
	{
		for (j = 0; j < (i+2); j++)
		{
			printf("%s", " ");
		}
		for (j = 0; j < k; j++)
		{
			printf("%s", "*");
		}
		k -= 2;
		printf("\n");
	}

	system("pause");
	return 0;
}