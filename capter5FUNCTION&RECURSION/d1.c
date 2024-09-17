//function and recursion
#include<stdio.h>
//declaration/prototype
void printHello();
void printGoodbye();
int main()
{
    //function call
    printHello();
    printGoodbye();
    return 0;
}
//function definition
void printHello(){
    printf("HelloWorld\n");
}
void printGoodbye(){
    printf("Goodbye");
}