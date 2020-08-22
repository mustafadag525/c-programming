#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void sirala(int dizi[],int adet)
{
    int i,j,gecici;
    for(i=0;i<adet-1;i++)
    {
        for(j=0;j<adet-1-i;j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                gecici=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecici;
            }
        }
    }


}










int main()
{
    int n;
    int i;
    printf("elemam sayisi:");scanf("%d",&n);
    int dizi[100];

    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        dizi[i]=rand()%100;

        printf("%d\n",dizi[i]);
    }
    printf("dizinin sirali hali\n");
    sirala(dizi,n);


    for(i=0;i<n;i++)
    {
        printf("%4d",dizi[i]);


            }
}
