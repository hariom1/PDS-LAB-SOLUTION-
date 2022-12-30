/********************************
Name-Hariom
Roll no- 21MI10021
Section -15
assig_8b:-convert feet and cm into meter and find tallest and smallest student respectively.
**********************************************************************************************/
#include<stdio.h>
#include<string.h>
struct student             //structure for record the students name and heights.
{
    char name[100];
    char height[10];
} s[50];

float convertIntoMetere(float value, char unit[])    //using function for converting in metre.
{
    float fin_val;
    if(unit[0]=='f' && unit[1]=='t')        fin_val=(value*0.3048);
    else if(unit[0]=='c' && unit[1]=='m')   fin_val=(value/100);
    return fin_val;     //returning final value.
}

int main()
{
    struct student s[50];
    int N,i=0;
    float H[50],height_m[50],tallest;
    printf("Input no of students(N):\n");
    scanf("%d",&N);         //taking input as number of student.

    printf("Enter the name of %d student one by one:\n",N);
    for(i=0; i<=N; i++)
    {
        gets(s[i].name);  //taking all students name.
    }

    for(i=1; i<=N; i++)
    {
        printf("Enter the height of %d students with its unit(only in cm/ft):\n",i);
        scanf("%f%s",&H[i],&s[i].height);   //taking height and respective units (only in ft and cm others not allowed).
    }

    for(i=1; i<=N; i++)
    {
        printf("%d.Student Name = %s\n",i,s[i].name);                //printing name of student.
        printf("Respective height = %.2f %s\n",H[i],s[i].height);    //print respective heights with unit.
    }
    printf("\n");

    for(i=1; i<=N; i++)
    {
        height_m[i]= convertIntoMetere(H[i],s[i].height);
        printf("%d. Student Name = %s\n",i,s[i].name);       //printing name of student.
        printf("Respective height in new unit = %.4f metre\n",height_m[i]);        //print respective heights in metre unit.
    }
    printf("\n");

    for(i=1; i<=N; i++)
    {
        if(height_m[i]>tallest)  tallest=height_m[i]; //finding tallest student.
    }
    for(i=1; i<=N; i++)
    {
        if(tallest==height_m[i])
        {
            printf("# Student with maximum height = %s\n Heights = %.4f metre\n",s[i].name,tallest); //print name and height of tallest student.
        }
    }

    float shortest=height_m[1];
    for(i=1; i<=N; i++)
    {
        if(height_m[i]<=shortest) shortest=height_m[i]; //finding shortest student.
    }
    for(i=1; i<=N; i++)
    {
        if(shortest==height_m[i])
        {
            printf("# Student with minimum height = %s\n Heights=%.4f metre\n",s[i].name,shortest); //print name and height of shortest student.
        }
    }
    printf("*******************************************\n");  //print star* for making attractive program.
    return 0;   //program ends.
}













