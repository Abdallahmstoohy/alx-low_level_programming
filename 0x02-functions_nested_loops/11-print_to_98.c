#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - entry point
 * @n: tako bako
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
	}
	for (i = n; i > 97; i--)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
}