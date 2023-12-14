#include <stdio.h>

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];
    int total = 0;

    // Menghitung total nilai di dalam array A
    for (int i = 0; i < 12; i++) {
        total += A[i];
    }

    // Menghitung rata-rata
    float average = (float)total / 12.0;

    // Memindahkan nilai-nilai sesuai kondisi ke array B dan C
    int indexB = 0, indexC = 0;
    for (int i = 0; i < 12; i++) {
        if (A[i] > average) {
            B[indexB] = A[i];
            indexB++;
        } else if (A[i] < average) {
            C[indexC] = A[i];
            indexC++;
        }
    }

    // Menampilkan isi array A
    printf("Isi array A: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Menampilkan isi array B
    printf("Isi array B: ");
    for (int i = 0; i < indexB; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    // Menampilkan isi array C
    printf("Isi array C: ");
    for (int i = 0; i < indexC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
