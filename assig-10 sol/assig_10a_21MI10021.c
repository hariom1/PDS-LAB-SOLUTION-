/*************************************
NAME-HARIOM
ROLL NO-21MI10021
SECTION-15
assignment 10A-Find trace multiplication and its trace.
*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float **Allocate_2D_array(int M, int N )   // dynamic allocate function for taking 2D array.
{
    float **array;
    array=(float **)(malloc(M*sizeof(float *)));
    for(int i=0; i<M; i++)
    {

        array[i]=(float *)(malloc(N * sizeof(float)));
    }
    return (array);   //returning array.
}

void read_Matrix(float **array,int M,int N)   //function to take value of matrix.
{
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
        {
            printf("Enter element :a[%d][%d]\n",i,j);
            scanf("%f",&array[i][j]);       //taking element of matrix.
        }
    }
}

void Print_Matrix(float **array,int M,int N)  //function for printing matrix.
{
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
        {
            printf("%.2f ",array[i][j]);
        }
        printf("\n");
    }
}
void Multiply_Matrices(float **array1, float **array2,int M,int N,int X,int Y, float **result_multiply) //function to multiply two matrix.
{
    int i,j,k;
    for(i=0; i<M; i++)
    {
        for(j=0; j<Y; j++)
        {
            result_multiply[i][j]=0;
        }
    }
    for(i=0; i<M; i++)
    {
        for(j=0; j<Y; j++)
        {
            for(k=0; k<N; k++)
            {
                result_multiply[i][j]+=array1[i][k]*array2[k][j];
            }
        }
    }
}

float Compute_trace(float **array, int M, int N )  //function to compute trace of a matrix.
{
    float *sum,trace;
    int i,j,k;
    int temp=fabs(M - N);
    sum = (float *)calloc(temp + 1, sizeof(float));
    for(k=0; k<temp+1; k++)
    {
        if (M >=N)       //when rows >= column that time use this loop.
            for(i=k; i<N+k; i++)
            {
                for(j=0; j<N; j++)
                {
                    if (i==j+k)
                    {
                        sum[k]+=array[i][j];
                    }

                }
            }
        else if(M<N)   //when rows < column then using this loop.
            for(i=0; i<M; i++)
            {
                for(j=k; j<M+k; j++)
                {
                    if (i == j - k)
                        sum[k]+=array[i][j];
                }
            }
    }
    trace = sum[0];
    for(i=0; i<=temp; i++)
    {
        if(trace<sum[i])
        {
            trace=sum[i];
        }
    }
    return (trace);  //returning value of traces.
}

void Free_2D_array(float **array)  //function to free dynamic allocated memory.
{
    free (array);
}

int main()
{
    int M,N,X,Y;
    float **arr1,**arr2,**arr_multiply;
    printf("enter the row and column of 1st matrix.\n");
    scanf("%d%d",&M,&N);   //taking value of row and column of first matrix.
    printf("enter the row and column of 2nd matrix.\n");
    scanf("%d%d",&X,&Y);   //taking value of row and column of second matrix.

    if(N==X)  //condition for multiplication is possible.
    {

        printf("Enter the element of 1st array.\n");
        arr1=Allocate_2D_array(M,N);   //taking value of first matrix using function..
        read_Matrix(arr1,M,N);
        printf("\nEnter the element of 2nd array.\n");
        arr2=Allocate_2D_array(X,Y);      //taking value of second matrix using function..
        read_Matrix(arr2,X,Y);

        printf("Matrix 1:(%d x %d)\n",M,N);
        Print_Matrix(arr1,M,N);     //printing element of first matrix using function.
        printf("\nMatrix 2:(%d x %d)\n",X,Y);
        Print_Matrix(arr2,X,Y);     //printing element of second matrix using second function.

        arr_multiply=Allocate_2D_array(M,Y);
        Multiply_Matrices(arr1,arr2,M,N,X,Y,arr_multiply); //multiply matrix using of function.
        printf("\nResulting Matrix after Multiplication: Matrix 3:(%d x %d)\n",M,Y);
        Print_Matrix(arr_multiply,M,Y);         //printing matrix after multiplying two matrix.

        printf("\nMaximum value of trace of Matrix 1 is=%.2f\n",Compute_trace(arr1,M,N));         //max trace of first matrix.
        printf("Maximum value of trace of Matrix 2 is=%.2f\n",Compute_trace(arr2,X,Y));           //max trace of second matrix.
        printf("Maximum value of trace of Matrix 3 is=%.2f\n",Compute_trace(arr_multiply,M,Y));     //max trace of final matrix after multiplying.

        //free all memory space of dynamically allocated of all three matrix using matrix.
        Free_2D_array(arr1);
        Free_2D_array(arr2);
        Free_2D_array(arr_multiply);

    }
    else
    {
        printf("Sorry ! Multiplication is not possible.\n");  //multiplication not possible.
    }
    printf("******************************************************\n");   //printing star for making attractive output file.
    return 0; //program ends.
}


