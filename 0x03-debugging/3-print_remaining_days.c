#include<stdio.h>
#include"main.h"
/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of the month
 * @year: year
 * Return: 0
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 02;
	day = 29;
	year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_ay(month, day);

	print_remaining_days(month, day, year);

	return (0);
}

