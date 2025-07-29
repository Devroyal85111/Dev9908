#include <stdio.h>

int main() {
    int num, min, max;

   
    printf("Enter number 1: ");
    scanf("%d", &num);
    min = max = num;

    // Take remaining 4 inputs
    for (int i = 2; i <= 5; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }

    // Open files to write min and max
    FILE *minFile = fopen("min.txt", "w");
    FILE *maxFile = fopen("max.txt", "w");

    if (minFile == NULL || maxFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    // Write min and max to respective files
    fprintf(minFile, "Minimum number: %d\n", min);
    fprintf(maxFile, "Maximum number: %d\n", max);

    // Close the files
    fclose(minFile);
    fclose(maxFile);

    printf("Minimum number written to min.txt\n");
    printf("Maximum number written to max.txt\n");

    return 0;
}
