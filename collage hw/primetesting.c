#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("the number is not a prime number \n");
            break;
        }
        else
        {
            printf("the number is a prime number \n");
            break;
        }
    }
}