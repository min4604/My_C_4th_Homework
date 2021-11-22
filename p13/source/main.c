#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 7

void printArray(const int a[][3]);

int main(void)
{
	int array1[2][3] = { {1,2,3},{4,5,6} };
	int array2[2][3] = { 1,2,3,4,5 };
	int array3[2][3] = { {1,2},{4} };

	printf("Values in array1 by row are : \n");
	printArray(array1);

	printf("Values in array2 by row are : \n");
	printArray(array2);

	printf("Values in array3 by row are : \n");
	printArray(array3);

	system("pause");
	return 0;
}

void printArray(const int a[][3])
{
	int i;
	int j;

	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}