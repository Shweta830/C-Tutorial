//string using compare
#include<stdio.h>
#include<string.h>
void printString(char arr[]);
int main()
{ 
    char firstStr[]="A";  //65
    char secondStr[]="B";  //66
    printf("%d\n",strcmp(firstStr,secondStr));  //-1
    printf("%d\n",strcmp(secondStr,firstStr));  //1
    char name[]="SHweta";
    char name2[]="SHweta";
 printf("%d\n",strcmp(name,name2));  //0


  
    return 0;
}
void printString(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}
