#include <stdio.h>
int main()
{
    int a,i,c;
    printf("Enter the no for which you want the multipacation\n");
    scanf("%d",&a);
    for (
         i = 0; i < 10; i++)
    {
        c=i+1;
        printf("%d X %d = %d\n" ,a,c,a*c);
    }
    return 0;
}
