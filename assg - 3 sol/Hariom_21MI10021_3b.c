/*****************
NAME-HARIOM
SEC-15
ROLL NO-21MI10021
ASSIG_3b-print N rows in form of triangle with '*'
*******************/
#include<stdio.h>
int main ()
{
 int i,j,N; //i=row, j=column
 printf("Input the value of N:\n");
 scanf("%d",&N);
 printf("The value of N=%d\n",N);
 for(i=1;i<=N;i++)
 {
 for(j=1;j<=i;j++)
{
 printf("*");
}
 printf("\n");
}
 return 0;
 }
