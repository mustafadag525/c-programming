#include <stdio.h>
#include <stdlib.h>

int main()
{
int dizi[10];
int tek=0,cift=0;
for(int i=0;i<=10;i++)
{
    if(i%2==0)
    {
        cift++;
    }
    else
    {
        tek++;
    }
}
printf("%d  adet tek",tek);
printf("%d adet cift",cift);
    return 0;
}
