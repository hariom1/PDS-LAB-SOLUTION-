/*************************************
NAME-HARIOM
ROLL NO-21MI10021
SECTION-15
assignment 9B - find common element in given two array.
*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int *read_integer_sequence(int N)    //Define function with pointer.
{
    int *ptr,i;
    ptr=(int *)malloc(N * sizeof (int));   //using dynamic allocation for taking value of array.
    for(i=0; i<N; i++)
    {
        scanf("%d",&ptr[i]);
    }
    return ptr;
}

int swap(int *x,int *y)   //using function to swap two number.
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int *sort_integer(int *ptr, int N) //Define function to read ascending sorting.
{
    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            if(*(ptr + j) < *(ptr+ i))
            {
                swap((ptr + i), (ptr+ j));    //using previous swap function.
            }
        }
    }
}
int remove_repeated(int L,int a[])  //delete element if it's repeated in common element.
{
    int i,j,k;
    for(i=0; i<L; i++)
    {
        for(j=i+1; j<L;)
        {
            if(a[i]==a[j])
            {
                for(k=j; k<L; k++)
                {
                    a[k]=a[k+1];
                }
                L--;
            }
            else
            {
                j++;
            }
        }
    }
    return(L);
}

int main()
{
    int  L,M,i,j,flag=0,c[100],k=0;
    printf("Enter the value of L and M resp:\n");
    scanf("%d%d",&L,&M);            //Taking value of L and M.

    int *ptr1, *ptr2,*a,*b;
    printf("enter the all element of 1st array.\n");
    ptr1=read_integer_sequence(L);   //Taking value of 1st array.
    printf("enter the all element of 2nd array.\n");
    ptr2=read_integer_sequence(M);   //Taking value of 2nd array.

    printf("Element of 1st array: ");
    for(int i=0; i<L; i++)
    {
        printf("%d,",ptr1[i]);       //printing value of 1st array.
    }

    printf("\nElement of 2nd array: ");
    for(int i=0; i<M; i++)
    {
        printf("%d,",ptr2[i]);      //Printing value of 2nd array.
    }
    printf("\n\n");

    //Now checking common element in two array.
    for( i=0; i<L; i++)
    {
        for(j=0; j<M; j++)
        {
            if(ptr1[i]==ptr2[j])
            {
                c[k]=ptr1[i];
                k++;
            }
        }
    }

    sort_integer(c,k);    //sorting common with the help of function.
    int size=remove_repeated(k,c);   //remove repeated element using function.
    if(size>0)
    {
        printf("The number of distinct common element = %d.\nThey are: [ ",size);
        for(i=0; i<size; i++)
        {
            printf("%d ",c[i]);   //printing common distinct element.
        }
        printf("].");
    }
    else
    {
        printf("NO distinct common element found.\n");  //print statement if common element is empty.
    }
    printf("\n\n******************************************\n"); //print star to make attractive ending.
    return 0;  //program ends.
}







