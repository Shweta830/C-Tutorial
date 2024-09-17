//Replace the data in file of Q(a) with the number of
// vowels in the string.
#include <stdio.h>
#include <ctype.h>
#include<string.h>  // For tolower()

int main() {
    FILE *file;
    char buffer[1000];
    int vowel_count = 0;

    // Open the file, read content, and count vowels
    if ((file = fopen("ans1.txt", "r")) == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), file))
        for (int i = 0; buffer[i]; i++)
            vowel_count += (strchr("aeiouAEIOU", buffer[i]) != NULL);
    fclose(file);

    // Open file in write mode and overwrite with vowel count
    if ((file = fopen("ans1.txt", "w")) == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(file, "Number of vowels: %d\n", vowel_count);
    fclose(file);

    printf("Vowel count written to file successfully.\n");
    return 0;
}
