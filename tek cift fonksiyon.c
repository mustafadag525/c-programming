#include <stdio.h>
#include <stdlib.h>


int tekcift(int n)
{
    return n%2;
}

int main()
{
    int sayi;
    printf("sayi gir:");scanf("%d",&sayi);
    int sonuc=tekcift(sayi);
    if(sonuc==1)
    {
        printf("tek");
    }
    else
    {
        printf("cıft");
    }

}
