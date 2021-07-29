#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,n,fact=1;
    printf("Enter the n: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("Not prime");
            goto end;
        }
    }
    printf("Prime");
    end:
    getch();
    return 0;
}
