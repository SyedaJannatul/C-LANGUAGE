#include<stdio.h>

int main()
{
    double n,fractional,frac,a;
    int arr[100],integral,octalNum[32],i=0,integralbinary[32],k=0,limit=0,m,total,j,l=0;
    printf("Enter decimal number: ");
    scanf("%lf",&n);
    printf("input %f\n",n);
    integral=n;
    fractional=n-integral;
    printf("%d -> %f",integral,fractional);
    // array to store binary number
    // counter for binary array
    i=0;
    while (integral > 0)
    {
        // storing remainder in octal array
        octalNum[i] = integral % 8;
        integral = integral / 8;
        i++;
    }
    printf("\n\n");
    printf("Integral = ");
    m=i-1;
    // printing binary array in reverse order
    for (int j = m; j >= 0; j--)
    {
        integralbinary[k]=octalNum[j];
        k++;
        //printf("%d",binaryNum[j]);
    }
    for(int m =0;m<=k-1;m++)
        printf("%d",integralbinary[m]);
    printf("\n\n");

    // if given number has fractional part
    if(fractional)
    {
        frac=fractional;
        while(limit<6)
        {
            a = frac*8;
            printf("a=%f\n",a);
            int b = a;
            printf("b=%d\n",b);
            arr[l]= b;
            printf("arr[%d]=%d\n",l,arr[l]);
            frac = a - b;
            if (b+frac==b+0.0000)
                break;
            l++;
            limit++;
        }
        //Total number
        printf("\n\n");
        printf("(%.5f) = ",n);
        for (int m=0;m<k;m++)
        {
            printf("%d",integralbinary[m]);
        }
        printf(".");
        for (j=0;j<limit;j++)
        {
            printf("%d",arr[j]);
        }
        printf("\n\n");
    }
    return 0;
}
