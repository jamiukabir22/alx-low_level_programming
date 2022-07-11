#include<stdio.h>
#include<stdlib.h>
/**
 * main - begins here
 * Description: prints all single digits of base 10
 * starts from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int c = 0;
		/* code goes there */
	while (c < 1)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
		}
	putchar('\n');
	return (0);
}

			
