/**************
NAME-HARIOM
ROLL NO-21MI10021
SEC-15
ASSIG-3a-Find sum of given series up to N terms.
*****************/
#include<stdio.h>
int main ()
{
 float N,i,sum=0;
 printf("Input the value of N:\n");
 scanf("%f",&N);
 printf("given value of N=%.2f\n",N);
 for(i=2; i<=N; i++)
 {
 sum=sum+(i-1)/i ;
 }
 printf("sum of given series=%.4f\n",sum+1);
 return 0;
}
