/*****************
Name-Hariom
sec-15
Roll no-21MI10021
Assig 6c- write a program to reverse the digit and find the number which is palindromes in an array.
********************/
#include<stdio.h>
#include<math.h>
int reverse_digit(int number)
{
    int  NOD  = ((int)log10(number)); //finding NOD= number of digit in a given number
    if(number==0)
        return (0);
    return((number%10*pow(10,NOD))+reverse_digit(number/10)); //apply recursion to find reverse of a number.
}

int main()
{
    int L,a[20],number_palindrome=0,i,temp;               //L=length of array.

    printf("input the length of array:\n");
    scanf("%d",&L);  //taking the value of L.

    printf("Enter the value of given array:\n");
    for(i=1; i<=L; i++)
    {
        scanf("%d",&a[i]);            //taking the value of given array.
    }

    printf("these are input of given array:\n");
    for(i=1; i<=L; i++)
    {
        printf("%d\n",a[i]);       //printing the value of given array.
    }

    for(i=1; i<=L; i++)
    {
        int count_zeros=0;  //counting terminating zeroes of a number.
        temp=a[i];
        while(temp%10==0)
        {
            temp/=10;
            count_zeros++;
        }   //counting end.

        printf("%d.The reverse of number %d is = ",i,a[i]);
        for(int i=1; i<=count_zeros; i++)
        {
            printf("0");
        }
        printf("%d\n",reverse_digit(a[i]));
    }

    printf("these are the palindrome number:\n");
    for(i=1; i<=L; i++)
    {
        if(reverse_digit(a[i])==a[i])
        {
            printf("%d  ",a[i]);      //print the number which is palindrome.
            number_palindrome++; //counting palindromes number.
        }

    }
    printf("\ntotal number of palindromes is = %d\n",number_palindrome);  //printing total number of palindromes.

    return 0;
}




