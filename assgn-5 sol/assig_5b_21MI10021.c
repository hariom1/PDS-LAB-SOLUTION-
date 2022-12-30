/**************
Name-HARIOM
Roll no-21MI10021
Sec-15
assig_4b- find the median for every numbers ad take input as their three consecutive numbers.
*******************/
#include<stdio.h>
#include<math.h>

 float Median3(float a,float b,float c)
   //Now apply condition for sorting between three numbers.
 {
    if((a>b&&b>c)||(c>b&&b>a)){ return (b);  }
       if((c>a&&a>b)||(b>a&&a>c)) { return (a) ; }
          if((b>c&&c>a)||(a>c&&c>b)){  return(c); }
   }
  int main ()
{
      int N,i,j,t;     //N= number of array
       float a[20],Median;
       printf("Input the value of N:\n");
       scanf("%d",&N);
       for(i=1;i<=N;i++) {
         printf("enter the value of data[%d]\n",i);  //printing value of array.
         scanf("%f",&a[i]);
    }
      printf("these are the following original input array :\n");  //printing the value of original array.
      for(i=1;i<=N;i++) {
        printf("%.2f\n",a[i]);
     }

  {
     //Assuming value zero if they are beyond the limit of valid array.
     if(i<=0) a[i]=0;
       if(i>=N+1) a[i]=0;

         for(i=1;i<=N;i++)
    {
        Median= Median3( a[i-1], a[i],a[i+1]);    //selecting three consecutive numbers.
        printf("Median for %d processed array input= %.2f\n",i,Median);   //printing median for processed array input.
     }
   }
     return 0;
}
