#include <stdio.h>

int main() {
    int N;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &N);

    if (N > 30) {
        N = N + 10;
    } else {
        N = N - 25;
    }

    printf("Hasil operasi: %d\n", N);

    return 0;
}
