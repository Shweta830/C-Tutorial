//string of strcpy(str)
#include<stdio.h>
#include<string.h>
void printString(char arr[]);
int countLength(char arr[]);
int main()
{ 
   char oldstr[]="Shweta";
   char newstr[]="Nisha";
   strcpy(newstr,oldstr);
   puts(newstr);
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