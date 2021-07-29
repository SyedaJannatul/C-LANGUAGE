#include<stdio.h>
#include<conio.h>
int main()
{
    /*int i,n,nth,sum=0;
    printf("Enter the nth term : ");
    scanf("%d",&n);
    nth=(2*n)-1;
    printf("The %d th term value is = %d",n,nth);
    sum=n*n;
    printf("\nSum of the series upto %d th term : ",n);
    for(i=1;i<=(2*n)-1;i+=2)
    {
        if(i!=(2*n)-1)
        {
            printf("%d + ",i);
        }
        else
        {
            printf("%d = %d",i,sum);
        }
    }
    getch();
    return 0;*/
    //-------------------------------------------------------------
    int i,n,nth,sum=0;
    printf("Enter the nth term : ");
    scanf("%d",&n);
    nth=(2*n)-1;
    printf("The %d th term value is = %d",n,nth);
    for(i=1;i<=(2*n)-1;i+=2)
    {
        sum=sum+i;
    }
    printf("\nSum of the series upto %d th term : ",n);
    for(i=1;i<=(2*n)-1;i+=2)
    {
        if(i!=(2*n)-1)
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
