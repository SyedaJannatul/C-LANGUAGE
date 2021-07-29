/*  1               1               0               A               a
    2 2             0 0             1 1             B B             b b
    3 3 3           1 1 1           0 0 0           C C C           c c c
    4 4 4 4         0 0 0 0         1 1 1 1         D D D D         d d d d
    5 5 5 5 5       1 1 1 1 1       0 0 0 0 0       E E E E E       e e e e e   */

//here row(i) remain same so we have to work with i;
/*
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
*/
#include<stdio.h>
#include<conio.h>

/*int main()
{
    int i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
    return 0;
}*/
//-------------------------------------------------------------------------
/*
    1
    0 0
    1 1 1
    0 0 0 0
    1 1 1 1 1
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
            printf("%d\t",i%2);
        }
        printf("\n");
    }
    return 0;
}*/
//-------------------------------------------------------------------------
/*
     0
     1 1
     0 0 0
     1 1 1 1
     0 0 0 0 0
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
            printf("%d\t",i%2);
        }
        printf("\n");
    }
    return 0;
}*/
//-------------------------------------------------------------------------
/*
     A
     B B
     C C C
     D D D D
     E E E E E
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
            printf("%c\t",i+64);
        }
        printf("\n");
    }
    return 0;
}*/
//-------------------------------------------------------------------------
/*
    a
    b       b
    c       c       c
    d       d       d       d
    e       e       e       e       e
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
            printf("%c\t",i+96);
        }
        printf("\n");
    }
    return 0;
}

