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
	char a = 97;
	char b = 65;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	while (b < 91)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
