#include <stdio.h>
#include <stdlib.h>

int main()
{

int dizi[10];
int toplam=0;
for(int i=0;i<10;i++)
{
    printf("%d ogrenci notu:",i+1);
    scanf("%d",&dizi[i]);
    toplam+=dizi[i];
}
float ort;
ort=toplam/10;
printf("ort:%f",ort);

    return 0;
}
