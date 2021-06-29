#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    
    if (a>b)
    printf("%d is grater than %d \n",a,b);

    else
    printf("%d is grater than %d \n",b,a);
    
    return 0;
}