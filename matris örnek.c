#include <stdio.h>
#include <stdlib.h>
#define m 2
#define n 3




int main()
{
    srand(time(NULL));

    int A[m][n] , B[n][m] , C[m][m];
    int i,j,k,t;
    int toplam=0;
    for(i=0; i<m ; i++)
    {
        for(j=0; j<n; j++)
        {
            A[i][j] = 1+ rand() %5 ;
        }
    }
    printf("A MATRISI:\n");
    matrisyazdir(A, m, n);

    for(i=0; i<n ; i++)
    {
        for(j=0; j<m; j++)
        {
            B[i][j] = 1+ rand() %5 ;
        }
    }
    printf("\n\n B MATRISI:\n");
    matrisyazdir(B, n, m);

    for(i=0; i<m ; i++)
    {
        for(j=0; j<m; j++)
        {
            for(k=0; k<n; k++)
            {
                toplam+= A[i][k]* B[k][j];  //satirin tum sutunlarini gezmek icin kullanýyoruz.
            }
            C[i][j] = toplam;
            toplam=0;
        }
        printf("\n");
    }
    printf("\n C MATRISI:\n");
    matrisyazdir(C, m, m);

    return 0;
}
void matrisyazdir(int matris[][1], int satir, int sutun)
{
    int i, j;
    for(i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
            printf("%4d ",matris[i][j]);
        }
        printf("\n");
    }
}
