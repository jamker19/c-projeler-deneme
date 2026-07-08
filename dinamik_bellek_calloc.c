#include <stdio.h>
#include <stdlib.h> // calloc, free ve exit fonksiyonları için gerekli kütüphane

int main() {
    // n: eleman sayısı, i: döngü sayacı, *isaretci: bellek adresini tutacak pointer, toplam: sayıların toplamı
    int n, i, *isaretci, toplam = 0;

    printf("Toplanacak eleman sayisini giriniz: ");
    scanf("%d", &n); // Kullanıcıdan kaç adet sayı girileceği alınır

    // Heap bölgesinde n adet int boyutunda yer açılır ve tüm elemanlar otomatik 0 yapılır
    isaretci = (int*) calloc(n, sizeof(int));

    // Bellekte yer ayrılamadıysa isaretci NULL döner, program hata verip kapanır
    if(isaretci == NULL) {
        printf("Hata! Bellek ayirma islemi basarisiz oldu.");
        exit(0); // Programı sonlandırır
    }

    printf("Toplanacak elemanlari giriniz: ");
    for(i = 0; i < n; ++i) {
        // pointer aritmetigi ile sıradaki elemanın bellek adresine veri yazılır
        scanf("%d", isaretci + i); 
        
        // *(isaretci + i) ile o adresteki değer okunur ve toplama eklenir
        toplam += *(isaretci + i); 
    }

    printf("Toplam = %d\n", toplam);

    // İşimiz bittiğinde ayrılan bellek alanını işletim sistemine geri iade ediyoruz (Bellek sızıntısını önler)
    free(isaretci);

    return 0;
}