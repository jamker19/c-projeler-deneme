
/*
 * ACIKLAMA:
 * Bu programda, 'PersonelBilgisi' adinda ozel bir veri yapisi (struct) tanimlanarak
 * farkli veri tipleri tek bir cati altinda toplanmistir. main fonksiyonu icerisinde
 * bu yapi uc farkli yontemle islenmektedir:
 * * 1. YONTEM: 'Personel1' nesnesi olusturulup alanlarina nokta (.) operatoru ve 
 * string kopyalama fonksiyonu (strcpy) ile tek tek deger atanmistir.
 * 2. YONTEM: 'Personel2' nesnesine kume parantezi ({}) kullanilarak tanim esnasinda
 * tek satirda toplu ilk deger verilmiştir.
 * 3. YONTEM: Ayni tipteki iki yapinin birbirine dogrudan esittir (=) operatoru ile
 * kopyalanabilecegi gosterilerek 'Personel2'nin tum hafiza icerigi tek hamlede
 * 'Personel2Kopyasi' nesnesine aktarilmis ve tum sonuclar ekrana yazdirilmistir.
 */













/* BTK Akademi - C Programlama Dili Kursu */
/**
 * BASLIK: Struct Tanimlama, Deger Atama, Alternatif Tanimlama ve Struct Kopyalama
 * ACIKLAMA: Bir struct yapisinin olusturulmasi, nokta (.) operatoru ile tek tek deger atama,
 * kume parantezi {} ile tek satirda toplu atama ve bir struct'i digerine dogrudan kopyalama.
 */

#include <stdio.h>
#include <string.h> // strcpy() fonksiyonunu kullanabilmek icin gerekli

// PersonelBilgisi isimli temel struct yapisinin olusturulmasi
struct PersonelBilgisi {
    int Yas;
    float Maas;
    char Isim[30];
    char Cinsiyet[8];
};

int main() {
    /* -------------------------------------------------------------
     * YONTEM 1: Nokta (.) Operatoru ve strcpy ile Deger Atama
     * ------------------------------------------------------------- */
    struct PersonelBilgisi Personel1;

    // C dilinde dizilere dogrudan string atanamayacagi icin strcpy kullanilir
    strcpy(Personel1.Isim, "Ahmet Ahmetoglu");
    strcpy(Personel1.Cinsiyet, "Erkek");
    Personel1.Yas = 34;
    Personel1.Maas = 8500.0;

    // Personel1 struct'inin degerlerini yazdir
    printf("Personelin Adi: %s\n", Personel1.Isim);
    printf("Personelin Cinsiyeti: %s\n", Personel1.Cinsiyet);
    printf("Personelin Yasi: %d\n", Personel1.Yas);
    printf("Personelin Maasi: %.2f\n", Personel1.Maas);

    printf("\n...................................\n\n");

    /* -------------------------------------------------------------
     * YONTEM 2: Kume Parantezi {} ile Tek Satirda Toplu Ilk Deger Atama
     * ------------------------------------------------------------- */
    // Sira, struct icindeki degisken sirasiyla (Yas, Maas, Isim, Cinsiyet) ayni olmalidir.
    struct PersonelBilgisi Personel2 = {33, 8800.0, "Ayse Ayseoglu", "Kadin"};

    // Personel2 struct'inin degerlerini yazdir
    printf("Personelin Adi: %s\n", Personel2.Isim);
    printf("Personelin Cinsiyeti: %s\n", Personel2.Cinsiyet);
    printf("Personelin Yasi: %d\n", Personel2.Yas);
    printf("Personelin Maasi: %.2f\n", Personel2.Maas);

    printf("\n...................................\n\n");

    /* -------------------------------------------------------------
     * YONTEM 3: Struct'tan Struct'a Dogrudan Kopyalama (= Operatoru)
     * ------------------------------------------------------------- */
    struct PersonelBilgisi Personel2Kopyasi;
    
    // Personel2'nin tum bilgilerini tek seferde yeni bir yapiya kopyala
    // C dili, ayni tipteki struct'larin esittir (=) ile kopyalanmasina izin verir.
    Personel2Kopyasi = Personel2;

    // Personel2Kopyasi struct'inin degerlerini yazdir
    printf("Personelin Adi: %s\n", Personel2Kopyasi.Isim);
    printf("Personelin Cinsiyeti: %s\n", Personel2Kopyasi.Cinsiyet);
    printf("Personelin Yasi: %d\n", Personel2Kopyasi.Yas);
    printf("Personelin Maasi: %.2f\n", Personel2Kopyasi.Maas);

    return 0;
}
