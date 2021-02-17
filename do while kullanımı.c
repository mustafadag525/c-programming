#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   float sonuc;
   int i;
   do{
   printf("N degerini giriniz");
   scanf("%d",&n);
   }while(n<1);

   for(i=1;i<=n;i++)
   {
       sonuc+=(float)1/i;
   }
   printf("Sonucumuz : %f",sonuc);
    return 0;
}
