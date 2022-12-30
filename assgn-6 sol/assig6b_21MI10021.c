/*******************
Name-Hariom
sec-15
Roll no-21MI10021
assig_6b-Compute sum of digits and and prints which have maxium sum of digits.
*****************************/
#include<stdio.h>
//to find sum of digits.
int sum_digits(int value)
{
    if(value<10)
    {
        return value;
    }
    else
    {
        return ((value%10) + sum_digits(value/10)); //calculate sum of digits using recursive function.
    }
}
int main ()
{
    int a[20],sum_number[20],max_sum=0;
    int i,N;                             //N=total number of input that are given.
    printf("Enter length of array N:\n");
    scanf("%d",&N);

    printf("enter the positive integers array:\n");
    for(i=1; i<=N; i++) //taking inputs of given array.
        scanf("%d",&a[i]);

    printf("the length of array=%d\n",N); //print the value of N.
    printf("these are positive integers array:\n");
    for(i=1; i<=N; i++)
        printf("%d\n",a[i]);  //print the given value of array.

    printf("numbers which have max sum of digits:\n");
    for(i=1; i<=N; i++)
    {
        sum_number[i]=sum_digits(a[i]); //to find sum of digits of given array.
    }
    for(i=1; i<=N; i++)
    {
        if(max_sum<=sum_number[i])
            max_sum=sum_number[i];  //find max sum of digit of a particular number.
    }

    for(i=1; i<=N; i++)
    {
        if(max_sum==sum_digits(a[i])) //compare max sum from the sum of digits.
        {
            printf("%d\n",a[i]);     //print the value which have max sum of digits in a given array.
        }
    }

    return 0;

}



