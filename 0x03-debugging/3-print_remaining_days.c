#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - prints numbers of days
 * left in the year of a given date for leap year
 * @month: month using number format
 * @day: days in a month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Days of the year: %d\n", day);
		printf("The Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Thats Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Days of the year: %d\n", day);
			printf("The Remaining days: %d\n", 365 - day);
		}
	}
}
