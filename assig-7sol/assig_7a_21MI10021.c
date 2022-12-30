/*************************************
NAME-HARIOM
ROLL NO-21MI10021
SECTION-15
assignment 7a- Print minimum magnitude of dot product using query vector.
*******************************************************************************/

#include<stdio.h>
struct _Vector            //Structure for Vector.
{
    int dim;              //Dimension of vector.
    float field[100];
};

int main ()
{
    int M,N,i,j,count=0;
    struct _Vector a[100];     //structure for array vector.

    printf("Enter the value of M and N:\n");
    scanf("%d %d",&M,&N);     //Taking value of M and N.

    for(i=0; i<M; i++)
    {
        printf("Enter the value of array vector %d :\n",i+1);
        a[i].dim = N;
        for(j=0; j<N; j++)
        {
            scanf("%f",&a[i].field[j]);  //taking value of array vector from user.
        }
    }
    printf("\n");

    for(i=0; i<M; i++)
    {
        printf("\n these are %d. array vector input by user:",i+1);
        printf("(");
        a[i].dim = N;
        for(j=0; j<N; j++)
        {
            printf("%.2f,",a[i].field[j]) ;  //printing the value of array vector.
        }
        printf(");");
    }
    printf("\n");


    struct _Vector query,DP;   //structure for query vector and DP=dot-product.
    while(1)
    {

        DP.field[100]=0;
        float min=0,test=0;
        count++;
        printf("\nEnter the %d query vector:\n",count);
        for(i=0; i<N; i++)
        {
            scanf("%f",&query.field[i]); //taking the value of query vector.
        }

        printf("you have entered %d dimension query vector:",N);
        printf("(");
        for(i=0; i<N; i++)
        {
            printf("%.2f,",query.field[i]); //print the value of query vector.
        }
        printf(");\n");

        for(i=0; i<N; i++)
        {
            if(query.field[i]!=0.0)  //condition for searching some non-zeros value in query vector.
            {
                test=1;
                break;
            }
        }

        if(test==1)
        {
            float D_P[100];         //D_P[100]=store sum of dot product.
            for( i=0; i<M; i++)
            {
                D_P[i]=0;
                for( j=0; j<N; j++)
                {
                    D_P[i]+=(a[i].field[j])*(query.field[j]);  //using formula for dot-product.

                }
                D_P[i]=(D_P[i]>=0)? D_P[i]:(-D_P[i]);  //store magnitude of dot-product.
            }

            min=D_P[0];
            for(i=0; i<M; i++)
            {
                if(min>=D_P[i])     //find minimum magnitude of dot-product in given array vector.
                    min=D_P[i];
            }

            int count_min=0; //counting for number of array vector which has/have min magnitude.

            for(i=0; i<M; i++)
            {

                if(min==D_P[i])    //comparing to minimum.
                {
                    count_min++;
                    printf("\n%d.Array vector(s) which have minimum magnitude of dot product with query vector: (",count_min);
                    for(j=0; j<N; j++)
                        printf("%.2f,",a[i].field[j]);  //print array vector which has minimum magnitude of dot-product
                    printf(")\n");
                }
            }
        }

        if(test==0)  //test fails if all input are zero in query vector.
        {
            printf("Query processing is over.\n");
            break;
        }
    }

    return 0;  //program ends.

}






