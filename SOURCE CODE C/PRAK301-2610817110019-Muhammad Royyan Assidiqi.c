
#include <stdio.h>

int main() {
    char baris[100];
    int a, b, c, temp, jumlah;

    fgets(baris, sizeof(baris), stdin);
    jumlah = sscanf(baris, "%d %d %d", &a, &b, &c);  

    if (jumlah == 2) {
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        printf("%d %d\n", a, b);
    } else {
       
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        if (b > c) {
            temp = b;
            b = c;
            c = temp;
        }
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        printf("%d %d %d\n", a, b, c);
    }

    return 0;
}
