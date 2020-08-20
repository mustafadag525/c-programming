#include <stdio.h>
#include <stdlib.h>
#include <time.h>





int enbuyuk(int a[],int elemansayisi)

{
    int enb;
    int i;
    enb=a[0];
    for(i=1; i<elemansayisi; i++)
    {
        if(a[i]>enb)
        {
            enb=a[i];
        }
    }
    return enb;



}

int enkucuk(int a[],int elemansayisi)
{
    int enk;
    enk=a[0];
    for(int i=1; i<elemansayisi; i++)
    {
        if(a[i]<enk)
        {
            enk=a[i];
        }
    }
    return enk;
}





int main()
{
    int n;
    int i;


    printf("kac adet sayi uretılecek\n");
    scanf("%d",&n);
    int dizi[n];


    srand(time(NULL));
    printf("dizi elemanlari\n");
    for( i=0; i<n; i++)
    {
        dizi[i]=rand()%100;
        printf("%d\n",dizi[i]);
    }
    printf("max:%d\n",enbuyuk(dizi,n));


    printf("mn:%d",enkucuk(dizi,n));
}
