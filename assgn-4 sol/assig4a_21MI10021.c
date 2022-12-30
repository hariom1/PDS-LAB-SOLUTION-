/*************
Name -hariom
roll no-21MI10021
Sec-15
assig_4a- Find total cost, total items,maximum price & maximum expenditure .
*****************/

#include <stdio.h>
int main ()
{
    float total_unit=0,a[100],total_price=0,max;
        int i,N,b[100],count=0;

        printf("input the no of items N:\n");
         scanf("%d",&N);
            for(i=1; i<=N; i++)
   {
       printf("input the value of no of item %d and their price resp:\n",i);
       scanf("%d%f",&b[i],&a[i]);
   }

        for(i=1; i<=N; i++)
        printf("items %d: %d & price:%.2f \n",i,b[i],a[i]);

       //now find total cost of procurement.
      {
         for(i=1; i<=N; i++)
         total_price+=(a[i]*b[i]);
           }

          //Now find maximum unit price.
        {
           for (i=1; i <=N; i++)
            if (a[1] <=a[i])
               a[1] = a[i];
          }

         //Total number of items procured.

    {
            for(i=1; i<=N; i++)
               total_unit+=b[i];
           }

        //Now find maximum expenditure at particular item.

     {
             for (i=1; i <=N; i++)
              if(max <=a[i]*b[i])
     {
          max=a[i]*b[i];
          count=i;
       }
         printf("\n1.maximum unit price:RS =%.3f\n",a[1]);
         printf("2.Total cost of procurement:RS=%.3f\n",total_price);
         printf("3.Total number of items procured:%.2f\n",total_unit);
         printf("4.the item for which the maximum expenditure is made:item %d.\n",count);

       }
         return 0;
}


