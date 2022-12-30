/************
Name-Hariom
sec-15
ROLL NO-21MI10021
Assig_4c- Find close,closet & furtherest pair.
*******************/
#include<stdio.h>
#include<math.h>
 int main ()
{
         int N,i,j,f1=1,f2=2,c1=1,c2=2;  //N= number of coordiante, i=rows, j=column f=furtherest point,c=closest point
         float a[10][2],T,dist=0,max_d=0,min_d=0;

          printf("input the value of N and T resp:\n");
           scanf("%d%f",&N,&T);
      for(i=1;i<=N; i++)
     {
           printf("enter the %d coordiante:\n",i);
              for(j=1;j<=2;j++){
                scanf("%f",&a[i][j]);
           }
    }
             //print the given coordiante .

                 printf("given coordiante are:\n");
                 for( i=1;i<=N;i++){
                    printf("(");
                   for(j=1;j<=2;j++){
                      printf("%.2f,",a[i][j]);
          }
               printf(")\n");
}
                //Now using formula for finding distance.
            float distance(float a1,float b1,float a2,float b2){
               return sqrt(pow(a1-a2,2)+pow(b1-b2,2));
}
       //Print the close pairs less than T.

              printf("close pairs whose distance is less than %.2f:\n",T);
                    for( i=1;i<=N-1;i++){
                                     for(j=i+1;j<=N;j++){
                  float dist=distance(a[i][1],a[i][2],a[j][1],a[j][2]);
                    if(dist<T){
                           printf("((%.2f,%.2f),(%.2f,%.2f))\n",a[i][1],a[i][2],a[j][1],a[j][2]);
                   }
                //Now print closet and furtherest point.

              max_d=distance(a[f1][1],a[f1][2],a[f2][1],a[f2][2]);
                  min_d=distance(a[c1][1],a[c1][2],a[c2][1],a[c2][2]);

                if(min_d>dist){
                  c1=i;
                    c2=j;
                }
                            if(dist>max_d){
                              f1=i;
                                f2=j;
                         }
         }
  }
              printf("Closest pair: ((%.2f,%.2f),(%.2f,%.2f)) \n",a[c1][1],a[c1][2],a[c2][1],a[c2][2]);
                printf("Furthest pair: ((%.2f,%.2f),(%.2f,%.2f)) \n",a[f1][1],a[f1][2],a[f2][1],a[f2][2]);

                return 0;
}
