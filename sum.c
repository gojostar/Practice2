#include <stdio.h>

int main ()
{
    printf("hello world\n");
    float a,b, sum;
    printf("Enter the two numbers: ");
    scanf("%f %f", &a, &b);
    sum = a+b;
    printf("The sum is : %f \n", sum);
    return 0;
}