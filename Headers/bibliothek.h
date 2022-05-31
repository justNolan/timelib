#ifndef BIBLIOTHEK_H_INCLUDED
#define BIBLIOTHEK_H_INCLUDED

struct dateClass {
    int year;
    int month;
    int day;
};

// Funktionsprototyp
int day_of_the_year(struct dateClass date);
int get_days_for_month(int month, int year);
int is_leapyear(int year);
int exists_date(struct dateClass date);



#endif // BIBLIOTHEK_H_INCLUDED
