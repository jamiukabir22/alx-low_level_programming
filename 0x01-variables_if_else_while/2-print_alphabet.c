#include<stdio.h>
/**
 * main - starting point
 * prints lowercase alphabet
 * Return: 0 is successful
 */
int main(void)
{
	char a2z;

	for (a2z = 'a'; a2z <= 'z'; a2z++)
	{
		putchar(a2z);
	}
	putchar('\n');
	return (0);
}
