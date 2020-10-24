#include <stdio.h>
#include <stdlib.h>


int main()
{

 int i,j,ssay,osay,toplam=0,aa=0,ba=0,bb=0,cb=0,cc=0,dc=0,dd=0,ff=0;
 printf("Lutfen sinif sayisini gir : "); scanf("%d",&ssay);
 printf("Lutfen her sinifdaki ogrenci sayisini gir : "); scanf("%d",&osay);
 int ogrviz[ssay][osay],ogrfil[ssay][osay],ortalama[ssay][osay];
 int topogrsay=osay*ssay;
 for(i=0;i<ssay;i++)
 {
  for(j=0;j<osay;j++)
  {
   printf("Lutfen %d. Siniftaki %d.ogrencinin Vize notunu gir ",i+1,j+1); scanf("%d",&ogrviz[i][j]);
    printf("Lutfen %d. Siniftaki %d.ogrencinin Final notunu gir ",i+1,j+1); scanf("%d",&ogrfil[i][j]);
   ortalama[i][j]=ogrviz[i][j]*0.4+ogrfil[i][j]*0.6;
   if(ortalama[i][j]<=100 && ortalama[i][j]>90)
   aa++;
   else if(ortalama[i][j]>80 && ortalama[i][j]<=89)
   ba++;
   else if(ortalama[i][j]>70 && ortalama[i][j]<=79)
   bb++;
   else if(ortalama[i][j]>60 && ortalama[i][j]<=69)
   cb++;
   else if(ortalama[i][j]>50 && ortalama[i][j]<=59)
   cc++;
   else if(ortalama[i][j]>40 && ortalama[i][j]<=49)
   dc++;
   else if(ortalama[i][j]>30 && ortalama[i][j]<=39)
   dd++;
   else if(ortalama[i][j]>0 && ortalama[i][j]<=29)
   ff++;
     toplam=toplam+ortalama[i][j];

  }
 }
 printf("----------------------------\n");
 printf("Toplamda AA alan sayisi : %d \n",aa);
 printf("Toplamda AB alan sayisi : %d \n",ba);
 printf("Toplamda BB alan sayisi : %d \n",bb);
 printf("Toplamda BC alan sayisi : %d \n",cb);
 printf("Toplamda CC alan sayisi : %d \n",cc);
 printf("Toplamda DC alan sayisi : %d \n",dc);
 printf("Toplamda DD alan sayisi : %d \n",dd);
 printf("Toplamda FF alan sayisi : %d \n",ff);
 printf("----------------------------\n");
 printf("Tum siniflarin toplam ortalamasi : %d\n",toplam/topogrsay);
 printf("----------------------------\n");




    return 0;
}
