#include <stdio.h>
#include "main.h"
/**
 * main - checks the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n;

n = flip_bits(1024, 1);
printf("%lu\n", n);
n = flip_bits(402, 98);
printf("%lu\n", n);
n = flip_bits(1024,3);
printf("%lu\n", n);
n = flip_bits(1024, 1025);
printf("%lu\n", n);
return (0);
}
