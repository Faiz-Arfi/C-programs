#include <stdio.h>
int main ()
{
    int p,r,t;
    printf("Enter principle\n");
    scanf("%d",&p);
    printf("Enter rate\n");
    scanf("%d",&r);
    printf("Enter time\n");
    scanf("%d",&t);

    int si=p*t*r;
    printf("The simple interest is %d\n",si);
    
}