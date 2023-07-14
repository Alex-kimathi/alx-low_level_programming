#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - entry point
  *
  * Return: true success
  */
int main(void)
{
	int n;
	int ch;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ch = n % 10;
	if (ch > 5)
	{
		printf("Last digit of %d is %d and si greater than 5\n", n, ch);
	}
		else if (ch == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, ch);
		}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ch);
	}
	return (0);
}
