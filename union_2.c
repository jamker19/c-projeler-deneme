#include <stdio.h>

// Bir motorun sadece ANLIK (o anki) kontrol modunu tutan bir union
union MotorKontrol {
    int manuel_hiz;      // Manuel moddaysa hiz degeri (RPM)
    int otonom_mod;      // Otonom moddaysa (1: Aktif, 0: Pasif)
    int ariza_kodu;      // Ariza moddaysa hata numarasi
};

int main() {
    union MotorKontrol motor;

    // --- 1. ADIM: Motoru Manuel Modda Calistiriyoruz ---
    // Sadece hiz degerini degistiriyoruz
    motor.manuel_hiz = 2500; 
    
    // Su an sadece manuel_hiz degeriyle isim var, onu kullaniyorum:
    printf("Motor Hizi: %d RPM\n", motor.manuel_hiz);


    // --- 2. ADIM: Mod Degistiriyoruz (Deger Degistirme Ani) ---
    // Artik otonom moda gectik. Gidip otonom_mod degerini degistiriyoruz.
    // Bu atama yapildigi an eski 'manuel_hiz' degeri silinir/ezilir. 
    // Ama bu bir hata degil, bizim bilerek yaptigimiz bir mod degisikligidir!
    motor.otonom_mod = 1; 

    // Artik yeni degeri guvenle kullanabiliriz:
    printf("Otonom Mod Aktif mi?: %d\n", motor.otonom_mod);


    // --- 3. ADIM: Acil Durum (Ariza Moduna Gecis) ---
    // Sistem hata verdi, ariza kodunu guncelliyoruz. Eski otonom verisi ezildi.
    motor.ariza_kodu = 404; 

    printf("Sistem Arizasi! Kod: %d\n", motor.ariza_kodu);

    return 0;
}