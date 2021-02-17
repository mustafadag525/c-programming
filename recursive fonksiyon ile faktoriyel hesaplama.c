#include <stdio.h>
#include <stdlib.h>


int fakt(int sayi)
{
    int sonuc;
    if(sayi!=0)
    {
        sonuc=sayi*fakt(sayi-1);


    }
    else
    {
        sonuc=1;
    }
    return sonuc;
}





int main()
{
    /*
    Klavyeden girilen bir N pozitif tamsayısına kadar olan sayıların faktöriyelinin hesaplanmasını sağlayan
    C programını recursive fonksiyon yardımıyla yazınız
    */
    int n;
    printf("Lutfen bir deger giriniz");
    scanf("%d",&n);
    printf("faktoriyel=%d",fakt(n));

    return 0;
}
