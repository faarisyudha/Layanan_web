#include <stdio.h>

int main() {
    int N;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &N);

    if (N > 30) {
        N = N - 25;
        N = N + 10;
    }

    printf("Hasil operasi: %d\n", N);

    return 0;
}
