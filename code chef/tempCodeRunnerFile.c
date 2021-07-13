#include <stdio.h>
int main()
{
    int X;
    float Y;
    scanf("%d%f", &X, &Y);
    float a = (float)(Y - X);

    if (X % 5 == 0 && X <= 2000 && X >= 0)
    {
        if (Y > X && Y <= 2000 && Y > 0)
        {
            float Z = (a - 0.50);
            printf("%f", Z);
        }
        else
        printf("%f",Y);
    }
    else
    printf("%f",Y);
}