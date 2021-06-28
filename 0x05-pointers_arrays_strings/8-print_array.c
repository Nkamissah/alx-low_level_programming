/*
 * File: 7-puts_half.c
 * Auth: Nicholas Amissah
 */

#include "holberton.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	putchar('\n');
}
