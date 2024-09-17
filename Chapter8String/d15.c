//check if a given character is present in a string or not
#include<stdio.h>
#include<string.h>
void checkCharcter(char str[],char ch);
int main()
{
     char str[]="ShwetaYadav";
     char ch='b';
     checkCharcter(str,ch);
    return 0;
}
void checkCharcter(char str[],char ch){
    for (int i = 0;str[i]!='\0'; i++)
    {
        if (str[i]==ch)
        {
            printf("Character is present");
            return ;
        }
        
    }
              printf("Character is not  present");
  
}