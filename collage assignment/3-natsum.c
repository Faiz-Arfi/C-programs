#include <stdio.h>
int main()
{
    int n;
    printf("Enter the last natural number \n");
    scanf("%d",&n);

    int i,sum;
    for ( i = 1; i <= n; i++)
    {
        printf("%d\n",i);
        sum = sum + i;
        printf("the sum is %d\n",sum);


    }
    
}