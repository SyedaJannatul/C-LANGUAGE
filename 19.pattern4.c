/*  1                           0
    0   1                       1    0
    1   0   1                   0    1    0
    0   1   0   1               1    0    1    0
    1   0   1   0   1           0    1    0    1    0                    */

//here row(i) remain same so we have to work with i;
/*
    1
    0   1
    1   0   1
    0   1   0   1
    1   0   1   0   1
*/
/*#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d\t",(i+j)%2);
        }
        printf("\n");
    }
    return 0;
}*/
//-------------------------------------------------------------------------
/*
    0
    1       0
    0       1       0
    1       0       1       0
    0       1       0       1       0
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",(i+j)%2);
        }
        printf("\n");
    }
    return 0;
}

