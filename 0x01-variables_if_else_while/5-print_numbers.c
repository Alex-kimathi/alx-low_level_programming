#include <stdio.h>
#include <unistd.h>
/**
 * main- entry point
 *
 * Return: ALways 0 success
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');

	return (0);
}
