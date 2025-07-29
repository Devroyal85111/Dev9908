#include <stdio.h>

int main() {
    int numbers[5];
    FILE *oddFile, *evenFile;

    // Open files for writing
    oddFile = fopen("odd.txt", "w");
    evenFile = fopen("even.txt", "w");

    if (oddFile == NULL || evenFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    // Take 5 inputs from user
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            fprintf(evenFile, "%d\n", numbers[i]);
        } else {
            fprintf(oddFile, "%d\n", numbers[i]);
        }
    }

    // Close files
    fclose(oddFile);
    fclose(evenFile);

    printf("Numbers written to odd.txt and even.txt successfully.\n");

    return 0;
}