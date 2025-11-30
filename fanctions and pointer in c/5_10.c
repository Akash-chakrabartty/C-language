#include <stdio.h>
int area(float y, float z)
{
    return (.5 * y * z);
}
int main()
{
    float ln, wd;
    printf(" enter the length  and the  width :");
    scanf("%f %f", &ln, &wd);

    float value = area(ln, wd);
    printf("the value is : %f", value);
    return 0;
}
