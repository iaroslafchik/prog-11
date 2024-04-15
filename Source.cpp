#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int
	userDay = 0, userMonth = 0, userYear = 0,
	todayDay = 19, todayMonth = 9, todayYear = 2023;

int main()
{
	printf("Enter your date of birth: ");

	if (scanf("%d.%d.%d", &userDay, &userMonth, &userYear) != 3)
	{
		printf("Bad format!");
		return 0;
	}

	if (userMonth == todayMonth && userDay == todayDay)
	{
		printf("Today is your birthday. Happy Birthday!!!");
		printf("\nToday you are %d", todayYear - userYear);
	}
	else if (userMonth >= todayMonth && userDay > todayDay)
	{
		printf("You didn't have a birthday this year!!!");
		printf("\nYou are %d now", todayYear - userYear - 1);
	}
	else
	{
		printf("You already had a birthday this year!!!");
		printf("\nNow you are %d", todayYear - userYear);
	}


	return 0;
}