#include "main.h"

/**
 * main - shows string, followed by a new line
 * @str: pointer to the printed string
 * Return: Always 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
