#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a;
	int b;
	char c;
	srand((unsigned int)time(NULL));
	a = rand() % 100;
	b = 100;



	while (1)
	{
		printf("Enter your number guess between 0 and 100:");
		scanf("%d", &b);
		if (a < b)
		{
			printf("Guess lower -");

		}
		if (a > b)
		{
			printf("Guess higher -");

		}
		if (a == b)
		{
			printf("You guessed correctly!");
			break;
		}

	}

}

