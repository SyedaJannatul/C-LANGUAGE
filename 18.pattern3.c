/*  1                             A                     a
    2    3                        B  C                  b   c
    4    5     6                  D  E  F               d   e   f
    7    8     9     10           G  H  I  J            g   h   i   j
    11   12    13    14    15     K  L  M  N  O         k   l   m   n   o      */

//here row(i) remain same so we have to work with i;
/*
    1
    2       3
    4       5       6
    7       8       9       10
    11      12      13      14      15
*/
/*#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n,m=0;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            m++;
            printf("%d\t",m);
        }
        printf("\n");
    }
    return 0;
}*/
//-------------------------------------------------------------------------
/*
    A
    B       C
    D       E       F
    G       H       I       J
    K       L       M       N       O
*/
/*#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n,m=0;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            m++;
            printf("%c\t",m+64);
        }
        printf("\n");
    }
    return 0;
}*/
//-------------------------------------------------------------------------
/*
    a
    b       c
    d       e       f
    g       h       i       j
    k       l       m       n       o
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n,m=0;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            m++;
            printf("%c\t",m+96);
        }
        printf("\n");
    }
    return 0;
}

