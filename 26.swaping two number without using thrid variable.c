#include<stdio.h>

/*
// Function to swap the numbers.
int swap(int a, int b)
{
    a = (a&b) + (a|b);// same as a = a + b
    b = a + (~b) + 1;// same as b = a - b
    a = a + (~b) + 1;// same as a = a - b
    printf("After swapping a=%d , b=%d",a,b);
}

int main()
{
    int a = 15, b = -10;
    swap(a, b);
    return 0;
}*/
//----------------------------------------------------------------
/*int swap(int a, int b)
{
    a = a + b; //a = a * b;
    b = a - b; //b = a / b;
    a = a - b; //a = a / b;
    printf("After swapping a=%d , b=%d",a,b);
}

int main()
{
    int a = -15, b = 10;
    swap(a, b);
    return 0;
}*/
//----------------------------------------------------------------
/*include <stdio.h>
int main()
{
    int x = 10, y = 5;

    // Code to swap 'x' (1010) and 'y' (0101)
    x = x ^ y; // x now becomes 15 (1111)
    y = x ^ y; // y becomes 10 (1010)
    x = x ^ y; // x becomes 5 (0101)

    printf("After Swapping: x = %d, y = %d", x, y);

    return 0;
}*/
//----------------------------------------------------------------
//Swapping two variables in one line
//----------------------------------------------------------------

/*#include <stdio.h>
int main()
{
    int x = -5, y = -10;
    (x ^= y), (y ^= x), (x ^= y);
    printf("After swapping x=%d , y=%d",x,y);
    return 0;
}*/
//--------------------------------------------------------------
/*#include <stdio.h>
int main()
{
    int x = -5, y = -10;
    (x += y), (y = x-y), (x -= y);
    printf("After swapping x=%d , y=%d",x,y);
    return 0;
}*/

//----------------------------------------------------------------
//Swapping three variables in without using temp variable
//----------------------------------------------------------------
/*int main()
{
    int a = -15, b = 10,c=5;
    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);
    printf("After swapping a=%d , b=%d, c=%d",a,b,c);
    return 0;
}*/
//----------------------------------------------------------------
int main()
{
    int a = -15, b = 10,c=5;
    // Store XOR of all in a
    a = a ^ b ^ c;

    // After this, b has value of a
    b = a ^ b ^ c;

    // After this, c has value of b
    c = a ^ b ^ c;

    // After this, a has value of c
    a = a ^ b ^ c;
    printf("After swapping a=%d , b=%d, c=%d",a,b,c);
    return 0;
}
