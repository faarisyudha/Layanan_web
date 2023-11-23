#include <stdio.h>

int main() {
    int nilai[10];
    int i, lulus = 0;

    printf("Masukkan 10 nilai mahasiswa:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &nilai[i]);
        if (nilai[i] >= 60) {
            printf("Nilai %d: Lulus\n", nilai[i]);
            lulus++;
        }
    }

    printf("\nDaftar nilai mahasiswa yang lulus: %d\n", lulus);
    return 0;
}
