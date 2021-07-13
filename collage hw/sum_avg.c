#include <stdio.h>
int main ()
{
    int a,b,c,d,e;
    printf("Enter five numbers\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    int sum;
    float avg;
    sum=a+b+c+d+e;
    avg=sum/5;

    printf("The sum is %d\n",sum);
    printf("The average is %f\n", avg);
    }