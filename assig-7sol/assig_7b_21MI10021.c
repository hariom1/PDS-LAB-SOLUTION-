/********************************
NAME-HARIOM
ROLL NO-21MI10021
SECTION-15
assignment 7b- Perform a calculator of a complex number.
**************************************************************/
#include<stdio.h>
#include<math.h>

typedef struct _complex         // Structure for complex number.
{
    float real;                 //variables holding real and imaginary part of type float.
    float img;
} _complex;
struct  _complex add(_complex  n1, _complex n2)  //using function for addition.
{
    _complex temp;
    temp.real = n1.real + n2.real;
    temp.img = n1.img + n2.img;
    return (temp);
}
struct  _complex sub(_complex  n1, _complex n2)  //using function for subtraction.
{
    _complex temp;
    temp.real = n1.real - n2.real;
    temp.img = n1.img - n2.img;
    return (temp);
}
struct  _complex Mult(_complex  n1, _complex n2) // function for multiply.
{
    _complex temp;
    temp.real = n1.real*n2.real - n1.img*n2.img;
    temp.img = n1.img*n2.real + n1.real*n2.img;
    return (temp);
}
struct  _complex Div(_complex  n1, _complex n2)   //function for divide.
{
    _complex temp;
    temp.real = (n1.real*n2.real + n1.img*n2.img)/(n2.real*n2.real+n2.img*n2.img);
    temp.img = (n1.img*n2.real - n1.real*n2.img)/(n2.real*n2.real + n2.img*n2.img);
    return (temp);
}
struct _complex Conjugate(_complex n1)     //using function for finding conjugate.
{
    _complex temp;
    temp.real=n1.real;
    temp.img=n1.img>=0?(-n1.img):(-n1.img);
    return (temp);
}

struct _complex Negation(_complex n1)   //function for Negation.
{
    _complex temp;
    temp.real=n1.real>=0?(-n1.real):(-n1.real);
    temp.img=n1.img>=0?(-n1.img):(-n1.img);
    return (temp);
}
float Magnitude(_complex n1)     //function for find magnitude.
{
    float temp;
    temp=sqrt(n1.real*n1.real+n1.img*n1.img);
    return(temp);
}
float Phase(_complex n1)        //function for phase.
{
    float temp;
    temp=atan(n1.img/n1.real);
    return(temp);
}
int main()
{
    int op,i=0;
    _complex  a,AM;       //Declaring structure variable using struct complex
    AM.real=0;
    AM.img=0;    //AM denoting ACCUMULATOR.

    printf (" Select an operation to perform the calculation in Calculator:\n");  //choice for operation.
    printf (" Press 0. ADDITION \t press 1. subtraction\t press 2.multiplication\n press 3. division\t press 4. conjugate\t press 5. Negation\n press 6. magnitude\t press 7. phase  \t press 8. AC\n press 9. Exit\n");


    while(1)
    {
        printf("\nENTER integer which operation you want to do: "); //asking choice value from users.
        scanf ("%d", &op);
        printf("user choice = %d\n",op); //print user choice.
        i++;
        if(op<0||op>9)       //for invalid cases.
        {
            printf("INVALID INPUT.INPUT RIGHT INTEGER.\n");
        }
        if(op==0)  //addition
        {
            printf("enter the real and imaginary part respectively to add in  ACCUMULATOR:\n");
            scanf("%f %f",&a.real,&a.img);   //taking input for addition.
            printf("your input : (%.2f) + (%.2f)i\n",a.real,a.img);
            AM=add(AM,a);
            printf("Result.%d : ADDITION = (%.2f) + (%.2f)i\n",i,AM.real, AM.img); //print addition value.
        }

        if(op==1)   //subtraction
        {
            printf("enter the real and imaginary part respectively to subtract in store ACCUMULATOR:\n");
            scanf("%f %f",&a.real,&a.img); //taking input for subtraction.
            printf("your input : (%.2f) + (%.2f)i\n",a.real,a.img);
            AM=sub(AM,a);
            printf("Result.%d : Subtraction = (%.2f) + (%.2f)i\n",i,AM.real, AM.img); //print subtraction.
        }

        if(op==2)  //multiply.
        {
            printf("enter the real and imaginary part respectively to Multiply in store ACCUMULATOR:\n");
            scanf("%f %f",&a.real,&a.img);  //taking input for multiplication.
            printf("your input : (%.2f) + (%.2f)i\n",a.real,a.img);
            AM=Mult(AM,a);
            printf("Result.%d : MULTIPLY = (%.2f) + (%.2f)i\n",i,AM.real, AM.img); //print multiplication value.
        }

        if(op==3)  //division.
        {
            printf("enter the real and imaginary part respectively to Divide in store ACCUMULATOR:\n");
            scanf("%f %f",&a.real,&a.img);  //taking input for divide.
            printf("your input : (%.2f) + (%.2f)i\n",a.real,a.img);
            AM=Div(AM,a);
            printf("Result.%d : division = (%.2f) + (%.2f)i\n",i,AM.real, AM.img); //print division value.
        }

        if(op==4)  //conjugate of complex number.
        {
            AM=Conjugate(AM);
            printf("Result.%d : conjugate = (%.2f) + (%.2f)i\n",i,AM.real,AM.img); //print conjugate.
        }

        if(op==5)  //negation of complex number.
        {
            AM=Negation(AM);
            printf("Result.%d : Negation = (%.2f) + (%.2f)i\n",i,AM.real,AM.img); //print negation.
        }
        if(op==6) //Magnitude of a complex number.
        {
            float M=Magnitude(AM);
            printf("Result.%d : Magnitude = (%.2f)\n",i,M); //print Magnitude.
        }

        if(op==7)  //phase of a complex number.
        {
            float P=Phase(AM);
            printf("Result.%d : phase = (%.2f) radian\n",i,P); //print phase.
        }

        if(op==8) //AC for clear value which store in Accumulator.
        {
            AM.real=0;
            AM.img=0;
            printf("Every input data is Clear.Now,You can start from zero Accumulator  value.\n"); //clear every value.
        }

        if(op==9) //exiting from calculator.
        {
            printf("EXITED FROM THE CALCULATOR OF COMPLEX NUMBER\n"); //print message.
            break;
        }


    }
    return 0; //program ends.
}
