#include <stdio.h>

int main()
{
    float a,b,c, average;
    printf("Enter the values for a, b and c: \n");
    scanf("%f %f %f", &a, &b, &c);
    average = (a + b + c)/3;
    printf("Average = %f", average);
    return 0;
}