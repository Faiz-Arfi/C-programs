// Wap in c to display multiplication table of given integer 
#include<stdio.h>
int main()
{
    printf("Enter the number you want the multiplication for \n");
    int n,r;
    scanf("%d",&n);

    for (int i = 1; i <= 10; i++)
    {
        r = n*i;
        printf("%d X %d = %d \n",n,i,r);
    }
    
}