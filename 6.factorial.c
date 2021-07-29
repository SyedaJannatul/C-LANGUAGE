#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,n,fact=1;
    printf("Enter the n!: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("Factorial of %d! = %d",n,fact);
    getch();
    return 0;
}
