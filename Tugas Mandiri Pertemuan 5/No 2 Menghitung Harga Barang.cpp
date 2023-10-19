#include <stdio.h>

int main() {
    int kode;
    char jenis;
    float harga, diskon, harga_setelah_diskon;

    // Input kode, jenis, dan harga
    printf("Kode: ");
    scanf("%d", &kode);
    printf("Jenis (A/B/C): ");
    scanf(" %c", &jenis);  // Menggunakan spasi sebelum %c untuk menghindari newline

    if (jenis != 'A' && jenis != 'B' && jenis != 'C') {
        printf("Jenis barang tidak valid.\n");
        return 1;  // Keluar dari program dengan kode kesalahan
    }

    printf("Harga: ");
    scanf("%f", &harga);

    // Menghitung diskon berdasarkan jenis barang
    switch (jenis) {
        case 'A':
            diskon = 0.10;
            break;
        case 'B':
            diskon = 0.15;
            break;
        case 'C':
            diskon = 0.20;
            break;
    }

    // Menghitung harga setelah diskon
    harga_setelah_diskon = harga - (harga * diskon);

    // Menampilkan jenis barang, persentase diskon, dan harga setelah diskon
    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.2f\n", jenis, diskon * 100, harga_setelah_diskon);

    return 0;
}
