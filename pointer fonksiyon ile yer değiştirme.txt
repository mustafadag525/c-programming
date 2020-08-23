#include <stdio.h>
#include <stdlib.h>



void calistir(int *s1,int *s2)
{
    int gecici;
    gecici=*s1;
    *s1=*s2;
    *s2=gecici;
}



int main()
{
    int n=10,m=20;
    printf("cagrılmadan once:%d %d\n",n,m);
    calistir(&n,&m);
    printf("sonra:%d %d",n,m);
}
