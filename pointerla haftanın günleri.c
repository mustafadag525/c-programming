#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *gun[7]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
    int i;

    do
    {
        printf("Lutfen 1 ve 7 arasinda bir deger giriniz: \n");
    scanf("%d",&i);
    }while(i<=0 || i>7);
    printf("%d numarali haftanin gunu %s",i,gun[i-1]);

    return 0;
}
