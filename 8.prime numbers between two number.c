#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,n1,n2,flag,t,count=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
        t=n1;
        n1=n2;
        n2=t;
    }
    while(n1<=n2)
    {
      flag=0;
      for(i=2;i<=n1/2;i++)
      {
            if(n1%i==0)
            {
                flag=1;
                break;
            }
      }
      if(flag==0)
      {
            printf("%d\t",n1);
            count++;
      }
      n1++;
    }
    printf("\nTotal prime numbers = %d",count);

    getch();
    return 0;
}
