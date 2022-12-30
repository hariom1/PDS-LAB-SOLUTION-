/*calculate equivalent resistance and power consumed */
#include <stdio.h>
#include <math.h>
int main ()
{
 float R1,R2,R3,R,P1,P2,P3,P,E,I ;
 /*TOTAL RESISTANCE=R, TOTAL POWER=P */
 printf("put the value of R1,R2,R3,E\n");
 scanf("%f%f%f%f",&R1,&R2,&R3,&E);
 printf("%f%f%f%f%f",&R1,&R2,&R3,&E);
 R=(R2*R3)/(R2+R3)+R1 ;
 I=E/R;
 P=E*I ;
 printf("total equivalent resistance =%.3f\n",R);
 printf("total power consumed=%.3f\n",P);
 printf("power consumed in R1=%.3f\n",P1=I*I*R1);
 printf("power consumed in R2=%.3f\n",P2=pow(((R3/(R2+R3))*I),2)*R2);
 printf("power consumed in R3=%.3f\n",P3=pow(((R2/(R2+R3))*I),2)*R3);
 return 0;
}

