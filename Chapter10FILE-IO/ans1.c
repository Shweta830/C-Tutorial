//Write a program to read a string from a file &
// output to the user.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char name[1000];
   fptr=fopen("ans1.txt","r");
    if (fptr == NULL) {
        printf("Could not open file.\n");
        return 1;
    }
   if (fgets(name, sizeof(name), fptr) != NULL) {
        // Output the string to the user
        printf("Read from file: %s\n", name);
    } else {
        printf("Failed to read from file.\n");
    }

    // Close the file
    fclose(fptr);

    return 0;
}