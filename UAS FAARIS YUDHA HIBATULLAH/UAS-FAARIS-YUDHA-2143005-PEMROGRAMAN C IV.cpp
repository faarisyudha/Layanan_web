#include <stdio.h>
#include <unistd.h>

// Array berisi level kekeruhan air
int kekeruhanAir[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

// Fungsi untuk mendapatkan kecepatan motor berdasarkan level kekeruhan air
int getKecepatanMotor(int level) {
    // Contoh aturan fuzzy sederhana
    if (level < 12) {
        return 1000; // Kecepatan motor jika kekeruhan < 12
    } else if (level < 30) {
        return 800;  // Kecepatan motor jika 12 <= kekeruhan < 30
    } else {
        return 600;  // Kecepatan motor jika kekeruhan >= 30
    }
}

// Fungsi untuk mencuci dengan motor utama
void mencuciUtama(int kecepatan, int waktu) {
    printf("Mencuci dengan kecepatan %d rpm selama %d menit.\n", kecepatan, waktu);
    sleep(waktu * 60); // Konversi waktu dari menit ke detik
}

// Fungsi untuk membuka dan menutup klep
void kontrolKlep(char *aksi) {
    printf("Motor listrik klep %s aktif.\n", aksi);
    sleep(2 * 60); // 2 menit
}

// Fungsi untuk mengeringkan cucian
void keringkanCucian() {
    printf("Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit.\n");
    sleep(3 * 60);
}

int main() {
    // Tombol Start ditekan
    printf("Tombol Start ditekan.\n");

    // Motor listrik pembuka klep pengisian air aktif selama 2 menit sampai air penuh
    kontrolKlep("pengisian air");

    // Sensor turbidimeter aktif hanya satu kali untuk mendeteksi level kekeruhan air
    int levelRataRata = kekeruhanAir[sizeof(kekeruhanAir) / sizeof(kekeruhanAir[0]) / 2];
    int kecepatanMotor = getKecepatanMotor(levelRataRata);

    // Motor listrik utama berputar sesuai level kekeruhan air = level rata-rata kekeruhan air
    mencuciUtama(kecepatanMotor, 3);

    // Motor listrik utama berhenti pada setiap pertengahan waktu
    printf("Mesin dalam keadaan istirahat selama 2 menit.\n");
    sleep(2 * 60);

    // Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit sampai air kotor habis
    kontrolKlep("pembuangan air");

    // Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    keringkanCucian();

    // Motor listrik pembuka klep pengisian air aktif selama 2 menit sampai air penuh
    kontrolKlep("pengisian air");

    // Motor listrik utama berputar selama sisa waktu mencuci
    mencuciUtama(kecepatanMotor, 3);

    // Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit sampai air habis
    kontrolKlep("pembuangan air");

    // Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    keringkanCucian();

    // Mesin cuci selesai
    printf("Proses pencucian selesai. Silakan ambil cucian Anda.\n");

    return 0;
}

