/*  1               1               0               A               a
    1 2             1 0             0 1             A B             a b
    1 2 3           1 0 1           0 1 0           A B C           a b c
    1 2 3 4         1 0 1 0         0 1 0 1         A B C D         a b c d
    1 2 3 4 5       1 0 1 0 1       0 1 0 1 0       A B C D E       a b c d e       */

//here column(j) remain same so we have to work with j;

/*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
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
        for(j=1;j<=i;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}*/
//-------------------------------------------------------------------------
/*
    1
    1 0
    1 0 1
    1 0 1 0
    1 0 1 0 1
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
        for(j=1;j<=i;j++)
        {
            printf("%d\t",j%2);
        }
        printf("\n");
    }
    return 0;
}*/
//-------------------------------------------------------------------------
/*
     0
     0 1
     0 1 0
     0 1 0 1
     0 1 0 1 0
*/
/*#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d\t",j%2);
        }
        printf("\n");
    }
    return 0;
}*/
//-------------------------------------------------------------------------
/*
     A
     A B
     A B C
     A B C D
     A B C D E
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
        for(j=1;j<=i;j++)
        {
            printf("%c\t",j+64);
        }
        printf("\n");
    }
    return 0;
}*/
//-------------------------------------------------------------------------
/*
     a
     a b
     a b c
     a b c d
     a b c d e
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
        for(j=1;j<=i;j++)
        {
            printf("%c\t",j+96);
        }
        printf("\n");
    }
    return 0;
}*/

