#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
//all header files are included.
#include"matrix.c"
#include"trigonometric.c"
#include"simpleArithmetic.c"
#include"onenumber.c"
#include"numbase.c"
#include"complexnumber.c"
//all linked files are included.
int main()
{
    char again='M';//Menu to choose mode of calculator.
    while(again=='M'){
    printf("Welcome to our Scientific Calculator!\n\n");
    printf("\tSelect Mode of Calculator.\n\n");
    printf("1.Arithmetic Mode\n");
    printf("2.Number Base Converter Mode\n");
    printf("3.Matrix Algebra Calculator Mode\n");
    printf("4.Trigonometric Calculator Mode\n");
    printf("5.Single Number Operators Mode\n");
    printf("6.Complex number Calculator Mode\n");
    printf("7.Exit from Program\n");
    int mode;
    scanf(" %d",&mode);
    switch(mode)
    {
    case 1:
        simpleArithmetic();
        break;
    case 2:
        numbase();
        break;
    case 3:
        matrixalgebra();
        break;
    case 4:
        trigonometric();
        break;
    case 5:
        onenumber();
        break;
    case 6:
        complexnumber();
        break;
    case 7:
        exit(0);
        break;
    default:
        printf("Enter valid Code.\n");
        break;
    }
    system("cls");//to clear screen.
    again=toupper(again);
    }
     printf("Good bye!");
    }

