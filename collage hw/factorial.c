#include <stdio.h>
int main()
{
    int num, i;
    int f = 1;
    printf("Enter the number\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        f = f * i;
    }
    printf("the factorial is %d \n", f);
}