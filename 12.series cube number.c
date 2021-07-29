#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    /*int i,n,sum=0;
    printf("Enter the nth term : ");
    scanf("%d",&n);
    sum=pow(((n*(n+1))/2),2);
    printf("Sum of the series upto %d th term : ",n);
    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
            printf("%d + ",i*i*i);
        }
        else
        {
            printf("%d = %d",i*i*i,sum);
        }
    }
    getch();
    return 0;*/
    //-------------------------------------------------------------
    int i,n,sum=0;
    printf("Enter the nth term : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*i*i);
    }
    printf("Sum of the series upto %d th term : ",n);
    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
            printf("%d + ",i*i*i);
        }
        else
        {
            printf("%d = %d",i*i*i,sum);
        }
    }
    getch();
    return 0;
}
