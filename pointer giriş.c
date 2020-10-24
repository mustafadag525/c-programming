#include <stdio.h>
#include <stdlib.h>




int main()
{

    int *sayi,*sayi1,*sayi2;
    int n=20,m=50;
    sayi1=&n;
    sayi2=&m;
    printf("%d\n",sayi1); // adres gosterme;

    *sayi1=*sayi2+10;
    printf("%d\n",*sayi1);//deger gosterme;
    printf("%d",sayi1);

}
