#include <stdio.h>

int main() {
    int n = 13; // Must be odd for symmetry

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (
                // Top row: leftmost and right half
                (i == 0 && (j == 0 || j >= n / 2)) ||

                // First column: upper half
                (j == 0 && i <= n / 2) ||

                // Middle row: full
                (i == n / 2) ||

                // Middle column: full
                (j == n / 2) ||

                // Last column: lower half
                (j == n - 1 && i >= n / 2) ||

                // Bottom row: rightmost and left half
                (i == n - 1 && (j == n - 1 || j <= n / 2))
            )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
return 0;
}