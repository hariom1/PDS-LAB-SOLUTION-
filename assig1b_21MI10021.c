/*C program to calculate Compound Interest*/

#include <stdio.h>
#include <math.h>

int main()
{
    float p, rate=5.5,n, CI;

    /* Input principle, time and rate */
    printf("Enter p(amount): \n");
    scanf("%f",&p);

    printf("Enter n:\n");
    scanf("%f",&n);
    printf("%f%f",p,n);
    /* Calculate compound interest */
    CI = p* (pow((1 + rate / 100),n)-1);

    /* Print the resultant CI */
    printf("Compound Interest = %f\n",CI);

    return 0;
}

