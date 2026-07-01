#include <stdio.h>
#include <stdbool.h> // true (dogru) ve false (yanlis) kelimelerini kullanabilmek icin sarttir!

int main() {
    // 1. ADIM: Boolean degisken tanimlama
    // C dili arka planda true gordugu yere 1, false gordugu yere 0 yazar.
    bool ProgramcilikGuzelMi = true;
    bool TembellikIyiMi = false;

    // Ekrana basarken %d (tamsayi) kullaniriz cunku mantiksal sonuclar sayisal olarak tutulur.
    printf("%d\n", ProgramcilikGuzelMi); // Ekrana 1 basar (true anlaminda)
    printf("%d\n", TembellikIyiMi);       // Ekrana 0 basar (false anlaminda)
    printf("\n...\n\n");

    // 2. ADIM: Dogrudan sayisal karsilastirmalar
    // Islemin sonucu dogruysa printf ekrana 1 basar.
    printf("%d\n", 10 > 9); // 10, 9'dan buyuk oldugu icin DOGRUdur -> 1 basar
    
    // 3. ADIM: Degiskenler uzerinden karsilastirma
    int x = 10;
    int y = 9;
    printf("%d\n", x > y); // x (10), y (9)'den buyuk oldugu icin DOGRUdur -> 1 basar
    printf("\n...\n\n");

    // 4. ADIM: Esitlik (==) ve Esit Degildir (!=) Kontrolleri
    printf("%d\n", 10 == 10); // 10, 10'a ESIT MI? Evet, DOGRU -> 1 basar
    printf("%d\n", 10 == 15); // 10, 15'e ESIT MI? Hayir, YANLIS -> 0 basar
    printf("%d\n", 5 != 55);  // 5, 55'e ESIT DEGIL MI? Evet, esit degil (DOGRU) -> 1 basar

    return 0;
}