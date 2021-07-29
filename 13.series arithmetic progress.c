#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0,a,d,nth;
    printf("Enter the first value,difference and nth term : ");
    scanf("%d %d %d",&a,&d,&n);
    nth=a+(n-1)*d;
    sum=(n*(2*a+(n-1)*d))/2;
    printf("Sum of the series upto %d th term : ",n);
    for(i=a;i<=nth;i=i+d)
    {
        if(i<nth)
        {
            printf("%d + ",i);
        }
        else
        {
            printf("%d = %d",i,sum);
        }
    }
    getch();
    return 0;
}
