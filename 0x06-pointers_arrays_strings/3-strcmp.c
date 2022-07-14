#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int sed;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	sed = s1[i] - s2[i];
	return (sed);
}
