//Make a program that unputs user's name and print its length
//using strlen(str)
#include<stdio.h>
#include<string.h>
void printString(char arr[]);
int countLength(char arr[]);
int main()
{
    char name[]="Shweta";
    int length=strlen(name);
    printf(",Lenght is : %d",length);
    return 0;
}
void printString(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}
int countLength(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] !='\0'; i++)
    {
    count++;
    }
    return count-1;
}