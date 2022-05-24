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
    } while (!day_of_the_year);

    printf("It's the %d day of the year.\n", day_of_the_year);

    return;
}
