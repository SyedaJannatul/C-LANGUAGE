#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,n,sum=0,a,r,nth;
    printf("Enter the first value,difference and nth term : ");
    scanf("%d %d %d",&a,&r,&n);
    nth=a*pow(r,(n-1));
    sum=a*(1-pow(r,(n+1)))/(1-r);
    printf("Sum of the series upto %d th term : ",n);
    for(i=a;i<=nth;i=i*r)
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
