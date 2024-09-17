//Write a program to print the highest frequency
//character in a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int freq[255]={0};
    int maxFreq =0;
    char maxChar;
    int i;
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    for ( i = 0; str[i]!='\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }
    for ( i = 0;str[i]!='\0'; i++)
    {
    if (freq[(unsigned char)str[i]] > maxFreq && str[i] != ' ') {
            maxFreq = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }
    
       printf("The highest frequency character is '%c' appearing %d times.\n", maxChar, maxFreq);
 
    return 0;
}