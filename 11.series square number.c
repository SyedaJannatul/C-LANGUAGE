#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the nth term : ");
    scanf("%d",&n);
    sum=(n*(n+1)*((2*n)+1))/6;
    printf("Sum of the series upto %d th term : ",n);
    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
            printf("%d + ",i*i);
        }
        else
        {
            printf("%d = %d",i*i,sum);
        }
    }
    getch();
    return 0;
    //-------------------------------------------------------------
    /*int i,n,sum=0;
    printf("Enter the nth term : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*i);
    }
    printf("Sum of the series upto %d th term : ",n);
    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
            printf("%d + ",i*i);
        }
        else
        {
            printf("%d = %d",i*i,sum);
        }
    }
    getch();
    return 0;*/
}
