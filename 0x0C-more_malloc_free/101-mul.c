#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - it checks if a string contains a non-digit char
 * @s: a string will be evaluated
 * Return: 0, 1 otherwise
 */

int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - a fun. that returns the length of a string
 * @s: a string to evaluate
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	return (y);
}

/**
 * errors - it handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - a fun. that multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: an array of arguments
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	char *s, *s1;
	int len1, len2, len, z, carry, dig, dig2, *res, w = 0;

	s = argv[1], s1 = argv[2];
	if (argc != 3 || !is_digit(s) || !is_digit(s1))
		errors();
	len1 = _strlen(s);
	len2 = _strlen(s1);
	len = len1 + len2 + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (1);
	for (z = 0; z <= len1 + len2; z++)
		res[z] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		dig = s[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s1) - 1; len2 >= 0; len2--)
		{
			dig2 = s1[len2] - '0';
			carry += res[len1 + len2 + 1] + (dig * dig2);
			res[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[len1 + len2 + 1] += carry;
	}
	for (z = 0; z < len - 1; z++)
	{
		if (res[z])
			w = 1;
		if (w)
			_putchar(res[z] + '0');
	}
	if (!w)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
