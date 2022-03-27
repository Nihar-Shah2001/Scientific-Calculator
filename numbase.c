#include<stdio.h>

void baseconversion(char s[20],int,int);

int numbase()
{
    char again ='Y';
    while(again=='Y'){
    char s[20];
    int base1,base2;
    printf("\n\tEnter the number you want to convert.");
    scanf("%s",&s);//scan number to convert
    printf("\n\tEnter the Base of input number.");
    scanf("%d",&base1);//scan base of input
    printf("\tEnter the base to which be converted:");
    scanf("%d",&base2);//scan base of output
    baseconversion(s,base1,base2);
      printf("\n\nTo Calculate again Press Y\nTo go to Main Menu Press M\n");
        scanf(" %c", &again);
        again = toupper(again);
}
}

void baseconversion(char s[20],int b1,int b2)
{
    int count=0,r,digit,i,n=0,b=1;
    for(i=strlen(s)-1;i>=0;i--)
        {
         if(s[i]>='A'&&s[i]<='Z')
            {
             digit=s[i]-'0'-7;
            }
         else
            {
             digit=s[i]-'0';
            }
        n=digit*b+n;
        b=b*b1;
        }
    while(n!=0)
    {
        r=n%b2;
        digit='0'+r;
        if(digit>'9')
        {
            digit+=7;
        }
         s[count]=digit;
         count++;
         n=n/b2;
    }
for(i=count-1;i>=0;i--)
    {
     printf("%c",s[i]);
    }
 printf("\n");

}
