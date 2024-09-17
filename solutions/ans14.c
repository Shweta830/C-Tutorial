#include<stdio.h>

int main() {
    int n, i, new_element;

    // Input: size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n+1];  // Allocate space for n+1 elements

    // Input: elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: the new element to be added
    printf("Enter the new element to be inserted at the end: ");
    scanf("%d", &new_element);

    // Insert the new element at the end
    arr[n] = new_element;

    // Output: the updated array
    printf("Array after inserting the new element:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
