#include <stdio.h>
#include <stdlib.h>

int main()
{
int ogr_notu[10];
int aanotu=0,bbnotu=0,ccnotu=0,ddnotu=0,ffnotu=0;
for(int i=0;i<10;i++)
{
    printf("%d. ogrencinin notu:",i+1);
    scanf("%d",&ogr_notu[i]);
    if(ogr_notu[i]>=90 && ogr_notu[i]<=100)
    {
        aanotu++; //aanotu=aa+1;
    }
    else if(ogr_notu[i]>=80 && ogr_notu[i]<90)
    {
        bbnotu++;
    }
    else if(ogr_notu[i]>=70 && ogr_notu[i]<80)
    {
        ccnotu++;
    }
    else if(ogr_notu[i]>=60 && ogr_notu[i]<70)
    {
        ddnotu++;
    }
    else
    {
        ffnotu++;
    }

}
printf("%d ADET AA\n",aanotu);
    printf("%d ADET BB\n",bbnotu);
    printf("%d ADET CC\n",ccnotu);
    printf("%d ADET DD\n",ddnotu);
    printf("%d ADET FF\n",ffnotu);
    return 0;
}

