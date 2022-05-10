/**
*   Justin Nolan
*   29.03.22
*   WIP: Tag des Jahres
**/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*   Returns the number of days of the input date
**/
int day_of_the_year(int day, int month, int year) {
    int daysOfTheYear = 0;
    int isValidDate = 0;

    isValidDate = exists_date(day, month, year);

    if (!isValidDate) {
        printf("Invalid Date\n");

        return;
    }

    daysOfTheYear = get_days_for_month(month, year);

    day_of_the_year = day_of_the_year + day;

    return daysOfTheYear;
}

/**
*   Return the number of days for in the input month.
**/
int get_days_for_month(int month, int year) {
    int daysOfTheMonth = 0;
    int arrMonthDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int isLeapyear = -1;

    isLeapyear = is_leapyear(year);

    for (i = 0; i <= month; i++) {
        daysOfTheMonth += arrMonthDays[i];
    }

    if (isLeapYear && month >= 2) {
        daysOfTheMonth = daysOfTheMonth + 1;
    }

    return daysOfTheMonth;
}

/**
*   Checks if leapyear. Return 1 if leapyear. Return 0 if no leapyear, Return -1 if invalid input
**/
int is_leapyear(int year) {
    int isLeapYear;

    isLeapYear = 0;

    return isLeapYear;
}

/**
*   validate date. Return 1 if valid. Return 0 if invalid
**/
int exists_date(int day, int month, int year) {
    if(day < 1 || day > 31) {
        return 0;
    }

    if(month < 1 || month > 12) {
        return 0;
    }

    if(year < 1582 || year > 2400) {
        return 0;
    }

    return 1;
}

int main() {
    int year = 0;
    int month = 0;
    int day = 0;
    int dayOfTheYear;

    do {
        printf("Input Year\n\n");
        scanf("%d", &year);

        printf("Input Month\n\n");
        scanf("%d", &month);

        printf("Input Day\n\n");
        scanf("%d", &day);

        dayOfTheYear = day_of_the_year(day, month, year);
    } while (!day_of_the_year)

    printf("It's the %d day of the year.\n", day_of_the_year);

    return;
}