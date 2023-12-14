#include <stdio.h>
#include <stdbool.h>

int main() {
    char A[8] = {'A', 'J', 'A', 'K', 'A', 'R', 'T', 'A'};
    bool found = false;

    // Memeriksa apakah ada huruf yang sama dalam array A
    for (int i = 0; i < 7; i++) { // Hanya perlu memeriksa hingga indeks 7, karena ada '\0' di indeks 7
        for (int j = i + 1; j < 8; j++) {
            if (A[i] == A[j]) {
                found = true;
                printf("ADA\nHuruf yang sama: %c\n", A[i]);
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        printf("TIDAK ADA\n");
    }

    return 0;
}
