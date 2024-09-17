//ask the user to enter their firstname and print it back to them
#include<stdio.h>
void printString(char arr[]);

int main()
{
     char firstname[40];
    // scanf("%s",firstname);
    // printf("ENter your firstname is :%s",firstname);
    // gets(firstname);
        fgets(firstname,100,stdin);

    puts(firstname);
    return 0;
}
void printString(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}