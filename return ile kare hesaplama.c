#include <stdio.h>
#include <stdlib.h>


int topla(int a,int b)
{
    return a+b;
}
int carp(int x,int y)
{
    return x*y;
}
int kareal(int sayi1,int sayi2)
{
    int sonuc=topla(sayi1,sayi2);
    return carp(sonuc,sonuc);
}







int main()
{
    int a,b;
    printf("sayý gir:");
    scanf("%d%d",&a,&b);
    printf("topla:%d\n",topla(a,b));
    printf("carp:%d\n",carp(a,b));
    printf("kare:%d",kareal(a,b));

}