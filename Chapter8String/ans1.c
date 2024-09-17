//Write a program to convert all lowercase vowels to
//uppercase in a string.
#include<stdio.h>
#include<string.h>
void convert(char str[]);

int main()
{
    char str[100];
    printf("enter a string:");
    fgets(str,sizeof(str),stdin);
    convert(str);
    printf(" %s",str);
    return 0;
}
void convert(char str[]){
    int i=0;
    while (str[i]!='\0')
    {
   
    if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'
    || str[i]=='u'){

    str[i]=str[i]-32;

    
    }
    i++;
    }  
}