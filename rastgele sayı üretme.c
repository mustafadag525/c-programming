include <stdio.h>
#include <stdlib.h>
#include <time.h>


void zar_at()
{

    srand(time(NULL));
    int deger=1+rand()%10;
    printf("%d",deger);
}


int main()
{
zar_at();

}
