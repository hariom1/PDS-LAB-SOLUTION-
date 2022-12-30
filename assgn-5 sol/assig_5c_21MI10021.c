/**************
Name -Hariom
Sec-15
Roll no -21MI10021
assig_5c_find the sum of first kth minima.
*********************************************************/

 #include<stdio.h>
    //Using function.
      float min(float a[],float N,float K)
{
        for(int i=1; i<=N; i++)
  {
           for(int j=i; j<=N; j++)
      {
                if(a[i]>a[j])     //apply condition for sorting.
            {
                    float temp=a[i];
                    	  a[i]=a[j];
                         	 a[j]=temp;    }
                         	}
                         	     }    //sorting ends.
             //now return function for  sum for till kth minimum value.
          float sum=0;
              for(int i=1; i<=K; i++) {
                 sum+=a[i] ;   }
           {
                  return (sum) ; }
            }
 int main ()
{
    int i;
      float a[20],N,K,sum;
      printf("Enter the value of N and k resp:\n");
         scanf("%f%f",&N,&K);

      printf("enter the value of all given Input array:\n");
       for(i=1;i<=N; i++) {
          scanf("%f",&a[i]); }

     printf("these are the following input:\n");  //print the given input.
        for(i=1;i<=N; i++) {
           printf("%.2f\n",a[i]);
         }
        sum = min(a,N,K);
             for(i=1;i<=K; i++) {
                  printf("the %d minima=%.2f\n",i,a[i]);  //printing value for till kth minima.
       }
            printf("The sum of first %.0f th minima = %.3f\n",K,sum);  //print the final sum for kth minimum value.

  return 0;
}

