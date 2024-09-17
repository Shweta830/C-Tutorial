// Write a program in C to print all the letters in english
// alphabet using a pointer.
//  in c
#include<stdio.h>
int main()
{
    
   char alphabet[26]; // Array to hold the alphabet
    char *ptr = alphabet; // Pointer to the array
    
    // Fill the array with the English alphabet
    for (int i = 0; i < 26; i++) {
        *(ptr + i) = 'A' + i; // Assign the character to the array using pointer
    }
    
    // Print the alphabet using the pointer
    printf("The letters in the English alphabet are:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c ", *(ptr + i)); // Access and print the character using pointer
    }
    
    printf("\n");
    return 0;
}