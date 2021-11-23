#include<stdio.h>
#include<stdlib.h>



int main(void)
{
	char string1[20];
	char string2[] = "string literal";
	int i;

	printf("Enter a string: ");
	scanf_s("%s",string1,sizeof(string1));
	printf("string1 is: %s\nstring2 is %s\n", string1, string2);
	printf("string1 with spaces between characters is: \n");

	for (i = 0; string1[i] != '\0'; i++)
		printf("%c", string1[i]);

	printf("\n");


	system("pause");
	return 0;
}