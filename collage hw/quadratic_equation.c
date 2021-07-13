#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Enter the value of a,b and c\n");
    scanf("%f%f%f", &a, &b, &c);

    float s, r1, r2;
    s = sqrt(b * b - (4.0 * a * c));
    r1 = (-b + s) / (2.0 * a);
    r2 = (-b - s) / (2.0 * a);

    printf("the value of x is %.3f or %.3f\n", r1, r2);
}