/*************
Name-Hariom
Roll no-21MI10021
Sec-15
assig_5a-Check triangle is formed or not using function.
***************/
#include<stdio.h>
#include<math.h>
float Check_triangle(float a,float b,float c) {
  if((a+b>c)&&(a+c>b)&&(b+c>a))              //condition for validity of a triangle.
    return 1;
    else return 0;
   }
  int main ()
{
    float x,y,z;                         // x,y,z= side of a triangle.
    printf("input the value of side of triangle x,y & z resp:\n");
     scanf("%f%f%f",&x,&y,&z);
     printf("The side of triangle:%.2f,%.2f and %.2f\n",x,y,z);
     float vaild_triangle = Check_triangle(x,y,z);
     if(vaild_triangle==1)
      printf("Possible to form a triangle.\n");
  else
       printf("Not possible to form a triangle.\n");
return 0;
}
