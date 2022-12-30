/******************
 Name-Hariom
 sec-15
 Roll no-21MI10021
 assig-2c
 find value of function at certain points by given fig.
 *********************/
#include<stdio.h>
#include<math.h>
int main ()
{
 float x,fx1,fx2,fx3;
 printf("Input the value of x:\n");
 scanf("%f", &x);
 printf("the value of x=%.2f\n",x);
 if (x>=0 && x<=10)
 printf("the value of f(%.2f)=%.2f\n",x,fx1=x);
 else if( x<=30)
 printf("the value of f(%.2f)=%.4f\n", x,fx3= 20-(sqrt(200-(pow((x-20),2)))));
 else if (x<=50)
 printf("the value of f(%.2f)=%.4f\n", x,fx2=(50-x)/2);
 else
 printf("the function is out of domain.\n");
 return 0;

}







