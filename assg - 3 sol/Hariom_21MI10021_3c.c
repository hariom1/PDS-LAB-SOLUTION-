/****************
name-Hariom
roll no-21MI10021
sec-15
Assig-3c- Calcuate the sum of prime numbers.
******************/
#include <stdio.h>
int main ()
{
int i,j,N,sum=0;
printf("find the sum of all prime numbers 1 to N:\n");
scanf("%d",&N);
for(j=2; j<N; j++)
{
for(i=2; i<j ; i++)

{

 if(j%i==0)
  break ;
}

  if(i==j)

   sum=sum+i;
}
   printf("sum of all prime numbers bew 1 to %d = %d\n",N,sum);
   return 0;
   }

