#include<stdio.h>
#include<math.h>
#include <string.h>

int main()
{
 //string to number conversion
    char num[100];
    int c1,str[100],point,f,c,b,diff,count=0,len,dotpos,i=0,l,rem,rm,intercount,fraccount,decnum=0,frac,intoct[100],factoct[100],interdiff,integer[100],fracdiff,fraction[100];
    printf("Enter octal number : ");
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

    //add zero and convert again string part

    char addzero(int rm,int c1,int diff)
    {
        char a[5];
        int b,r,k;
        for(int j=0;j<diff;j++)
        {
            a[j]=='0';
        }
        b=c1+diff;
        k=b-1;
        while(rm!=0)
        {
            r=rm%10;
            if (r==0)
                a[k]='0';
            if (r==1)
                a[k]='1';
            rm=rm/10;
            k--;
        }
        return a;
    }
    //decimal to binary part
    int dectobin(int rem)
    {
        int limit,m=0,b=0,binaryNum[100];
        while (rem != 0)
        {
            // storing remainder in binary array
            binaryNum[m] = rem % 2;
            rem = rem / 2;
            m++;
        }
        limit=m-1;
        while(limit>=0)
        {
            b=b+(binaryNum[limit]*pow(10,limit));
            limit--;
        }
        return b;
    }
    int cont(int rm)
    {
        int c=0;
        while(rm!=0)
        {
          rm=rm/10;
          c++;
        }
        return c;
    }
    //core part
    for(int j=0;j<len;j++)
    {
        rem=num[j];
        if(rem>=48 && rem<=57)
        {
            rem=rem-48;
            rm=dectobin(rem);
            printf("\ndectobin = %d",rm);
            c1=cont(rm);
            printf("\ncount = %d",c1);
            c=c1;
            if(c%3!=0)
            {
                while(c%3!=0)
                {
                    c++;
                }
                diff=c-c1;
                str[j]=addzero(rm,c1,diff);
                printf("\nnot%3 str[%d] = %c",j,str[j]);
            }
            str[j]=addzero(rm,c1,0);
            printf("\nyes%3 str[%d] = %c",j,str[j]);
        }
        if(rem==46)//ascii of .->46
        {
            str[j]='.';
        }
    }
    printf("\n\n");
    for(int j=0;j<len;j++)
    {
        printf("%c",str[j]);
    }
 return 0;
}
