#include <stdio.h>

enum Seviyeler {
    DUSUK,
    ORTA,
    YUKSEK
};

int main() {
    enum Seviyeler OdaSicakligi = DUSUK;

    printf("%d", OdaSicakligi);

    return 0;
}