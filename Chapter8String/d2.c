//string
//create a string firstname and lastname to store details of user
// and print all the character using a loop
#include<stdio.h>
void printString(char arr[]);
int main()
{
    char firstName[]="Shweta";
     char lastName[]="Yadav";
  printString(firstName);
  printString(lastName);
    
    return 0;
}
void printString(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}