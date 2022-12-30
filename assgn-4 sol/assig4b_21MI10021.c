/*************
Name-HARIOM
Sec-15
Roll no-21MI10021
Assig 4b- Find the mean,standard deviation & grade their marks
*************/

#include<stdio.h>
#include<math.h>
int main ()
{
      int a[100],N,i;
     float mean=0, sum=0, SD=0 ;   //SD=sigma,mean=meu
      printf("Enter the number of students N:\n");
      scanf("%d",&N);
      printf("Enter the marks of student:\n");
         for(i=1; i<=N; i++)
      scanf("%d",&a[i]);
         for(i=1; i<=N; i++)

 /*Find mean of given marks */
{
    for(i=1; i<=N; i++)
    sum+=a[i];
    mean= sum/N;
}
   printf("Mean of students marks are = %.2f\n", mean);

    /* find Standard deviation of student marks */
{
      sum=0;
      for(i = 1; i<= N; i++)
     sum+=(a[i]-mean)*(a[i]-mean) ;
    SD= sqrt(sum/(N-1));
 }
    printf("SD of students marks= %.2f\n",SD);

    /* Grading of students marks */

{
          for(i=1; i<=N; i++)

           if(a[i]>=mean+ 1.5*SD)
      printf("students mark=%d & grade= EX\n",a[i]);
           else if(a[i]>=mean+0.5*SD)
      printf("students mark=%d & grade= A\n",a[i]);
          else if(a[i]>=mean-0.5*SD)
        printf("students mark=%d & grade= B\n",a[i]);
             else if(a[i]>=mean-SD)
       printf("students mark=%d & grade= C\n",a[i]);
         else if(a[i]>=mean-1.5*SD)
         printf("students mark=%d & grade= D\n",a[i]);
          else if(a[i]>=mean-2*SD)
    printf("students mark=%d & grade= P\n",a[i]);
          else if(a[i]<mean-2*SD)
    printf("students mark=%d & grade= F\n",a[i]);

}
  return 0;
}
