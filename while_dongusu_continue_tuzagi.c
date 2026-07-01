#include <stdio.h>

int main() {
    int i = 0;

    /* =========================================================================
     * DIKKAT: ASAGIDAKI KOD (GÖRSELDEKI) BIR SONSUZ DÖNGÜ (BUG) ÖRNEGIDIR!
     * =========================================================================
     * i == 4 oldugunda 'continue' tetiklenir, altindaki 'i++' es gecilir.
     * Bu yuzden 'i' degeri 4'te takili kalir ve program sonsuz donguye girer.
     * 
     * while (i < 10) {
     *     if (i == 4) {
     *         continue;
     *     }
     *     printf("%d\n", i);
     *     i++;
     * }
     */

    // =========================================================================
    // DOGRU KULLANIM: WHILE ICINDE CONTINUE KULLANIRKEN SAYACI MANUEL ARTIRMAK
    // =========================================================================
    printf("--- Dogru Calisan While-Continue Dongusu ---\n");
    
    i = 0;
    while (i < 10) {
        if (i == 4) {
            /* * DOGRU MANTIK:
             * Pas gecip basa donmeden once, sayacin takili kalmamasi icin
             * if blogunun icinde sayaci manuel olarak 1 artirmamiz gerekir.
             */
            i++; 
            continue;
        }
        
        printf("%d\n", i);
        i++;
    }

    return 0;
}