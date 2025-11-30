#include <stdio.h>
#include <math.h>
float squ(float a);
float tru(float a, float b);
float red(float a, float b);

int main()
{
    float a;
    printf("Enter a number :");
    scanf("%f", &a);
    float b;
    printf("Enter a number :");
    scanf("%f", &b);

    printf("the squere value is : %f\n", squ(a));
    printf(" the truangle value of %f and %f is : %f\n", a, b, tru(a, b));
    printf(" the redtangular value of %f and %f is : %f\n", a, b, red(a, b));
    return 0;
}
float squ(float a)
{
    return a * a;
}
float tru(float a, float b)
{
    return .5 * a * b;
}
float red(float a, float b)
{
    return a * b;
}