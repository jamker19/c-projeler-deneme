#include <stdio.h>

// Pi sayisini kendimiz acikca tanimliyoruz, boylece tanimsiz deger kalmiyor
#define PI_SAYISI 3.14159265358979323846

// Fonksiyon beyanlari (deklarasyonlari)
float CemberCapiHesapla(float yaricap);
float CemberCevresiHesapla(float yaricap);
float DaireAlaniHesapla(float yaricap);

int main()
{
    float yaricap, cap, cevre, alan;

    /*
     * Kullanicidan yaricap bilgisini al
     */
    printf("Cemberin/Dairenin yaricapini giriniz: ");
    scanf("%f", &yaricap);

    // Fonksiyonlari cagirarak hesaplamalari yap
    cap = CemberCapiHesapla(yaricap);
    cevre = CemberCevresiHesapla(yaricap);
    alan = DaireAlaniHesapla(yaricap);

    // Sonuclari ekrana yazdir
    printf("Cemberin Capi: %.2f\n", cap);
    printf("Cemberin Cevresi: %.2f\n", cevre);
    printf("Dairenin Alani: %.2f\n", alan);

    return 0;
}

// Fonksiyon tanimlamalari (implementasyonlari)
float CemberCapiHesapla(float yaricap) {
    return 2 * yaricap;
}

float CemberCevresiHesapla(float yaricap) {
    return 2 * PI_SAYISI * yaricap;
}

float DaireAlaniHesapla(float yaricap) {
    return PI_SAYISI * yaricap * yaricap;
}