//wap in c to find the sum to first and last digit of number 
#include <stdio.h>
int main()
{
    int n; //variable for storing number given by user
    printf("Enter the number \n");
    scanf("%d",&n);

    int l;//variable for storing length of number
    int *tn = NULL;
    int rem=1;//variable used in claculating length of number
    tn= &n;
    printf("%d",tn);
    while (tn >= 10) //loop for calculating length of number
    {
        tn = tn/10;
        l++;
    }
    printf("%d",l);

}