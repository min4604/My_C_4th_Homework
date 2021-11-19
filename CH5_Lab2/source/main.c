#include<stdio.h>
#include<stdlib.h>
#define issues 5
#define rating 10

void recordresponse(int issue, int rate);
void highest();
void lowest();
float average(int issue);
void display();

int response[issues][rating];
const char *topics[issues] = { "Global Warming","The Economy ","War","Health Care","Education" };

int main()
{
	int response, i;
	do
	{
		printf("plz rate the following topics on a scale from 1 - 10""\n 1=least important,10=the most important\n");
		for (i = 0; i < issues; i++)
		{
			do
			{
				printf("%s?", topics[i]);
				scanf_s("%d", &response);
			} while (response < 1 || response>10);

			recordresponse(i, response);
		}
		printf("enter 1 to stop. enter 0 to rate again.");
		scanf_s("%d", &response);
	} while (response != 1);

	display();
	system("pause");
	return 0;
}

void recordresponse(int issue, int rate)
{
	response[issue][rate - 1]++;
}

void highest()
{
	int highrate = 0;
	int hightopic = 0;
	int j, i;
	for (i = 0; i < issues; i++)
	{
		int topicrate = 0;
		for (j = 0; j < rating; j++)
		{
			topicrate += response[i][j] * (j + 1);
		}
		if (highrate < topicrate)
		{
			highrate = topicrate;
			hightopic = i;
		}
	}
	printf("the highest rated topic was %s with a total rating of %d\n", topics[hightopic], highrate);
}

void lowest()
{
	int lowrate = 0;
	int lowtopic = 0;
	int j, i;
	for (i = 0; i < issues; i++)
	{
		int topicrate = 0;
		for (j = 0; j < rating; j++)
		{
			topicrate += response[i][j] * (j + 1);
		}
		if (i == 0)
		{
			lowrate = topicrate;
		}
		if (lowrate > topicrate)
		{
			lowrate = topicrate;
			lowrate = i;
		}
	}
	printf("the lowest rated topic was %s with a total rating of %d\n", topics[lowtopic], lowrate);
}

float average(int issue)
{
	float total = 0;
	int counter = 0;
	int i;
	for (i = 0; i < rating; i++)
	{
		if (response[issue][i] != 0)
		{
			total += response[issue][i] * (i + 1);
			counter += response[issue][i];
		}
	}
	return total / counter;
}

void display()
{
	int i, j;
	printf("%20s", "topic");
	for (i = 1; i <= rating; i++)
	{
		printf("%4d", i);
	}
	printf("%20s", "average rating");
	printf("\n");
	for (i = 0; i < issues; i++)
	{
		printf("%20s", topics[i]);
		for (j = 0; j < rating; j++)
		{
			printf("%4d", response[i][j]);
		}
		printf("%20.2f\n", average(i));
	}
	highest();
	lowest();
}
