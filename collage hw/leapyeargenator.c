#include <stdio.h>
int main()
{
    int year, i;
    printf("Enter the last year you want leap year from 1800 to the year you enter \n");
    scanf("%d", &year);
    printf("The leap year from 1800 to %d are \n", year);

    for (i = 1800; i <= year; i++)
    {
        if ((i % 400) == 0)
        {
            printf("%d\n", i);
        }
        else if (i % 100 != 0 && i % 4 == 0)
        {
            printf("%d\n", i);
        }
    }
}