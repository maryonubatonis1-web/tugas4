#include <stdio.h>

int main() {
    int angka;

    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka);  // baca input angka

    if (angka % 2 == 0) {   // jika sisa bagi 2 = 0
        printf("%d adalah bilangan genap\n", angka);
    } else {
        printf("%d adalah bilangan ganjil\n", angka);
    }

return 0;
}
