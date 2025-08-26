#include <stdio.h>
#include <stdbool.h>

int main(){
    
    //variable = reusable value

    
 
    int age = 18;        //int stores whole numbers
    int year = 2025;
    int quantity = 1;

    printf("I am %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have orderd %d x items\n", quantity);




    float gpa = 2.5;        //float stores decimels   
    float price = 19.99;

    printf("Your gpa is %f\n", gpa);
    printf("The price is %.2f\n", price); //%.2f shows the last 2 decimal places



    double pi = 3.1423232321442; //dobule stores alot of decimels  \

    printf("pi is %.15lf\n", pi);


    char grade = 'A';   //char stores a single character

    printf("your grade is %c\n", grade);


    char name[] = "Jack";   //char ___[] stores strings an array of characters

    printf("My name is %s\n", name);


    //booleans are either true or false
    //#include <stdbool.h>

    bool isOnline = true;   //booleans are ussaly used internaly like this not in printf statements
        if(isOnline){
            printf("You are online");
        }
        else {
            printf("You are offline");
        }
        
    
    return 0;
    
}