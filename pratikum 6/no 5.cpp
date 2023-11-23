#include <stdio.h>

int main() {
    double money = 1000000; // Uang awal
    double interest = 0.02; // Bunga per bulan
    int months = 10; // Jumlah bulan

    for (int i = 1; i <= months; i++) {
        double monthlyInterest = money * interest;
        money += monthlyInterest;
    }

    printf("Jumlah uang setelah %d bulan: Rp. %.2f\n", months, money);
    return 0;
}
