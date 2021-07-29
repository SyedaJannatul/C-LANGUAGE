#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    /*int n,n1,remainder,reverse=0;
    printf("Enter a number:");
    scanf("%d",&n);
    n1=n;
    while(n1!=0)
     {
         remainder=n1%10;
         reverse=(reverse*10)+remainder;
         n1=n1/10;
     }
     printf("Reverse of %d = %d",n,reverse);
     getch();
     return 0;*/
     //------------------------------------------------------------
     char n[100],n1[100];
     printf("Enter a string:");
     gets(n);
     strcpy(n1,n);
     strrev(n1);
     if(strcmp(n1,n)==0)
     {
         printf("PALINDROME");
     }
     else
     {
         printf("NOT PALINDROME");
     }
     getch();
     return 0;
}
