/********************************
Name-Hariom
Roll no- 21MI10021
Section -15
Lab_test  2 -calculate total marks of every individual student using function that given in que.
**********************************************************************************************/
#include<stdio.h>
#include<stdlib.h>

struct _MARKS        //Create structure for store marks and create table.
{
    int student_no, subject_no;
    char student[100][51];
    int **table;
};

int **allocate_array(int m, int n)
{
    int **table = malloc(m*sizeof(int *));   //Allocating m pointers to integers that will store n integers each
    for(int i =0; i<m ; i++)
    {
        table[i] = malloc(n*sizeof(int));
    }
    return table;
}

void read_table(struct _MARKS *marks)    //scanning name and marks of student using function.
{
    int student_no, subject_no;

    printf("Enter the number of student:=");
    scanf("%d",&student_no);   //take student number.

    printf("\nenter number of subject=");
    scanf("%d",&subject_no);   //take subject number.
      printf("\n");
    marks->student_no = student_no;
    marks->subject_no = subject_no;

    marks->table = allocate_array(student_no, subject_no);
    printf("Enter the student name and their marks respectively.\n");
    for(int i=0; i<student_no; i++)
    {
        printf("Student %d.\n",i+1);
        printf("enter name:\n");
        scanf("%s",marks->student[i]);    //take name of students.
        for(int j=0; j<subject_no; j++)
        {
            printf("enter the marks of subject %d:",j+1);
            scanf("%d",&marks->table[i][j]);  //taking marks of subject.
           printf("\n");
        }
        printf("\n") ;
    }
}

void print_table(struct _MARKS *marks)  //print table of name with marks using function.
{
    printf("table containing student name and their marks.\n");
    for(int i=0; i<marks->student_no; i++)
    {
        printf("%s ",marks->student[i]);    //printing name.
        for(int j=0; j<marks->subject_no; j++)
        {
            printf("%d ",marks->table[i][j]);    //printing marks.
        }
        printf("\n");
    }
}
void get_total_marks(struct _MARKS *marks)  //printing total marks with extra column using function.
{
    printf("\nprint table with total marks of student.\n");
    for(int i=0; i<marks->student_no; i++)
    {
        int sum=0;
        printf("%s ",marks->student[i]);  //printing name of student.
        for(int j=0; j<marks->subject_no; j++)
        {
            printf("%d ",marks->table[i][j]); //print marks of individual student.
            sum+=marks->table[i][j];
        }
        printf("%d ",sum);  //printing sum of individually marks.
        printf("\n");
    }
}

int main()
{
    struct _MARKS marks;
    read_table(&marks);  //read table using function.
    print_table(&marks);    //print table using marks.
    get_total_marks(&marks);  //print table with extra one column with total marks using function.

    printf("*************************************\n");  //printing star to make attractive output file.
    return 0; //program ends.
}

