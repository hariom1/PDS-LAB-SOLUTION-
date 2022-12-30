/* Check whether form a triangle or straight line or non distinct point */
#include <stdio.h>
#include <math.h>
int main ()
{
 float x1,x2,x3,y1,y2,y3,area,d1,d2,d3,sp;
 printf("input the first coordiante:\n");
 scanf("%f%f",&x1,&y1);
 printf("input the second coordiante:\n");
 scanf("%f%f",&x2,&y2);
 printf("input the third coordiante:\n");
 scanf("%f%f",&x3,&y3);
 printf("Given coordiantes:(%.2f,%.2f),(%.2f ,%.2f),(%.2f,%.2f)\n",x1,y1,x2,y2,x3,y3);
 d1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
 d2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
 d3=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
 sp=(d1+d2+d3)/2;
 area=sqrt(sp*(sp-d1)*(sp-d2)*(sp-d3));
 if (area >0)
 printf("Triangle formed & it's area=%.3f\n",area);
   else if(area==0,d1>d2 && d1>d3)
  printf("Straight line formed and distance bew end points=%.3f\n", d1);
   else if(area==0,d2>d1 && d2>d3)
  printf("Straight line formed and distance bew end points=%.3f\n", d2);
  else if(area==0,d3>d2 && d3>d1)
  printf("Straight line formed and distance bew end points=%.3f\n", d3);
   else if(area==0,x1==x2 && y1==y2)
  printf("Non distinct points and distance bew end points=%.3f\n",d3);
  else if(area=0,x1==x3 && y1==y3)
  printf("Non distinct points and distance bew end points=%.3f\n",d2);
 else if(area==0,x2==x3 && y2==y3)
  printf("Non distinct points and distance bew end points=%.3f\n",d1);
return 0;
}





