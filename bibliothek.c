#include <stdio.h>
#include "./Headers/bibliothek.h"

/**
*   Returns the number of days of the input date
**/
int day_of_the_year(struct dateClass date) {
    int daysOfTheYear = 0;
    int isValidDate = 0;

    isValidDate = exists_date(date);

    if (!isValidDate) {
        printf("Invalid Date\n");

        return 0;
    }
    daysOfTheYear = get_days_for_month(date.month, date.year);

    daysOfTheYear = daysOfTheYear + date.day;

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

    for (int i = 1; i < month; i++) {
        daysOfTheMonth += arrMonthDays[i-1];
    }

    if (isLeapyear && month > 2) {
        daysOfTheMonth = daysOfTheMonth + 1;
    }
    return daysOfTheMonth;
}

/**
*   Checks if leapyear. Return 1 if leapyear. Return 0 if no leapyear, Return -1 if invalid input
**/
int is_leapyear(int year) {
    int isLeapYear = -1;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                isLeapYear = 1;
            } else {
                isLeapYear = 0;
            }
        } else {
            isLeapYear = 1;
        }
    } else {
        isLeapYear = 0;
    }


    return isLeapYear;
}

/**
*   validate date. Return 1 if valid. Return 0 if invalid
**/
int exists_date(struct dateClass date) {
    if(date.day < 1 || date.day > 31) {
        return 0;
    }

    if(date.month < 1 || date.month > 12) {
        return 0;
    }

    if(date.year < 1582 || date.year > 2400) {
        return 0;
    }

    return 1;
}
