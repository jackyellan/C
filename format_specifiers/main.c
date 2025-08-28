#include <stdio.h>

//format specifiers are special tokens that begin with a % symbol,
// followed by ac character that specifies the data.


int main (){

    int age = 18;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Jack";


    printf("%d\n", age);
    printf("%.4f\n", price); //.numbers after % on %f determine how many decimal places there will be ex .4
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);
    


    //width is the number after %, tells how many "spaces" will be printed. (only for ints (%d))



    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%5d\n", num1);
    printf("%5d\n", num2);
    printf("%1d\n", num3);



    //precision
    //%._f is how many digits will display after the decimal

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%.1f\n", price1);
    printf("%.5f\n", price2);
    printf("%.7f\n", price3);

    return 0;

}