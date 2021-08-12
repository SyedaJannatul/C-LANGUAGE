#include<stdio.h>
#include<math.h>
#include <string.h>

int main()
{
    //string to number conversion
    char num[100];
    int point,f,b,count=0,len,dotpos,i=0,l,rem,intercount,fraccount,decnum=0,frac,intoct[100],factoct[100],interdiff,integer[100],fracdiff,fraction[100];
    printf("Enter binary number : ");
    gets(num);
    len = strlen(num);
    printf("length = %d\n",len);
    while(num[i]!='\0')
    {
        if(num[i]=='.'){
            dotpos = i;
            break;}
        count++;
        i++;
    }
    printf("len integer = %d\n",count);
    printf("dot point index = %d\n",dotpos);
    fraccount=len-1-count;
    intercount=count;

    //integer part
    while(intercount%3!=0)
    {
        intercount++;
    }
    interdiff=intercount-count;
    printf("diff = %d",interdiff);
    for (int j=0;j<interdiff;j++)
        integer[j]=0;
    for (int j=0;j<count;j++)
    {
        rem=num[j];
        if(rem>=48 && rem<=49)
        {
            rem=rem-48;
        }
        integer[interdiff]=rem;
        interdiff++;
    }
    printf("\ninteger = ");
    for (int j=0;j<intercount;j++)
        printf("%d",integer[j]);

    int bintodec(int ingral)
    {
        int r,m=0,decimal_num=0;
        while (ingral != 0)
        {
            r = ingral % 10;
            decimal_num = decimal_num + r * pow(2,m);
            ingral = ingral / 10;
            m++;
        }
        return decimal_num;
    }
    int k=0;
    for (int j=0;j<intercount;j=j+3)
    {
        int a=(100*integer[j])+(10*integer[j+1])+integer[j+2];
        b = bintodec(a);
        intoct[k]=b;
        k++;
    }
    printf("\n intoct = ");
    for (int j=0;j<k;j++)
        printf("%d",intoct[j]);


    //fraction part
    if(fraccount!= -1)
    {
        printf("\nlen fraction = %d\n",fraccount);
        frac=fraccount;
        while(frac%3!=0)
        {
            frac++;
        }
        fracdiff=frac-fraccount;
        printf("\ndiff = %d",fracdiff);
        point=dotpos+1;
        for (int j=0;j<fraccount;j++)
        {
            rem=num[point];
            if(rem==48)
                rem=0;
            else
                rem=1;

            fraction[j]=rem;
            printf("\n before fraction[%d] = %d",j,fraction[j]);
            point++;
        }
        for (int j=0;j<fraccount;j++)
        {
            printf("\n before fraction = %d",fraction[j]);
        }
        f = fraccount+fracdiff;
        if(fracdiff!=0)
        {
          for (int j=fraccount;j<f;j++)
          {
            fraction[j]=0;
          }
        }
        printf("\nfraction = ");
        for (int j=0;j<f;j++)
            printf("%d",fraction[j]);

        l=0;
        for (int j=0;j<f;j=j+3)
        {
            int a=(100*fraction[j])+(10*fraction[j+1])+fraction[j+2];
            b = bintodec(a);
            factoct[l]=b;
            l++;
        }
        printf("\nFactoct = ");
        for (int j=0;j<l;j++)
            printf("%d",factoct[j]);
    }


    //Total
    printf("\n\n octal conversion = ");
    for (int j=0;j<k;j++)
        printf("%d",intoct[j]);
    printf(".");
    for (int j=0;j<l;j++)
        printf("%d",factoct[j]);

    return 0;
}
