#include <stdio.h>

int main() {
    int total, jam, menit, detik, sisa, hari;

    scanf("%d", &total);

    jam = total / 3600;
    sisa = total % 3600;
    menit = sisa / 60;
    detik = sisa % 60;

    // Kalau jam sudah 24 atau lebih, pisahkan jadi hari
    if (jam >= 24) {
        hari = jam / 24;
        jam = jam % 24;
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    } else {
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    }

    return 0;
}
