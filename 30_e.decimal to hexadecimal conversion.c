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
        octalNum[i] = integral % 16;
        integral = integral / 16;
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
     {
        if(integralbinary[m]==10)
            printf("A");
        else if(integralbinary[m]==11)
            printf("B");
        else if(integralbinary[m]==12)
            printf("C");
        else if(integralbinary[m]==13)
            printf("D");
        else if(integralbinary[m]==14)
            printf("E");
        else if(integralbinary[m]==15)
            printf("F");
        else
            printf("%d",integralbinary[m]);
       }
    printf("\n\n");

    // if given number has fractional part
    if(fractional)
    {
        frac=fractional;
        while(limit<6)
        {
            a = frac*16;
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
            if(integralbinary[m]==10)
                printf("A");
            else if(integralbinary[m]==11)
                printf("B");
            else if(integralbinary[m]==12)
                printf("C");
            else if(integralbinary[m]==13)
                printf("D");
            else if(integralbinary[m]==14)
                printf("E");
            else if(integralbinary[m]==15)
                printf("F");
            else
                printf("%d",integralbinary[m]);
        }
        printf(".");
        for (j=0;j<limit;j++)
        {
            if(arr[j]==10)
                printf("A");
            else if(arr[j]==11)
                printf("B");
            else if(arr[j]==12)
                printf("C");
            else if(arr[j]==13)
                printf("D");
            else if(arr[j]==14)
                printf("E");
            else if(arr[j]==15)
                printf("F");
            else
                printf("%d",arr[j]);
        }
        printf("\n\n");
    }
    return 0;
}

