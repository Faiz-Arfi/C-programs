#include <stdio.h>
int main()
{
    int days, week, year;

    printf("Enter days\n");
    scanf("%d",&days);

    int rem_year,rem_week;
    year=days/365;
    rem_year=days%365;

    week=rem_year/7;
    rem_week=rem_year%7;

    printf("%d years %d week %d days\n",year,week,rem_week);

}