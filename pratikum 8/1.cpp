#include <stdio.h>

int main() {
    int A[11]; // Deklarasi array A satu dimensi dengan panjang 11
    int data; // Variabel untuk menyimpan data dari dokumen
    int countA = 0; // Variabel untuk menghitung jumlah elemen yang disimpan di dalam array A

    printf("Isi array A:\n");
    printf("a. A\n");

    // Membaca data dari dokumen
    while (1) {
        scanf("%d", &data);

        if (data == 999) // Memeriksa apakah sudah mencapai akhir data
            break;

        if (data > 9) { // Menyimpan data ke dalam array jika nilainya lebih besar dari 9
            if (countA < 11) {
                A[countA] = data; // Menyimpan data ke dalam array A
                countA++; // Increment counter untuk menggeser indeks penyimpanan data selanjutnya
            }
        }
    }

    printf("\nb. A\n");
    // Menampilkan isi array A yang telah disimpan
    for (int i = 0; i < countA; i++) {
        printf("%d ", A[i]);
    }
    printf("\n\n");

    printf("c. A\n");
    int countC = 0; // Variabel untuk menghitung jumlah elemen yang disimpan di dalam array C
    int C[11]; // Deklarasi array C satu dimensi dengan panjang 11

    // Mengulangi proses pembacaan data dari dokumen untuk menyimpan berderetan di dalam array C
    for (int i = 0; i < countA; i++) {
        if (A[i] > 9) {
            if (countC < 11) {
                C[countC] = A[i]; // Menyimpan data ke dalam array C
                countC++; // Increment counter untuk menggeser indeks penyimpanan data selanjutnya
            }
        }
    }

    // Menampilkan isi array C yang telah disimpan
    for (int i = 0; i < countC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n\n");

    printf("d. A\n");
    // Menampilkan nilai ganjil yang disimpan di dalam array A
    for (int i = 0; i < countA; i++) {
        if (A[i] % 2 != 0) {
            printf("%d ", A[i]);
        }
    }
    printf("\n\n");

    printf("e. A\n");
    // Menampilkan nilai ganjil sesuai tata letak dalam dokumen yang disimpan di dalam array A
    for (int i = 0; i < countA; i++) {
        if (A[i] % 2 != 0 && A[i] > 9) {
            printf("%d ", A[i]);
        }
    }
    printf("\n");

    return 0;
}
