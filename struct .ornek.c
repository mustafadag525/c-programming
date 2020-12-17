#include <stdio.h>
#include <stdlib.h>




typedef struct{


char isim[10];
int x,y;

}nokta;


void ekranayazdir(nokta p[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s ={%d,%d)\n",p[i].isim,p[i].x,p[i].y);
    }
}

int main()
{
    nokta mus[2]={{"mustafa",1,2},{"ali",3,4}};
    ekranayazdir(mus,2);
}
