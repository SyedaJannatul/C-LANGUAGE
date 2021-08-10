#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ftoa.c"

int main()
{
    char res[20];
    float n = 233.007;
    ftoa(n, res, 3);
    printf("%s\n", res);
    puts(res);
    return 0;
}
