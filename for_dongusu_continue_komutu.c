#include <stdio.h>

int main() {
    int i;

    /* 0'dan 9'a kadar donen standart bir dongu */
    for (i = 0; i < 10; i++)
    {
        /* * PAS GEC (CONTINUE) MANTIGI:
         * Sayac 5'e ulastigi an, alt satirdaki printf'i calistirmaz.
         * Dongu bu adimi es gecer, sayaci (i++) artirarak bir sonraki tura atlar.
         */
        if (i == 5)
        {
            continue;
        }
        
        printf("%d\n", i);
    }

    return 0;
}