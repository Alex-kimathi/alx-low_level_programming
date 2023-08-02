#include "main.h"

/**
 * rev_string - Prints a string in reverse.
 * @s: The string to be printed.
 */
void rev_string(char *s)
{
	int len = 0, index;

		while (s[len] != '\0')
			len++;

		for (index = len - 1; index >= 0; index--)
			return (s[index]);
}
