/***************************
  Name-Hariom
  Roll no-21MI10021
  section-15
  assig-2a
  Find value of f(x) and its dy/dx
  ****************************/
#include <stdio.h>
#include <math.h>
int main ()
{
 float x,function,derivative,sign;
 printf("put the value of x:\n");
 scanf("%f",&x);
 printf("value of x=%.2f\n",x);
 function= pow(x,4)-36*pow(x,3)+4*x-3 ;
 derivative= 4*pow(x,3)-108*pow(x,2)+4 ;
 printf("value of f(%.2f)=%.3f\n",x,function);
 if(derivative > 0)
  printf("sign of derivative=1\n");
  else if (derivative < 0 )
    printf("sign of derivative=-1\n");
   else  printf("sign of derivative=0\n");

 return 0;
}


