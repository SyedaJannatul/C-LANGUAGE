//octal to decimal conversion [fractional number]
#include<stdio.h>
#include<math.h>
#include <string.h>

int main()
{
    //string to number conversion
    char num[100];
    int count=0,len,after_decimal,integral,intig,b,k,j=-1,m;
    double fraction,fractionwithint,a,fun=0.0,sum;
    printf("Enter hexadecimal number : ");
    gets(num);
    len = strlen(num);
    for(m=0;m<len;m++)
    {
        if(num[m]=='A'){
            num[m]='10';}
        else if(num[m]=='B'){
            num[m]='11';}
        else if(num[m]=='C'){
            num[m]='12';}
        else if(num[m]=='D'){
            num[m]='13';}
        else if(num[m]=='E'){
            num[m]='14';}
        else if(num[m]=='F'){
            num[m]='15';}
        else
            return 0;
    }
    puts(num);
    /*integral = atof(num);
    fractionwithint = atof(num);
    fraction = fractionwithint-integral;
    printf("Converting string to int : %d\n", integral);
    printf("Converting string to float : %f\n", fraction);

    intig=integral;
    while(intig!=0){
        intig = intig/10;
        count++;
    }
    len = strlen(num);//Total number of digits including '.'
    after_decimal= len-count-1;//because string end with '\0'
    printf("Number of digits after decimal points are %d\n",after_decimal);

    //integral part
    int i=0,rem,decimal_num=0,ingral;
    ingral=integral;
    while (ingral != 0)
    {
        rem = ingral % 10;
        decimal_num = decimal_num + rem * pow(8,i);
        ingral = ingral / 10;
        i++;
    }
    printf("\n\n");
    printf("Integral: %d ",decimal_num);
    printf("\n\n");

    // if given number has fractional part
    if(fraction)
    {
        for(k=0;k<after_decimal;k++)
        {
            a = 10*fraction;
            b = a;
            printf("a=%f",a);
            printf("\n");
            printf("b = %d",b);
            printf("\n");
            printf("j=%d",j);
            printf("\n");
            fun=fun+(b*(pow(8,j)));
            printf("fun=%f",fun);
            printf("\n");
            fraction=a-b;
            printf("fraction=%f",fraction);
            printf("\n");
            printf(".....");
            printf("\n");
            j--;
        }
        printf("fractional:\n");
        printf("%f",fun);
        printf("\n");
    }
    sum=decimal_num+fun;
    printf("\nthe decimal equivalent = %f",sum);*/
    return 0;
}
