#include <stdio.h>

int main(){


    //arithmetic operators: = + - * / % ++ --

    float x = 2;
    float y = 3;
    float z = 0; //results stored in z



    z = x + y;

    printf("%f\n", z);

    z = x - y;

    printf("%f\n", z);

    //z = x - y;
    //z = x + y;
    //z = x * y;
    //z = x / y;
    //z = x % y; % modules opperator gives the remainder (MUST BE A INT)

    z = x / y;

    printf("%f\n", z);

    int a = 2;                              // to use % must be an integer
    int b = 3;
    int c = 0; //results stored in c

    c = a % b;

    printf("%d\n", c);

    //x++ adds 1
    //x-- minuses 1 
    //these are commonly used in loops


    //x+=3
    //or
    //x-=3
    //this adds 3 to x or - 3 from x








    return 0;
}