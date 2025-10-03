#include <stdio.h>
int main()
{


    int n;
    long long faktorial = 1;

    printf("Masukkan bilangan:");
    if (scanf("%d", &n) != 1)
    {
        printf("Error.\n");
        return 1;
    }
    if (n < 0)
    {
        printf("Error.\n");
    }
    else if (n == 0)
    {
        printf("hasil faktorial dari %d adalah h 1.\n",n);
    }
    else
    {
        for (int i = 1;i <= n; i++)
        {
            faktorial *= i;
        }
        printf("hasil faktorial dari %d adalah %lld.\n",n,faktorial);



    }
    return 0;
}