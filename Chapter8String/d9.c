//string of strcat(firstStr,secStr)//concatenation
#include<stdio.h>
#include<string.h>
void printString(char arr[]);
int main()
{ 
    char firstName[]="shweta";
    char secondName[100]="Yadav";
    strcat(firstName,secondName);
        puts(firstName);

    // strcat(secondName,firstName);
    // puts(secondName);
  
    return 0;
}
void printString(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}
