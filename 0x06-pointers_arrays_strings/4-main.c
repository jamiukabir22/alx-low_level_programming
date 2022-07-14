#include "main.h"
#include <stdio.h>
/**
 * main - checks code
 * @a: array of intergers
 * @n: number of elements to be swapped
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
