#include <stdio.h>

int main() {
    int n, i;
    long long hasil = 1;  // gunakan long long supaya muat angka besar

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    // cek jika n negatif
    if (n < 0) {
        printf("Faktorial tidak terdefinisi untuk bilangan negatif\n");
    } else {
        for (i = 1; i <= n; i++) {
            hasil *= i;   // hasil = hasil * i
        }
        printf("hasil faktorial dari %d adalah %lld\n", n, hasil);
    }

return 0 ;
}
