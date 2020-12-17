/*
    int matris[3][4]={{1,9,0,5},{38,2,11,0},{55,77,44,47}}; matrisini sýrala ve ekrana yazdýran c kodu.

*/

#include <stdio.h>
#include <stdlib.h>


void matris_sirala(int matris[][4],int numSatir,int numSutun)
{
    int i,j,k;
    int satir=0,sutun=0,enkucuk,enbuyuk;
    int dizi[numSatir*numSutun];
    enbuyuk=matris[0][0];
    for(k=0;k<numSatir*numSutun;k++)
    {
        enkucuk=matris[satir][sutun];
        for(i=0;i<numSatir;i++)
        {
            for(j=0;j<numSutun;j++)
            {
                if(matris[i][j]<enkucuk)
                {
                    enkucuk=matris[i][j];
                    satir=i,sutun=j;
                }
                if(k==0 && matris[i][j]>enbuyuk)
                {
                    enbuyuk=matris[i][j];
                }
            }
        }
        matris[satir][sutun]=enbuyuk;
        dizi[k]=enkucuk;
    }
    for(k=0;k<numSutun*numSatir;k++)
    {
        printf("%d  ",dizi[k]);
    }
    printf("\n");
    for(i=0;i<numSatir;i++)
    {
        for(j=0;j<numSutun;j++)
        {
            matris[i][j]=dizi[i*(numSatir+1)+j];
            printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }

}


int main()
{
    int matris[3][4]={{1,9,0,5},{38,2,11,0},{55,77,44,47}};
    int numSatir=sizeof(matris)/sizeof(matris[0]);
    int numSutun=sizeof(matris[0])/sizeof(matris[0][0]);
    matris_sirala(matris,numSatir,numSutun);
    return 0;

}
