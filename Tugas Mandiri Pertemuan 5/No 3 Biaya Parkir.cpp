#include <stdio.h>

int main() {
    int jam_masuk, jam_keluar, lama_parkir, biaya;

    // Input jam masuk dan jam keluar
    printf("Jam masuk: ");
    scanf("%d", &jam_masuk);
    printf("Jam keluar: ");
    scanf("%d", &jam_keluar);

    // Menghitung lama parkir
    lama_parkir = jam_keluar - jam_masuk;

    // Menghitung biaya parkir
    if (lama_parkir <= 2) {
        biaya = 2000;
    } else {
        biaya = 2000 + (lama_parkir - 2) * 500;
    }

    // Menampilkan biaya parkir
    printf("Biaya = %d rupiah\n", biaya);

    return 0;
}
