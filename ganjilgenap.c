#include <stdio.h>

int main()
{
    
    int angka;
    printf("Masukan angka: ");
    scanf("%d", &angka);

    
    if (angka >= 1 && angka <= 2)
    {
        if (angka % 2 == 0)
        {printf("GENAP");}
        else
        {printf("GANJIL");}
    }
    
    return 0;
}
