#include <stdio.h>
#include <stdbool.h>

int main() {
    char A[11] = {'A', 'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T', '\0'};
    int count[26] = {0}; // Array untuk menghitung kemunculan setiap huruf (indeks 0-25 merepresentasikan A-Z)
    int maxCount = 0;
    char maxChar;

    // Menghitung kemunculan setiap huruf dalam array A
    for (int i = 0; A[i] != '\0'; i++) {
        int index = A[i] - 'A'; // Mengubah huruf ke indeks 0-25 dengan asumsi huruf kapital

        count[index]++;
        if (count[index] > maxCount) {
            maxCount = count[index];
            maxChar = A[i];
        }
    }

    // Mencetak jumlah huruf yang paling banyak muncul beserta hurufnya
    printf("Jumlah huruf terbanyak: %d\nHuruf terbanyak: %c\n", maxCount, maxChar);

    return 0;
}
