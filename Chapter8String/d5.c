//string using pointer
#include<stdio.h>
void printString(char arr[]);

int main()
{
    char *canchange = "Heelo World";
    puts(canchange);
    canchange = "Shweta";
    puts(canchange);
    char cannotchange[] = "Hello World";
    puts(cannotchange);  //its can be changed

    return 0;
}
void printString(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}