#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    scanf("%d",&a);
    if (a %4==0)
    {
        printf("%d",(a+1));
    }
    else
    printf("%d",(a-1));
    
	return 0;
}
