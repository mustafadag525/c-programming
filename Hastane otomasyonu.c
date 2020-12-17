#include <stdio.h>

int M = 5;
int N = 5;

int ucretHesapla(int guvence, int kardes, int sekli, int derecesi);

void Hasta_Indis_Bul(int Hasta_Veri[5][5]) {
    printf("Hasta indis giriniz\n");
    int hastaIndis;
    scanf("%d", &hastaIndis);
    int i, j;
    for (i = 0; i < M; i++) {
        if (Hasta_Veri[i][0] == hastaIndis) {
            int hastaID = Hasta_Veri[i][0];
            int SaglikGuvence = Hasta_Veri[i][1];
            int Kardes = Hasta_Veri[i][2];
            int TedaviSekli = Hasta_Veri[i][3];
            int EngelDerecesi = Hasta_Veri[i][4];

            int ucret = ucretHesapla(SaglikGuvence, Kardes, TedaviSekli, EngelDerecesi);
            printf("Hasta ID=%d, SaglikGuvence=%d, Kardes=%d, TedaviSekli=%d, EngelDerecesi=%d, Ucret = %d", hastaID,
                   SaglikGuvence, Kardes, TedaviSekli, EngelDerecesi, ucret);
            return;
        }
    }
    printf("veri yok");
}

void Engelli_hasta_Sayisi(int Hasta_Veri[5][5]) {
    int yok = 0, az = 0, orta = 0, yuksek = 0;
    int i, j;
    for (i = 0; i < M; i++) {
        if (Hasta_Veri[i][0] > 99) {
            int EngelDerecesi = Hasta_Veri[i][4];
            if (EngelDerecesi == 0) {
                yok++;
            } else if (EngelDerecesi == 1) {
                az++;
            } else if (EngelDerecesi == 2) {
                orta++;
            } else if (EngelDerecesi == 3) {
                yuksek++;
            }
        }
    }
    printf("engeli bulunmayan:%d adet, Az=%d adet, Orta=%d adet, Yuksek=%d adet\n", yok, az, orta, yuksek);
}

int ucretHesapla(int guvence, int kardes, int sekli, int derecesi) {
    int muayneUcreti = 0;
    if (sekli == 0) {
        muayneUcreti += 50;
    } else {
        muayneUcreti += 150;
    }

    if (guvence == 2 || guvence == 4 || derecesi == 3) {
        return 0;
    }

    if (guvence == 1) {
        muayneUcreti = (muayneUcreti * 20 / 100) + muayneUcreti;
    }

    if (guvence == 3) {
        muayneUcreti = muayneUcreti - (muayneUcreti * 10 / 100)  ;
    }

    if (guvence == 0) {
        return muayneUcreti * 2;
    }

    if (kardes > 2) {
        muayneUcreti -= 10;
    }

    return muayneUcreti;
}

int main() {
    int Hasta_Veri[5][5] = {
            {101, 0, 4, 1, 3},
            {112, 2, 1, 0, 2},
            {107, 4, 3, 0, 0},
            {257, 1, 0, 0, 2},
            {158, 3, 4, 1, 0}
    };
    Engelli_hasta_Sayisi(Hasta_Veri);
    Hasta_Indis_Bul(Hasta_Veri);
    return 0;
}