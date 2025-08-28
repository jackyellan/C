#include <stdio.h>
#include <string.h> //provides functions working with strings

int main (){

    
    int age = 0;
    float gpa = 0.0;
    char grade = '\0'; // '\0' menas null terminator to clear it out meaning nothing
    char name[30] = ""; //30 is maximum characters inside for future output scince we arent assigning a value

    printf("enter your age: ");
    scanf("%d", &age);

    printf("enter your gpa: ");
    scanf("%f", &gpa);

    getchar(); //fixes bug
    printf("enter your grade: ");
    scanf("%c", &grade);

    getchar();
    printf("enter your full name: ");
    fgets(name, sizeof(name), stdin); //fgets reads whole line of input
    name[strlen(name) -1] = '\0'; //this function is in the <string.h> include and 
                                  //what it does is get rid of the space at the bottom of the output due from the fget input above


    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade); 
    printf("%s\n", name);







    return 0;
}