//write a function named slice,which takes a string
// and returns a sliced string from index n to m
#include<stdio.h>
#include<string.h>
void slice(char str[],int n,int m);
int main()
{
    // char str[]="Shwetayadav";
    char str[100];
    scanf("%s",str);
    slice(str,3,7);
    
    return 0;
}
void slice(char str[],int n,int m){
    char newStr[100];
    int j=0;
    for (int i = n; i<=m;  i++,j++)
    {
        newStr[j]=str[i];
    }
    newStr[j]='\0';
    puts(newStr);
}