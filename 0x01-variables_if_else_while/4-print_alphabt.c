#include<stdio.h>
#include<stdlib.h>
/**
 * main - begins the codes
 * prints lower case alphabet
 * Return: 0 is successful
 */
int main(void)
{
	char ch = 'a';

		int i = 0;

			/* your code goes there */

			while (i < 26)
			{
				if (ch != 'q' &&  ch != 'e')

					putchar(ch);
				ch++;
				i++;
			}
			putchar('\n');

				return (0);
}
