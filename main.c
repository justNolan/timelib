/**
*   Justin Nolan
*   29.03.22
*   WIP: Tag des Jahres
**/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "./Headers/bibliothek.h"

int main() {
    int dayOfTheYear = 0;

    struct dateClass date;

    do {
        date.year = 0;
        date.month = 0;
        date.day = 0;
        dayOfTheYear = 0;

        printf("Input Year\n\n");
        scanf("%d", &date.year);

        printf("Input Month\n\n");
        scanf("%d", &date.month);

        printf("Input Day\n\n");
        scanf("%d", &date.day);

        dayOfTheYear = day_of_the_year(date);
    } while (dayOfTheYear == 0);

    printf("It's the %d day of the year.\n", dayOfTheYear);

    return;
}
