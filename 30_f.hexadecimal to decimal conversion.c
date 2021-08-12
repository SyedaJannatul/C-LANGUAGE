//octal to decimal conversion [fractional number]
#include<stdio.h>
#include<math.h>
#include <string.h>

int main()
{
    //string to number conversion
    char num[100];
    int count=0,len,k=-1,j=0,dotpos,i=0,intcount,fraccount,rem,decnum=0,frac,rm;
    double fracnum=0.0,sum=0.0;
    printf("Enter hexadecimal number : ");
    gets(num);
    len = strlen(num);
    printf("length = %d",len);
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
    printf("len fraction = %d",fraccount);
    intcount=count-1;
    while(intcount>=0)
    {
            rem = num[intcount];
            if(rem>=48 && rem<=57)
                rem = rem-48;
            else if(rem>=65 && rem<=70)
                rem = rem-55;
            else
            {
                printf("\nYou've entered an invalid Hexadecimal digit");
                return 0;
            }
            decnum = decnum + (rem*pow(16, j));
            intcount--;
            j++;
    }
    printf("\nEquivalent Decimal Value = %d", decnum);

    frac=count+1;
    while(frac<len)
    {
            rm = num[frac];
            if(rm>=48 && rm<=57)
                rm = rm-48;
            else if(rm>=65 && rm<=70)
                rm = rm-55;
            else
            {
                printf("\nYou've entered an invalid Hexadecimal digit");
                return 0;
            }
            printf("\nrm = %d\n",rm);
            fracnum = fracnum + (rm*pow(16, k));
            printf("fracrm = %f\n\n",fracnum);
            frac++;
            k--;
    }
    printf("\nEquivalent Decimal Value = %f", fracnum);
    sum=decnum+fracnum;
    printf("\nthe decimal conversion = %f",sum);
    return 0;
}
