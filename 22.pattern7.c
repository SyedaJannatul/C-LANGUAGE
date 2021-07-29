/*

     *                         * * * * * *     * * * * * *      *               *
    * *                         * * * * *        * * * *       * *             * *
   * * *             *           * * * *           * *        * * *          * * * *
  * * * *           * *           * * *             *        * * * *       * * * * * *
 * * * * *        * * * *          * *                      * * * * *        * * * *
* * * * * *     * * * * * *         *                        * * * *           * *
                                                              * * *             *
                                                               * *
                                                                *
*/
/*
        *
       * *
      * * *
     * * * *
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
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/
//-------------------------------------------------------------------------
/*
    * * * * *
     * * * *
      * * *
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
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/
//-------------------------------------------------------------------------
/*      *
       * *
      * * *
     * * * *
    * * * * *
     * * * *
      * * *
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
            printf("* ");
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
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/
//------------------------------------------------------------------------------
/*
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
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
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/
//-------------------------------------------------------------------------
/*
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
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
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/
//-------------------------------------------------------------------------
/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
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
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(s=1;s<=n-i;s++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
