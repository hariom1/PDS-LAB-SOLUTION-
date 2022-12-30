/**********************
Name-Hariom
sec-15
roll no-21MI10021
assig 6a- compute the value of function.
************************************************/
#include<stdio.h>
//using recursive function to find the value of a given function.
int value=0;
int f(int n)
{
    value++;
    if(n<0)
    {
        return (0);
    }
    else if(n==0)
    {
        return (1);
    }
    return (f(n-2)-2*f(n-1)+f(n-3)); //writing function.
}
int main ()
{
    int M,Result=0,i;
    printf("input the value of M:\n");
    scanf("%d",&M);      //taking value of M.

    for(i=0; i<M; i++)
    {
        Result+=f(i);   //computing result of given function.
    }

    printf("value of f(0)+f(1)+f(2)+....till %d terms=%d\n",M,Result); //printing value of expression.
    printf("recursive calls in the function = %d\n",value);              //printing recursive calls.

    return 0;
}
