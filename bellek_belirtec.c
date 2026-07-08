#include <stdio.h>

// extern ile baglayacagimiz global degiskeni tanimliyoruz
int global_degisken = 100; 

void DepolamaKonumlariTest(int k)
{
    // 1. auto: Standart yerel degisken (Her cagrida sifirlanir)
    auto int i_auto = 0;
    
    // 2. static: Degerini unutmayan yerel degisken (Hafizada kalir)
    static int i_static = 0;
    
    // 3. register: Isleci yazmacinda tutulmaya calisilan hizli degisken
    register int i_register = 0;
    
    // 4. extern: Fonksiyon disindaki global degiskene erisim saglar
    extern int global_degisken;

    // Degerleri ekrana yazdiralim
    printf("auto: %d | static: %d | register: %d | extern: %d\n", 
            i_auto, i_static, i_register, global_degisken);

    // Hepsini gelen 'k' parametresi kadar artiralim
    i_auto += k;
    i_static += k;
    i_register += k;
    global_degisken += k;
}

int main()
{
    printf("--- 1. Cagri ---\n");
    DepolamaKonumlariTest(3);
    
    printf("\n--- 2. Cagri ---\n");
    DepolamaKonumlariTest(3);
    
    printf("\n--- 3. Cagri ---\n");
    DepolamaKonumlariTest(3);

    return 0;
}