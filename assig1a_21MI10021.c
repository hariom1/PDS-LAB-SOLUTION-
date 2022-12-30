 /*find the perimeter of triangle*/
 #include<stdio.h>
 #include<math.h>  /*sqrt*/
  int main()
{
  float x1,y1,x2,y2,x3,y3,s1,s2,s3,perimeter ;
  printf("1st coordinate (x1,y1):\n");
  scanf("%f%f",&x1,&y1);
  printf("2nd coordiante (x2,y2):\n");
  scanf("%f%f",&x2,&y2);
  printf("3rd coordiante (x3,y3):\n");
  scanf("%f%f",&x3,&y3);
  printf("%f %f %f %f %f %f",x1,y1,x2,y2,x3,y3);
  s1= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  s2= sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
  s3= sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
  perimeter= s1+s2+s3 ;
  printf("the perimeter of triangle=%.2f\n", perimeter);
  return 0;
}
