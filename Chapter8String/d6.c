//Make a program that unputs user's name and print its length
#include<stdio.h>
void printString(char arr[]);
int countLength(char arr[]);
int main()
{
    char name[100];
    fgets(name,100,stdin);
    printf("Lenght is : %d",countLength(name));
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