#include <stdio.h>

/**
  * main - prints alphabets in lower case
  *
  * Description: allowed to use putchar only
  *
  * Return: (0) success
  */

int main(void)
{
	char a = 122;

	while (a > 96)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
