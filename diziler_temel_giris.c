#include <stdio.h>

int main() {
    /* * DIZI (ARRAY) TANIMLAMA MANTIGI:
     * Koseli parantez icini bos birakirsan, C derleyicisi sagdaki su hapseli 
     * parantez { } icindeki eleman sayisina bakarak dizinin boyutunu otomatik belirler (Burada 4 elemanli).
     */
    int benimDizim[] = {25, 50, 75, 100}; 

    /* * INDEKS KURALI:
     * C dilinde saymaya her zaman 0'dan baslanir.
     * benimDizim[0] -> 1. eleman (25)
     * benimDizim[1] -> 2. eleman (50)
     * benimDizim[2] -> 3. eleman (75)
     * benimDizim[3] -> 4. eleman (100)
     */

    // Dizinin 0. indeksindeki (ilk) elemanin degerini 33 olarak degistiriyoruz
    benimDizim[0] = 33;

    // Ekrana guncel degeri (33) basiyoruz
    printf("%d\n", benimDizim[0]);

    return 0;
}