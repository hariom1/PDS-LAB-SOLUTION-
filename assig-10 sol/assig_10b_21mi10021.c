/********************************
Name-Hariom
Roll no- 21MI10021
Section -15
Assig_10B:-Check that given parentheses is balanced or not.
**********************************************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

typedef struct s_Node       //use structure for taking value and string node.
{
    struct s_Node *Next;
    int val;
} s_Node;

struct s_Node *t=0;
struct s_Node*New_Node (int val)

{
    struct s_Node *p=(struct s_Node*)malloc(sizeof(struct s_Node));   //using malloc allocation for defining string node.
    p->val=val;
    p->Next=0;
}
void push(int val,int data);   //Use of Push function.
int pop();            //Use of Pop function.

int main()
{
    char expression[MAX];
    int count=0,P,count_Num,k,Length,data;
    printf("Enter an expression that you want to check.\n");
    scanf("%s", expression);  //taking expression from user.
    printf("You entered expression: %s\n",expression); //printing expression that entered by user.

    Length=strlen(expression); //Finding length of expression.

    while(expression[count_Num]!= '\0')  // Scanning the expression until we reach the end
    {

        if(expression[count_Num]=='(')  // condition to check the symbol is '('
        {
            count++;   //incrementing count variable.
        }

        else if(expression[count_Num]==')')  // condition to check the symbol is ')'
        {
            count--;
            if(count<0)
                break;
        }
        count_Num++;
    }

    if(count==0)   //if stack is empty.
    {
        printf("\nExpression is balanced.\n");
    }
    else
    {
        printf("\nExpression is unbalanced.\n");
    }

    if(count==0)
    {
        char string[MAX];
        int i=0;
        while( i<Length )
        {


            if(expression[i]!=')')push(expression[i],data);
            else if (expression[i]==')')
            {
                push(expression[i],data);
                P='\0';
                for (k=0; P!='('; k++)
                {
                    P=pop();
                    string[k]=P;

                }
                int L_1=strlen(string);  //finding the length of string.
                string[k]='\0';
                int j;
                j=(L_1)-1;
                while(j>=0)   //run loop till j is more than equal to zero.
                {
                    if (string[j]=='[') string[j]='(';
                    if (string[j]==']') string[j]=')';

                    printf("%c",string[j]);  //printing expression of all part those are parentheses.
                    if (string[j]=='(') string[j]='[';
                    if (string[j]==')') string[j]=']';
                    push(string[j],data);
                    j--;
                }
                printf("\n");
            }
            i++;
        }
        printf("All parentheses is Matched.\n");
    }
    printf("*********************************************************\n");  //print star for attractive output.
    return 0;  //program ends.
}
void push(int val,int data)   //push function
{
    struct s_Node *temp,*p=New_Node(val);
    while(t==0)
    {
        t=p;
        return;
    }
    temp=t;
    p->Next=temp;
    t=p;
}
int pop()      //pop function for removing node.
{
    int val;
    struct s_Node *temp;
    while(t==0)
        return 1;
    val=t->val;
    temp=t;
    t=temp->Next;
    free(temp);
    return (val);   //return value.
}



