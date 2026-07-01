#include <stdio.h>

int main() {
    int i;

    i = 0; // Baslangic degeri
    
    /* Normalde 10 tur donmesi beklenen while dongusu */
    while (i < 10) {
        
        /* * WHILE ICINDE BREAK MANTIGI:
         * Sayac 5 degerine ulastigi an break komutu devreye girer.
         * Dongu gogsu yarik sekilde aninda sonlanir; alt satirdaki printf ve i++ calismaz.
         */
        if (i == 5) {
            break;
        }
        
        printf("%d\n", i);
        i++; // Sayac artirimi
    }

    return 0;
}