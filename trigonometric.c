#include<stdio.h>
#include<math.h>
#include<string.h>
# define PI 3.14159265


int trigonometric()
{
    int ch,k;
    char again='Y';
    float deg,res,rad;                  //Declaring the input variables
    while(again=='Y'){
    printf("Which Trigonometric function do you want to use?");
    printf("\n\t\t1.sin(x)\n\t\t2.cosine(x)\n\t\t3.tan(x)\n\t\t4.cosec(x)\n\t\t5.sec(x)\n\t\t6.cot(x)\n\t\t7.arcsin(x)\n\t\t8.arccosine(x)\n\t\t9.arctan(x)\n\t\t10.arccosec(x)\n\t\t11.arcsec(x)\n\t\t12.arccot(x)\n\t\t13.sinh(x)\n\t\t14.cosh(x)\n\t\t15.tanh(x)\n\t");
    printf("\n Please enter a choice ");                         //input choice from User out of the given options
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("Do you want to enter the angle in \n1.degrees \n2.radians\n3.Exit");        //Using nested switch case depending upon
                printf("\nPlease enter a choice ");                                               //the angle entered by user
               scanf("%d",&k);
               switch(k)                                                                        //For sine
               {
                   case 1:printf("Please enter the angle in degrees");
                          scanf("%f",&deg);
                          rad=deg*(PI/180);
                          res=sin(rad);
                          printf("\nsin(%f) = %f",deg,res);
                          break;
                   case 2:printf("please enter the angle in radians");
                          scanf("%f",&rad);
                          res=sin(rad);
                          printf("\nsin(%f) = %f",rad,res);
                          break;
                  case 3:break;
                  default:printf("You have enter the wrong choice\nPlease enter it again");

               }
               break;
       case 2: printf("Do you want to enter the angle in \n1.degrees \n2.radians \n3.Exit");
               printf("\nPlease enter a choice ");
               scanf("%d",&k);
               switch(k)
               {
                   case 1:printf("Please enter the angle in degrees");                        //For cosine
                          scanf("%f",&deg);
                          rad=deg*(PI/180);
                          res=cos(rad);
                          printf("\ncos(%f) = %f",deg,res);
                          break;
                   case 2:printf("please enter the angle in radians");
                          scanf("%f",&rad);
                          res=cos(rad);
                          printf("\ncos(%f) = %f",rad,res);
                          break;
                   case 3:break;
                  default:printf("You have enter the wrong choice\nPlease enter it again");

               }
               break;
       case 3: printf("Do you want to enter the angle in \n1.degrees \n2.radians \n3.Exit");        //For tan
               printf("\nPlease enter a choice ");
               scanf("%d",&k);
               switch(k)
               {
                   case 1:printf("Please enter the angle in degrees");
                          scanf("%f",&deg);
                          rad=deg*(PI/180);
                          res=tan(rad);
                          printf("\ntan(%f) = %f",deg,res);
                          break;
                   case 2:printf("please enter the angle in radians");
                          scanf("%f",&rad);
                          res=tan(rad);
                          printf("\ntan(%f) = %f",rad,res);
                          break;
                   case 3:break;
                  default:printf("You have entered the wrong choice\nPlease enter it again");
               }
               break;
        case 4:printf("Do you want to enter the angle in \n1.degrees \n2.radians \n3.Exit");        //cosecant
               printf("\nPlease enter a choice ");
               scanf("%d",&k);
               switch(k)
               {
                   case 1:printf("Please enter the angle in degrees");
                          scanf("%f",&deg);
                          rad=deg*(PI/180);
                          res=1/(sin(rad));
                          printf("\ncosec(%f) = %f",deg,res);
                          break;
                   case 2:printf("please enter the angle in radians");
                          scanf("%f",&rad);
                          res=1/(sin(rad));
                          printf("\ncosec(%f) = %f",rad,res);
                          break;
                   case 3:break;
                  default:printf("You have entered the wrong choice\nPlease enter it again");

               }
               break;
        case 5: printf("Do you want to enter the angle in \n1.degrees \n2.radians \n3.Exit"); //secant
               printf("\nPlease enter a choice ");
               scanf("%d",&k);
               switch(k)
               {
                   case 1:printf("Please enter the angle in degrees");
                          scanf("%f",&deg);
                          rad=deg*(PI/180);
                          res=1/(cos(rad));
                          printf("\nsec(%f) = %f",deg,res);
                          break;
                   case 2:printf("please enter the angle in radians");
                          scanf("%f",&rad);
                          res=1/(cos(rad));
                          printf("\nsec(%f) = %f",rad,res);
                          break;
                   case 3:break;
                  default:printf("You have entered the wrong choice\nPlease enter it again");

               }
               break;
        case 6: printf("Do you want to enter the angle in \n1.degrees \n2.radians \n3.Exit");       //cotangent
               printf("\nPlease enter a choice ");
               scanf("%d",&k);
               switch(k)
               {
                   case 1:printf("Please enter the angle in degrees");
                          scanf("%f",&deg);
                          rad=deg*(PI/180);
                          res=1/(tan(rad));
                          printf("\ncot(%f) = %f",deg,res);
                          break;
                   case 2:printf("please enter the angle in radians");
                          scanf("%f",&rad);
                          res=1/(tan(rad));
                          printf("\ncot(%f) = %f",rad,res);
                          break;
                   case 3:break;
                  default:printf("You have entered the wrong choice\nPlease enter it again");

               }
               break;
        case 7: printf("Do you want to enter the angle in \n1.degrees \n2.radians \n3.Exit");    //arcsine
               printf("\nPlease enter a choice ");
               scanf("%d",&k);
               switch(k)
               {
                   case 1:printf("Please enter the angle in degrees");
                          scanf("%f",&deg);
                          rad=deg*(PI/180);
                          res=asin(rad);
                          printf("\narcsin(%f) = %f",deg,res);
                          break;
                   case 2:printf("please enter the angle in radians");
                          scanf("%f",&rad);
                          res=asin(rad);
                          printf("\narcsin(%f) = %f",rad,res);
                          break;
                   case 3:break;
                  default:printf("You have entered the wrong choice\nPlease enter it again");

               }
               break;
        case 8: printf("Do you want to enter the angle in \n1.degrees \n2.radians \n3.Exit");    //arccos
               printf("\nPlease enter a choice ");
               scanf("%d",&k);
               switch(k)
               {
                   case 1:printf("Please enter the angle in degrees");
                          scanf("%f",&deg);
                          rad=deg*(PI/180);
                          res=acos(rad);
                          printf("\arccos(%f) = %f",deg,res);
                          break;
                   case 2:printf("please enter the angle in radians");
                          scanf("%f",&rad);
                          res=acos(rad);
                          printf("\narccos(%f) = %f",rad,res);
                          break;
                   case 3:break;
                  default:printf("You have entered the wrong choice\nPlease enter it again");

               }
               break;
        case 9: printf("Do you want to enter the angle in \n1.degrees \n2.radians \n3.Exit");    //arctan
               printf("\nPlease enter a choice ");
               scanf("%d",&k);
               switch(k)
               {
                   case 1:printf("Please enter the angle in degrees");
                          scanf("%f",&deg);
                          rad=deg*(PI/180);
                          res=atan(rad);
                          printf("\narccot(%f) = %f",deg,res);
                          break;
                   case 2:printf("please enter the angle in radians");
                          scanf("%f",&rad);
                          res=atan(rad);
                          printf("\narctan(%f) = %f",rad,res);
                          break;
                   case 3:break;
                  default:printf("You have entered the wrong choice\nPlease enter it again");

               }
               break;
        case 10: printf("Do you want to enter the angle in \n1.degrees \n2.radians \n3.Exit");    //arccosec
               printf("\nPlease enter a choice ");
               scanf("%d",&k);
               switch(k)
               {
                   case 1:printf("Please enter the angle in degrees");
                          scanf("%f",&deg);
                          rad=deg*(PI/180);
                          res=asin(1/(rad));
                          printf("\narccosec(%f) = %f",deg,res);
                          break;
                   case 2:printf("please enter the angle in radians");
                          scanf("%f",&rad);
                          res=asin(1/(rad));
                          printf("\narccosec(%f) = %f",rad,res);
                          break;
                   case 3:break;
                  default:printf("You have entered the wrong choice\nPlease enter it again");
               }
               break;
        case 11: printf("Do you want to enter the angle in \n1.degrees \n2.radians \n3.Exit");    //arcsec

               printf("\nPlease enter a choice ");
               scanf("%d",&k);
               switch(k)
               {
                   case 1:printf("Please enter the angle in degrees");
                          scanf("%f",&deg);
                          rad=deg*(PI/180);
                          res=acos(1/(rad));
                          printf("\narcsec(%f) = %f",deg,res);
                          break;
                   case 2:printf("please enter the angle in radians");
                          scanf("%f",&rad);
                          res=acos(1/(rad));
                          printf("\narcsec(%f) = %f",rad,res);
                          break;
                   case 3:break;
                  default:printf("You have entered the wrong choice\nPlease enter it again");

               }
               break;
        case 12: printf("Do you want to enter the angle in \n1.degrees \n2.radians \n3.Exit");    //arccot

               printf("\nPlease enter a choice ");
               scanf("%d",&k);
               switch(k)
               {
                   case 1:printf("Please enter the angle in degrees");
                          scanf("%f",&deg);
                          rad=deg*(PI/180);
                          res=atan(1/(rad));
                          printf("\narccot(%f) = %f",deg,res);
                          break;
                   case 2:printf("please enter the angle in radians");
                          scanf("%f",&rad);
                          res=atan(1/(rad));
                          printf("\narccot(%f) = %f",rad,res);
                          break;
                   case 3:break;
                  default:printf("You have entered the wrong choice\nPlease enter it again");

               }
               break;
        case 13: printf("Do you want to enter the angle in \n1.degrees \n2.radians \n3.Exit");    //sinh
               printf("\nPlease enter a choice ");
               scanf("%d",&k);
               switch(k)
               {
                   case 1:printf("Please enter the angle in degrees ");
                          scanf("%f",&deg);
                          rad=deg*(PI/180);
                          res=sinh(rad);
                          printf("\nsinh(%f) = %f",deg,res);
                          break;
                   case 2:printf("please enter the angle in radians ");
                          scanf("%f",&rad);
                          res=sinh(rad);
                          printf("\nsinh(%f) = %f",rad,res);
                          break;
                   case 3:break;
                  default:printf("You have entered the wrong choice\nPlease enter it again");

               }
               break;
        case 14: printf("Do you want to enter the angle in \n1.degrees \n2.radians \n3.Exit");    //cosh

               printf("\nPlease enter a choice ");
               scanf("%d",&k);
               switch(k)
               {
                   case 1:printf("Please enter the angle in degrees");
                          scanf("%f",&deg);
                          rad=deg*(PI/180);
                          res=cosh(rad);
                          printf("\ncosh(%f) = %f",deg,res);
                          break;
                   case 2:printf("please enter the angle in radians");
                          scanf("%f",&rad);
                          res=cosh(rad);
                          printf("\ncosh(%f) = %f",rad,res);
                          break;
                   case 3:break;
                  default:printf("You have entered the wrong choice\nPlease enter it again");

               }
               break;
        case 15: printf("Do you want to enter the angle in \n1.degrees \n2.radians \n3.Exit");    //tanh

               printf("\nPlease enter a choice ");
               scanf("%d",&k);
               switch(k)
               {
                   case 1:printf("Please enter the angle in degrees");
                          scanf("%f",&deg);
                          rad=deg*(PI/180);
                          res=tanh(rad);
                          printf("\ntanh(%f) = %f",deg,res);
                          break;
                   case 2:printf("please enter the angle in radians");
                          scanf("%f",&rad);
                          res=tanh(rad);
                          printf("\ntanh(%f) = %f",rad,res);
                          break;
                   case 3:break;
                  default:printf("You have entered the wrong choice\nPlease enter it again");

               }
               break;
        default:                                                                                //Default
            printf("\t Enter a valid Code.");

    }
    printf("\n\nTo Calculate again in same mode Press Y\nTo go to Main Menu Press M\n");    //Depending on user value decision
    scanf(" %c",&again);                                                                    //To be taken as to repeat or go to MainMenu
    again=toupper(again);
    }
    }
