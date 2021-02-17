#include <stdio.h>
#include <stdlib.h>

int main()
{
    int can[100],canan[100];
    int *sayi1,*sayi2;
    int n,m;
    int i;

    printf("Ilk dizimizin eleman sayisi (max 50) : \n");
    scanf("%d",&n);
    for(sayi1=can;sayi1<can+n;sayi1++)
    {
        printf("Eleman %d : ",sayi1-can);
        scanf("%d",sayi1);
    }
    printf("Ikinci dizimin eleman sayisi : \n");
    scanf("%d",&m);
    for(sayi2=canan;sayi2<canan+m;sayi2++)
    {
        printf("Eleman %d :",sayi2-canan);
        scanf("%d",sayi2);
    }

    printf("Ilk dizimiz : \n");

    for(i=0;i<n;i++)
    {

        printf("%4d",*(can+i));
    }

    printf("\nIkinci tablomuz : \n");
    for(i=0;i<m;i++)
    {
        printf("%4d",*(canan+i));
    }

    for(sayi1=can+n,sayi2=canan;sayi2<canan+m;sayi1++,sayi2++)
    {
        *sayi1=*sayi2;
    }
    printf("\n");

    printf("Birlestirmeden sonra : \n");
    for(i=0;i<n+m;i++)
    {
        printf("%4d",*(can+i));
    }


    return 0;
}
