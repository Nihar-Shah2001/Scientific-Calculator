#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void onenumber()
{
    int opr;  //used in switch statements
    float a;  //variable declaration
    int upper,lower,num;
    char again='Y';
    while(again == 'Y'){
    printf("\n\n\t1.Square of the number \n");
    printf("\t2.Cube of the number \n");
    printf("\t3.Square root of the number \n");
    printf("\t4.Cube root of the number \n");
    printf("\t5.Natural Logarithm \n");
    printf("\t6.Logarithm base to 10 \n");
    printf("\t7.Random number generator \n");
    printf("Enter Code From Above menu:\t");  //menu to display
    scanf("%d",&opr);
        switch(opr)
        {
            case 1 :
                    printf("\nEnter the Number :");
                    scanf(" %f",&a);
                    printf("Square of the number = %f \n",a*a);   
                          //for finding the square of the number 
                    break;
            case 2:
                    printf("\nEnter the Number :");
                    scanf(" %f",&a);
                    printf("Cube of the number is = %f \n",a*a*a);
                          //for finding the cube of the number
                    break;
            case 3:
                    printf("\nEnter the Number :");
                    scanf(" %f",&a);
                    printf("Square root of the %f is = %f \n",a,sqrt(a));         
                          //for finding the squareroot of the number
                    break;
            case 4:
                    printf("\nEnter the Number :");
                    scanf(" %f",&a);
                    printf("Cube root of the %f is = %f  \n",a,cbrt(a)); 
                          //for finding the cuberoot of the number
                    break;
            case 5:
                    printf("\nEnter the Number :");
                    scanf(" %f",&a);
                    printf("Natural log of %f = %f\n", a,log(a)); 
                          //for finding the natural log of the number
                    break;
            case 6:
                    printf("\nEnter the Number :");
                    scanf(" %f",&a);
                    printf("log10(%f) = %f\n", a, log10(a));  
                          //for finding the log of base 10
                    break;
            case 7:
                    printf("Enter the upper limit");           
                    scanf(" %d",&upper);                                    //Taking the upper limit of rand input from user
                    printf("Enter the lower number");
                    scanf(" %d",&lower);                                    //Taking the lower limit of rand from user
                    srand(time(0));
                    num = (rand() % (upper - lower + 1)) + lower;           //storing the random number generated in num
                    printf("The random number is: %d",num);                 //Displaying num
                    break;
            default:
                printf("Enter Valid code");
        }
        printf("\n\nTo Calculate again Press Y\nTo go to Main Menu Press M\n");
    scanf(" %c",&again);
    again=toupper(again);
}
     }

