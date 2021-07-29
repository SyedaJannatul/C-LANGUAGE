/*




*/
/*
    1
    1       2
    1       2       3
    1       2       3       4
    1       2       3       4       5
    1       2       3       4
    1       2       3
    1       2
    1
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
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}*/
//-----------------------------------------------------------------------
/*
A
A       B
A       B       C
A       B       C       D
A       B       C       D       E
A       B       C       D
A       B       C
A       B
A
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
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c\t",j+64);
        }
        printf("\n");
    }
    return 0;
}*/
//---------------------------------------------------------------------
/*
    1
    2       1
    3       2       1
    4       3       2       1
    5       4       3       2       1
    4       3       2       1
    3       2       1
    2       1
    1
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
        for(j=i;j>=1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}*/
//---------------------------------------------------------------------
/*
                                1
                        2       1
                3       2       1
        4       3       2       1
5       4       3       2       1
        4       3       2       1
                3       2       1
                        2       1
                                1
*/
/*#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n,s;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf("\t");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(s=1;s<=n-i;s++)
        {
            printf("\t");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}*/
//--------------------------------------------------------------------
/*
                                1
                        1       2
                1       2       3
        1       2       3       4
1       2       3       4       5
        1       2       3       4
                1       2       3
                        1       2
                                1
*/
/*#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n,s;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf("\t");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(s=1;s<=n-i;s++)
        {
            printf("\t");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}*/
//------------------------------------------------------------------------
/*
                                1
                        1       2       1
                1       2       3       2       1
        1       2       3       4       3       2       1
1       2       3       4       5       4       3       2       1
*/
/*#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n,s;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf("\t");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d\t",j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}*/
//------------------------------------------------------------------------
/*
1       2       3       4       5       4       3       2       1
        1       2       3       4       3       2       1
                1       2       3       2       1
                        1       2       1
                                1
*/
/*#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n,s;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(s=1;s<=n-i;s++)
        {
            printf("\t");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d\t",j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}*/
//------------------------------------------------------------------------
/*
                                1
                        1       2       1
                1       2       3       2       1
        1       2       3       4       3       2       1
1       2       3       4       5       4       3       2       1
        1       2       3       4       3       2       1
                1       2       3       2       1
                        1       2       1
                                1
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n,s;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf("\t");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d\t",j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(s=1;s<=n-i;s++)
        {
            printf("\t");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d\t",j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}
