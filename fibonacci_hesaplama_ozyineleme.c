/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde recursion yani ozyineleme ornegi
 * Fibonacci sayi dizisinin elemanlarini hesaplama uygulamasi
 */
#include <stdio.h>

int NinciFibonacciSayisiniHesapla(int n);

int main()
{
    int n1=0, n2=1;
    printf("Fibonacci dizisinden ilk kac elemanin hesaplanmasini istersiniz?: ");
    int adet;
    scanf("%d",&adet);
    int n3,i;

    // 0 ve 1'i yazdir
    printf("%d %d ", n1, n2);

    // 0 ve 1 halihazirda yazildigi icin sonraki sayilari yazdir
    for(i = 2; i < adet; ++i){
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }

    return 0;
}

int NinciFibonacciSayisiniHesapla(int n){
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return NinciFibonacciSayisiniHesapla(n-1)+NinciFibonacciSayisiniHesapla(n-2);
}