/* * BTK Akademi - C Programlama Dili Kursu 
 * C programlama dilinde dinamik bellek yönetimi
 * realloc() fonksiyonu kullanımı
 */

#include <stdio.h>
#include <stdlib.h> // malloc, realloc ve free fonksiyonları için gerekli kütüphane

int main() {
    // Değişkenlerin tanımlanması
    // isaretci: Dinamik belleğin başlangıç adresini tutacak pointer
    // i: Döngü sayacı
    // n1: İlk girilecek eleman sayısı
    // n2: Yeniden boyutlandırma için girilecek yeni eleman sayısı
    int *isaretci, i, n1, n2;

    // 1. KISIM: İlk Bellek Tahsisi (malloc)
    printf("Boyut Giriniz: ");
    scanf("%d", &n1);

    // n1 tane int boyutu kadar bellekte dinamik yer ayrılıyor.
    isaretci = (int*) malloc(n1 * sizeof(int));

    // Bellek başarıyla ayrıldı mı kontrolü (İyi bir programlama pratiğidir)
    if (isaretci == NULL) {
        printf("Bellek tahsis edilemedi!\n");
        return 1;
    }

    // Ayrılan ilk bellek adreslerinin ekrana yazdırılması
    printf("Ayrilan (Tahsis Edilen) Ilk Bellek Adresleri:\n");
    for(i = 0; i < n1; ++i) {
        // NOT: Görseldeki "%pc" hatalıdır. Adres yazdırmak için "%p" kullanılır.
        printf("%p\n", (void*)(isaretci + i));
    }

    // 2. KISIM: Yeniden Bellek Boyutlandırma (realloc)
    printf("\nYeni Boyut Giriniz: ");
    scanf("%d", &n2);

    // yeniden bellek ayırma (tahsis etme) işlemi
    // Mevcut bellek alanı n2 tane int sığacak şekilde genişletilir veya daraltılır.
    isaretci = (int*) realloc(isaretci, n2 * sizeof(int));

    if (isaretci == NULL) {
        printf("Bellek yeniden tahsis edilemedi!\n");
        return 1;
    }

    // Yeniden ayrılan bellek adreslerinin ekrana yazdırılması
    printf("Ayrilan (Tahsis Edilen) Yeni Bellek Adresleri:\n");
    for(i = 0; i < n2; ++i) {
        printf("%p\n", (void*)(isaretci + i));
    }

    // 3. KISIM: Belleğin Serbest Bırakılması
    // Dinamik olarak ayrılan bellek işimiz bittiğinde sisteme geri verilmelidir.
    free(isaretci);

    return 0;
}