#include<stdio.h>       
#include<stdlib.h>


int ogrenci_kayit=1;//ogrenci_kayit=1 olduðunda program  kullanýcýdan ogrenci bilgilerini ister ogrenci_kayit=0 olduðunda ise ogrenci kayit islemi bitmistir;
int ogrenci_sayisi;//ogrenci sayisi




struct dersler{
	char ders_adi[20];
	int vize;
	int final;
	int sinav_gecme_durumu;

};

struct ogrenciler{
	char ad[20];
	char soyad[20];
	char numara[20];
	int ders_sayisi;
	struct dersler ogrenci_dersler[20];


}ogrenci[20];

void ogrenci_girisi(){
	printf("Kaydedilecek ogrenci sayisi:");
	scanf("%d",&ogrenci_sayisi);
	system("cls");

	//printf
	for(int i=1;i<=ogrenci_sayisi;i++){
		printf("%d.Ogrencinin adi soyadi numarasi ders sayisi\n",i);
		scanf("%s %s %s %d",&ogrenci[i].ad,&ogrenci[i].soyad,&ogrenci[i].numara,&ogrenci[i].ders_sayisi);


		for(int a=1;a<=ogrenci[i].ders_sayisi;a++){
			printf("%d.Dersin adi Vize Final\n",a);
			scanf("%s %d %d",&ogrenci[i].ogrenci_dersler[a].ders_adi,&ogrenci[i].ogrenci_dersler[a].vize,&ogrenci[i].ogrenci_dersler[a].final);
			int v=ogrenci[i].ogrenci_dersler[a].vize,f=ogrenci[i].ogrenci_dersler[a].final;
			float ders_gecme=(v*40+f*60)/100.00;//dersden geçmek için ortalama 60 dý

			if(ders_gecme>=60){//ders ortalamasý 60 ve ya daha büyük ise sýnav_gecme_durumu  1 olucak yani dersden geçmiþ sayýlacak
				ogrenci[i].ogrenci_dersler[a].sinav_gecme_durumu=1;
				printf("\ngecti%d\n",ogrenci[i].ogrenci_dersler[a].sinav_gecme_durumu);
			}
			else{
				ogrenci[i].ogrenci_dersler[a].sinav_gecme_durumu=0;//sýnavdan geçememiþ ortalamasý 60 altýnda
				printf("\nnope%d\n",ogrenci[i].ogrenci_dersler[a].sinav_gecme_durumu);

			}

		}
	}

	printf("gecmek icin bir tusa basin");
	getchar();
	system("cls");
}

 void ogrenci_ara(){
 	printf("\nogrenci sayisi=%d\n",ogrenci_sayisi);
 	char ogrenci_bul_ad[20];//scanf ile aradýðýmýz ogrencinin adýný kaydediyoruz
 	//char ad_gecici[20];
 	char ogrenci_bul_soyad[20];//scanf le aradýðýmýz ogrencinin soyadýný kaydediyoruz
 	//char soyad_gecici[20];
 	int bulunma=0;//bu ögrenci ogrenci_Ara fonksiyonunda var mý yok mu
		printf("Ogrencinin adi soyadi:\n");
		scanf("%s %s",&ogrenci_bul_ad,&ogrenci_bul_soyad);

	for(int i=0;i<=ogrenci_sayisi;i++){
		printf("for=%d",i);
		printf("%s %s",ogrenci[i].ad,ogrenci[i].soyad);
		if(ogrenci[i].ad == ogrenci_bul_ad && ogrenci[i].soyad == ogrenci_bul_soyad)
		{
			printf("Ogrencinin Adi:%s\nSoyadi:%s\nNumarasi:%s\nAldigi Ders Sayisi:%d\n\n",ogrenci[i].ad,ogrenci[i].soyad,ogrenci[i].numara,ogrenci[i].ders_sayisi);
			for(int a=1;a<=ogrenci[i].ders_sayisi;a++){
			printf("Ders:%s\nVize:%d\nFinal:%d\n",ogrenci[i].ogrenci_dersler[a].ders_adi,ogrenci[i].ogrenci_dersler[a].vize,ogrenci[i].ogrenci_dersler[a].final);
		}

			bulunma=1;
		}
		else if(bulunma == 0 && i == ogrenci_sayisi){
			printf("aranan ogrenci bulunamadi\n");
		}

	printf("gecmek icin bir tusa basin");
	getchar();
	system("cls");

}




	printf("Devam etmek icin bir tusa basin");
	getchar();
	system("cls");
}


 /*void Durum goster(){





 }


  void listele(){





 }*/








 int main(){
if(ogrenci_kayit==1){
 ogrenci_girisi();
ogrenci_kayit =0;
}

printf("1.Ogrenci ara\n2.Durum goster\n3.Listele\n4.Cikis");
int durum;
scanf("%d",&durum);
switch(durum){
	case 1:
		ogrenci_ara();
	break;
	////////////
	case 2:

	break;
 	////////////
	case 3:

	break;
	////////////
	case 4:

	break;
	////////////
	default:
		printf("gecersiz ifade");
	break;
}


}
