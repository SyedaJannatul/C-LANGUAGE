#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,n,next,f=0,s=1;
    printf("Enter the nth term : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if (i>=2)
        {
            next=f+s;
            f=s;
            s=next;
        }
        if(i<=1)
        {
            printf("%d\t",i);
        }
        else
        {
            printf("%d\t",next);
        }
    }
    getch();
    return 0;
}
