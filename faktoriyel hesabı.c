#include <stdio.h>
#include <stdlib.h>

int main()
{

int faktor=1;
int sayi,i;
printf("sayi gir:");
scanf("%d",&sayi);
for(i=1;i<=sayi;i++)
   {
       faktor*=i;


   }
   printf("faktor:%d",faktor);

    return 0;
}
