#include <stdio.h>
int main ()
{
    int a= 65;
    switch (a)
    {
    case 'A':
        printf("no error\n");
        break;
    default:
        printf("error\n");
    }    
}