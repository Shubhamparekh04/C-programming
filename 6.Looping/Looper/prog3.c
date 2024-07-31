/*
Q.3 Digit Addition
Develop a Program to find the sum of a number's first and last digits.
*/

#include <stdio.h>
void main()
{
    int n, i = 0, fdg, ldg;
    printf("Enter number :");
    scanf("%d", &n);

    ldg = n % 10;

    while (n > 0)
    {
        fdg = n;
        n = n / 10;
        i++;
    }

    printf("The sum of the first and the last digit: %d", (fdg + ldg));
}