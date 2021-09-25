#include <stdio.h>
int main()
{
    int class,fail,total,pass;
    printf("Enter the class \n 1 for first class\n 2 for second class\n 3 for third class \n");
    scanf("%d",&class);
    printf("Enter the number of subject student has failed in\n");
    scanf("%d",&fail);
    printf("Enter the total number of subject\n");
    scanf("%d",&total);

    pass= total - fail;

    switch (class)
    {
    case 1:
        if (fail > 3)
        {
            printf("No grade failed in more than 3 subject\n");
        }
        else
        {
            printf("the total grade points is %d \n", pass*5);
        }
        break;
    case 2:
        if (fail > 2)
        {
            printf("No grade failed in 2 subject\n");
        }
        else 
        {
            printf("the total grade points is %d \n", pass*4);
        }
        break;
    case 3:
        if (fail > 1)
        {
            printf("No grade failed in 1 subject\n");
        }
        else
        {
            printf("the total grade points is %d \n", pass*5);
        }
        break;
    
    default:
        break;
    }

}