#include "main.h"

int check_palindrome(char *s, int start, int end);
int string_length(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = string_length(s);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * string_length - calculates the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_length(s + 1));
}

/**
 * check_palindrome - checks if a substring is a palindrome
 * @s: string to check
 * @start: start index of the substring
 * @end: end index of the substring
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));

}
