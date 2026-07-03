/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde recursion yani ozyineleme ornegi
 * faktoryel hesaplama uygulamasi
 */
#include <stdio.h>

/* Fonksiyon beyani */
int FaktoryelHesapla(int n);

int main() {
    
    int deger = 7;
    
    // FaktoryelHesapla fonksiyonu cagiriliyor ve donen sonuc yazdiriliyor
    printf("%d! = %d \n", deger, FaktoryelHesapla(deger));
    
    return 0;
}

/* Fonksiyon Tanimlamasi (Ozyineli - Recursive) */
int FaktoryelHesapla(int n){
    int f;
    
    // Temel Durum (Base Case): 
    // n degeri 1'e (veya matematiksel olarak 0'a) ulastiginda sonuc 1 olur.
    // Fonksiyonun sonsuz bir donguye girmesini engeller.
    if(n <= 1) {
        f = 1;
    }
    // Ozyineleme Adimi (Recursive Step):
    // n sayisi, kendisinin bir eksiginin faktoryeli ile carpilir.
    else {
        f = n * FaktoryelHesapla(n - 1);
    }
    
    return f;
}