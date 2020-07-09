#include <stdio.h>
#include <stdlib.h>

int main()
{

int dizi[5];
printf("5 adet sayi gir:\n");
for(int i=0;i<=4;i++)
{
    printf("%d. sayiyi gir:",i+1);
    scanf("%d",&dizi[i]);
}
for( int i=0;i<=4;i++)
{
    printf("dizinin %d. elemanı:%d\n",i,dizi[i]);
}
    return 0;
}
