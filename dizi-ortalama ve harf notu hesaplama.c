#include <stdio.h>
#include <stdlib.h>

int main()
{
int ogr_vize[10],ogr_final[10];
float ortalama[10];
int aanotu=0,bbnotu=0,ccnotu=0,ddnotu=0,ffnotu=0;
for(int i=0;i<10;i++)
{
    printf("%d.ogrencinin vize notu:",i+1);scanf("%d",&ogr_vize[i]);
        printf("%d.ogrencinin final notu:",i+1);scanf("%d",&ogr_final[i]);
        ortalama[i]=ogr_final[i]*0.6 + ogr_vize[i]*0.4;
        printf("ortalama:%.2f\n",ortalama[i]);
        if(ortalama[i]>=90 && ortalama[i]<=100)
        {
            printf("or:%.2f\n",ortalama[i]);
            aanotu++;
        }
        else if(ortalama[i]>=80 && ortalama[i]<90)
        {
            bbnotu++;
        }
         else if(ortalama[i]>=70 && ortalama[i]<80)
        {
            ccnotu++;
        }
         else if(ortalama[i]>=60 && ortalama[i]<70)
        {
            ddnotu++;
        }
        else
        {
            ffnotu++;
        }


}
printf("---------------\n");
printf("%d adet AA\n",aanotu);
printf("%d adet BB\n",bbnotu);
printf("%d adet CC\n",ccnotu);
printf("%d adet DD\n",ddnotu);
printf("%d adet FF\n",ffnotu);
printf("----------------");



    return 0;
}



