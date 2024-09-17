//Allocate memory for 500 integers using calloc &
//then store first 500 natural numbers in that space.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr=(int *)calloc(500, sizeof(int));

    for  (int i = 0; i < 500; i++) {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < 504; i++) {
        printf("%d ", ptr[i]);
    }

    // Free the allocated memory
    free(ptr);
return 0;
}
