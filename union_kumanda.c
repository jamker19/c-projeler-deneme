#include <stdio.h>

// Kolay Kumanda Yapısı
union Kumanda {
    int tv_kanali;      // TV modundaysan kanal numarası tutar
    int klima_derecesi; // Klima modundaysan sıcaklık tutar
};

int main() {
    union Kumanda kumanda;

    // 1. ADIM: Kumandayı TV moduna aldık ve kanalı değiştirdik
    kumanda.tv_kanali = 5; 
    
    printf("Televizyon acik. Su anki kanal: %d\n", kumanda.tv_kanali);


    // 2. ADIM: Şimdi kumandayı Klima moduna alıyoruz
    // Dereceyi ayarladığımız an eski TV kanalı hafızadan silinir/ezilir.
    kumanda.klima_derecesi = 24; 

    printf("Klima acik. Su anki sicaklik: %d derece\n", kumanda.klima_derecesi);

    return 0;
}