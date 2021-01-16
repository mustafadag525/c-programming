#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

int kontrol(char c)
{
    int kucukUnlu_harf, buyukUnlu_harf = 0;

    kucukUnlu_harf = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    buyukUnlu_harf = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    return (kucukUnlu_harf != buyukUnlu_harf);

}

int main()
{

    char *str, c;
    int i = 0, j = 1;
     int unlu_idx = 0;
     int unlu_bellek = 1;
     int unsuz_idx = 0;
     int unsuz_bellek = 1;

    char* unlu_harf;
    char* unsuz_harf;
    str = (char*)malloc(sizeof(char));
    unlu_harf = (char*)malloc(sizeof(char));
    unsuz_harf = (char*)malloc(sizeof(char));

    printf("Kelimeyi giriniz: ");

    while (c != '\n') {
        c = getc(stdin);

        str = (char*)realloc(str, j * sizeof(char));

        str[i] = c;

        i++;
        j++;
    }

    str[i] = '\0';

    for (int a = 0; a < i + 1; ++a)
    {
        if (isalpha(str[a]))
        {
            if (kontrol(str[a]))
            {

                 unlu_harf = (char*)realloc(unlu_harf, unlu_bellek * sizeof(char));
                    unlu_harf[unlu_idx] = str[a];
            unlu_idx++;
                unlu_bellek++;
            }

            else
            {
                unsuz_harf = (char*)realloc(unsuz_harf, unsuz_bellek * sizeof(char));
                 unsuz_harf[unsuz_idx] = str[a];
                unsuz_idx++;
            unsuz_bellek++;
            }
        }
    }


     unsuz_harf[unsuz_idx] = '\0';
    unlu_harf[unlu_idx] = '\0';



printf("\n Girilen kelime: %s", str);
       printf("\nUnlu harfler: %s", unlu_harf);
     printf("\nunsuz harflaer: %s", unsuz_harf);



    free(str);
    free(unlu_harf);
    free(unsuz_harf);

    getch();
}

