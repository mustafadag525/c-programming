#include <stdio.h>
#include <stdlib.h>

typedef struct karekterAdet {
    char harf;
    int adet;
} ka;


int main(void) {
    char *words = "mustafaaabb";
    int  i, j, c;

    ka *harfler;
    harfler = (ka *) malloc(sizeof(ka) * 26);

    for (i = 0; i < 26; i++) {
        harfler[i].adet = 0;
    }

    for (j = 0; (c = words[j]) != '\0'; j++) {

        if (c >= 'a' && c <= 'z') {
            harfler[c - 'a'].adet++;
        } else if (c >= 'A' && c <= 'Z')
            harfler[c - 'A'].adet++;
    }

    for (i = 0; i < 26; i++) {
        if (harfler[i ].adet> 0) {
            printf("karekter %c frekans %d\n", i + 'a',  harfler[i ].adet);
        }
    }
    return 0;
}
