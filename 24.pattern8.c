/*
    *
    * *
    *   *
    *     *
    * * * * *
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
            if(j==1||j==i||i==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/
//----------------------------------------------
/*
    * * * * *
      *     *
        *   *
          * *
            *
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
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i||i==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/
//-------------------------------------------------------------
/*
            *
          * *
        *   *
      *     *
    * * * * *
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
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i||i==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/
//----------------------------------------------
/*
        *
       * *
      *   *
     *     *
    * * * * *
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
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i||i==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/
//----------------------------------------------
/*
    * * * * *
     *     *
      *   *
       * *
        *
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
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i||i==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/
//----------------------------------------------
/*
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
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
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/
//----------------------------------------------------------------
/*
    *       *
      *   *
        *
      *   *
    *       *

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
        for(j=0;j<n;j++)
        {
            if(j==n-1-(i*1)||i==j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/
//----------------------------------------------------------------
/*
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *

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
        for(j=1;j<=n;j++)
        {
           printf("* ");
        }
        printf("\n");
    }
    return 0;
}
//----------------------------------------------------------------
/*
    * * * * *
    *       *
    *       *
    *       *
    * * * * *

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
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

