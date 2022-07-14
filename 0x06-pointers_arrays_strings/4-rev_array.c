#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: 0.
 */
void reverse_array(int *a, int n)
{
	int forward;
	int backward;
	int temp;

	forward = 0;
	backward = n - 1;
	while (forward < backward)
	{
		temp = a[forward];
		a[forward] = a[backward];
		a[backward] = temp;
		forward++;
		backward--;
	}
}
