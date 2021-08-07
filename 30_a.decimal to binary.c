#include<stdio.h>
int main()
{
    double n = 1237.135;
    int integral=n;
    double fractional=n-integral;
    printf("%d -> %f",integral,fractional);
    // array to store binary number
    int binaryNum[32],i=0,integralbinary[32],k=0;
    // counter for binary array
    while (integral > 0)
    {
        // storing remainder in binary array
        binaryNum[i] = integral % 2;
        integral = integral / 2;
        i++;
    }
    printf("\n\n");
    printf("(1237)= ");
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
    {
        integralbinary[k]=binaryNum[j];
        k++;
        //printf("%d",binaryNum[j]);
    }
    for(int m =0;m<=k-1;m++)
        printf("%d",integralbinary[m]);
    printf("\n\n");

    // if given number has fractional part
    if(fractional)
    {
        printf("(%.5f) = ",fractional);
        int arr[100];
        int limit=0,i=0;
        double frac=fractional;
        while(limit<5)
        {
            double a = frac*2;
            int b = a;
            arr[i]= b;
            frac = a - b;
            i++;
            limit++;
        }
        for(int m =0;m<limit;m++)
            printf("%d",arr[m]);

        //Total number
            printf("\n\n");
            printf("(%.5f) = ",n);
            for (int m=0;m<k;m++)
            {
                printf("%d",integralbinary[m]);
            }
            printf(".");
            for (int m=0;m<limit;m++)
            {
                printf("%d",arr[m]);
            }
            printf("\n\n");
    }
    return 0;
}
