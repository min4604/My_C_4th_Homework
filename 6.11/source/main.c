#include<stdio.h>
#include<stdlib.h>

int i, j;
int ii, jj;
int main(void)
{
	printf("Enter iength:");
	scanf_s("%d", &ii);
	printf("Enter breadth:");
	scanf_s("%d", &jj);
	for (i = 0; i < ii; i++)
	{
		for (j = 0; j < jj; j++)
		{
			if (i == 0 || i == (ii-1) || j == 0 || j == (jj-1))
				printf("+");
			else
				printf(" ");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}