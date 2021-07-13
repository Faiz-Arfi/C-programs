/*if year is divisible by 400 then leap year is true
    else if year is divisible by 100 then leap year is false
        else if year is divisible by 4 then leap year is true
            else leap year is false*/
#include <stdio.h>
int main()
{
    int year, a;
    printf("Enter the year\n");
    scanf("%d", &year);

    if ((year % 400) == 0)
    {
        printf("the year is leap year\n");
    }
    else if (year % 100 != 0 && year % 4 == 0)
    {
        printf("the year is leap year\n");
    }
    else
    {
        printf("the year is't leap\n");
    }
}
