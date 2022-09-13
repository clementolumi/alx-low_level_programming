#include "main.h"
#include "6-abs.c"
#include <stdio.h>
/**
 * print_to_98 - Prints numbers from n to 98.
 * @n: The input number.
 * Return: no return.
*/
void print_to_98(int n)
{
	int I;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
