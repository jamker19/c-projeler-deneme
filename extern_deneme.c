/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama depolama konumu belirtecleri
 * extern
 */

#include <stdio.h>

int x = 10;
int y = 50;

int main() {
    extern int y; // extern olarak tanimlanmazsa, degeri 0 olur
    printf("global olan x degiskeninin degeri: %d\n", x);
    printf("extern olan y degiskeninin degeri: %d\n", y);
    return 0;
}