#include<stdio.h>

int factorial(int n)
{
    int i,fact=1;
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,n1,remainder,f,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    n1=n;
    while(n1!=0)
     {
         remainder=n1%10;
         f = factorial(remainder);
         sum=sum+f;
         n1=n1/10;
     }
    if(sum==n)
        {
            printf("\nNumber is a strong");
        }
        else
        {
            printf("\nNumber is not a strong");
        }
     return 0;
}
