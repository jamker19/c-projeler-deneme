#include <stdio.h>

int main() {
    int i = 0;

    /* Normal sartlarda 1'den 10'u kapsayacak sekilde donen bir dongu */
    for (i = 1; i <= 10; i++)
    {
        /* * ACIL CIKIS (BREAK) MANTIGI:
         * Sayac 4'e ulastigi an, alt satirdaki printf'e ulasamadan
         * break komutu donguyu tamamen sonlandirir.
         */
        if (i == 4)
        {
            break; 
        }
        
        printf("%d\n", i);
    }

    // break komutundan sonra program buradaki ilk satirdan akmaya devam eder
    return 0;
}