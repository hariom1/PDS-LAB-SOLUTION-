/********************************
NAME-HARIOM
ROLL NO-21MI10021
SECTION-15
assignment :-9A - search key element in array.
**************************************************************/
#include<stdio.h>

int  getkeyValue(int a[], int N, int key_val, int *pos)  //using function for checking key value and deleting a particular value from array.
{
    int v=0;
    for(int i=0; i<N; i++)
    {
        if(a[i]==key_val)    //checking key value present in array or not.
        {
            v=1;
            *pos=i;
            break;
        }
    }
    return v;   //Returning value.
}

int main()
{
    int N,K,val=0,m;
    printf("Enter the value of N:\n");
    scanf("%d",&N);  //taking value of N.

    int i,a[N],count=0,count_1=0;
    printf("input the value of array: \n");
    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);    //taking value of array of size N.
    }

    printf("your input array:");
    for(i=0; i<N; i++)
    {
        printf("%d,",a[i]);   //printing the value of array.
    }
    printf("\n");

    while(1)
    {
        printf("enter the key value: ");
        scanf("%d",&K);    //taking key value.
        printf("%d\n",K);

        val=getkeyValue(a,N,K,&m);  //using function for checking key value.
        if(val==1)
        {
            count++;           //counting number of times key value present in array.
            printf("key is present in the array.:\n");
            for(i=m; i<N-count; i++)
                a[i] = a[i+1];      //Now deleting a key value from  array.

            printf("%d.Modified array is :\n",count);
            for(int i=0; i<N-count; i++)
            {
                printf("%d ",a[i]);        //printing modified array after deleting key value.

            }
            printf("\n");
        }

        else if(val==0)
        {
            count_1++;       //counting that how many times key value is not present in array.
            printf("key is not present in array\n");
        }

        if(N==count)
        {
            printf("The array is empty.\nprogram terminated.\n") ;
            break;       //terminate program if there is no element in array.
        }

        else if(N==count_1)
        {
            printf("the number of failure equals the input size.\nprogram terminated.\n");
            break;       //terminate program if number of failure equals to the input size.
        }
    }
    return 0;  //program ends.
}


