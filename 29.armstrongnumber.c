#include<stdio.h>
#include<math.h>
int count(int n)
{
    int c;
    while (n != 0)
    {
        n /= 10;     // n = n/10
        ++c;
    }
    return c;
}
int main()
{
    int num,n,n1,remainder,f,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    n1=num;
    n=count(n1);
    while(n1!=0)
     {
         remainder=n1%10;
         sum=sum+pow(remainder,n);
         n1=n1/10;
     }
    if(sum==num)
        {
            printf("\nNumber is a armstrong");
        }
        else
        {
            printf("\nNumber is not a armstrong");
        }
     return 0;
}
