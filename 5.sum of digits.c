#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int n,n1,remainder,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    n1=n;
    while(n1!=0)
     {
         remainder=n1%10;
         sum=sum+remainder;
         n1=n1/10;
     }
     printf("Sum of %d = %d",n,sum);
     getch();
     return 0;
}
