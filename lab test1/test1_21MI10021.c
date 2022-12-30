/*********************
NAME-HARIOM
SECTION-15
ROLL NO-21MI10021
TEST 1-check given number is co-prime or not.
*********************************************/
#include<stdio.h>
//using function to check co-prime condition.
int coprime(int a, int b)    //a and b are two numbers.
{
    int minimum, i, flag = 1;
    minimum = a < b ? a : b ;
    for(i= 2; i <= minimum; i++)
    {
        if( a % i== 0 && b % i == 0 ) //apply condition for co-prime.
        {
            flag = 0;
            break;
        }
    }

    return flag;  //returning function.
}
int main()
{
    int a[100],N,i,count=0;
    printf("enter the length of array N:\n");
    scanf("%d",&N);                              //taking input as N.

    printf("input the value of given array:\n");
    for(i=1; i<=N; i++)
    {
        scanf("%d",&a[i]);   //taking input of array.
    }
    printf("these are the given input:\n");
    for(i=1; i<=N; i++)
    {
        printf("%d,",a[i]);   //printing the value of given array.
    }

    //Now condition for checking co-prime for given array.

    printf("\n");
    printf("these are the pairs of co-prime numbers:\n");
    for(int i=1; i<=N-1; i++)
    {
        for(int j=i+1; j<=N; j++)
        {

            if(coprime(a[i],a[j]))     //check co-prime using function.
            {
                    count++;
                printf("%d.(%d,%d);\n",count ,a[i],a[j]);  //printing pairs of co-prime number.

            }

        }
    }

    return 0;  //program ends.
}
