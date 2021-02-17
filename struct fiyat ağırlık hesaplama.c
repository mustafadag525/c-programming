#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2

typedef struct
{
    char isim[20];
    float agirlik;
    char form[20];
    int sayi;
    float fiyat;
}meyve;

typedef struct
{
    meyve f[N];
}sepet;

void meyveyi_olustur(meyve *can)
{
    printf("Meyvenin adini giriniz: \n");
    scanf("%s",can->isim);
    printf("Meyvenin agirligini giriniz: \n");
    scanf("%f",&can->agirlik);
    printf("Meyvenin formunu giriniz: \n");
    scanf("%s",can->form);
    printf("Meyvenin sayisini giriniz: \n");
    scanf("%d",&can->sayi);
    printf("Meyvenin fiyatini giriniz: \n");
    scanf("%f",&can->fiyat);
}

void sepeti_olustur(sepet *can)
{
    int i;
    for(i=0;i<N;i++)
    {
        meyveyi_olustur(&can->f[i]);
    }
}
void agirligi_hesapla(sepet can,float *total)
{
    int i;
    *total=0;
    for(i=0;i<N;i++)
    {
        *total=*total+(can.f[i].agirlik*can.f[i].sayi);
    }
}
void fiyati_hesapla(sepet can,float *total)
{
    *total=0;
    int i;
    float seklegore = 0;
    for(i=0;i<N;i++)
    {
        seklegore=can.f[i].fiyat;
        if(strcmp(can.f[i].form,"yuvarlak")==0)
        {
            seklegore=seklegore*2;
        }
        if(can.f[i].agirlik>200)
        {
            seklegore=seklegore+3;
        }
        *total=*total+(seklegore*can.f[i].sayi);
    }
}


int main()
{
    float a,b;
    sepet p;
    sepeti_olustur(&p);
    agirligi_hesapla(p,&a);
    fiyati_hesapla(p,&b);
    printf("Toplam agirlik :%f",a);
    printf("\nToplam fiyat:%f",b);
    return 0;
}
