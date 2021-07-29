#include<stdio.h>
#include<conio.h>

int main()
{
    /*
    int n1,n2,min;
    printf("Enter 2 numbers:");
    scanf("%d %d",&n1,&n2);
    min=(n1<n2)?n1:n2;
    while(1)
     {
         if(n1%min==0 && n2%min==0)
         {
             printf("LCM = %d",min);
             break;
         }
         min--;
     }
     getch();
     return 0;*/
     /*----------------------------------------------------------------------*/
     /*
     int dividend,divisor,remainder,n1,n2;
     printf("Enter 2 numbers:");
     scanf("%d %d",&n1,&n2);
     dividend=(n1>n2)?n1:n2;
     divisor=(dividend==n1)?n2:n1;
     while(divisor!=0)
     {
         remainder=dividend%divisor;
         dividend=divisor;
         divisor=remainder;
     }
     printf("GCM = %d",dividend);
     getch();
     return 0;*/
     /*----------------------------------------------------------------------*/
    /*
    int n1,n2;
    printf("Enter 2 numbers:");
    scanf("%d %d",&n1,&n2);
    while(n1!=n2)
    {
        if(n1>n2)
        {
            n1=n1-n2;
        }
        else
        {
            n2=n2-n1;
        }
    }
    printf("GCM = %d",n1);
    getch();
    return 0;*/
    /*----------------------------------------------------------------------*/

    int n1,n2;
    printf("Enter 2 numbers:");
    scanf("%d %d",&n1,&n2);
    n1=(n1>0)?n1:-n1;
    n2=(n2>0)?n2:-n2;
    while(n1!=n2)
    {
        if(n1>n2)
        {
            n1=n1-n2;
        }
        else
        {
            n2=n2-n1;
        }
    }
    printf("GCM = %d",n1);
    getch();
    return 0;
}
