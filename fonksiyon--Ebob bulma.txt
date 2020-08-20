#include <stdio.h>
#include <stdlib.h>


int ebobbulma(int sayi1,int sayi2)
{
    int ebob=1;
    for(int i=1;i<=sayi1 && i<=sayi2;i++)
    {
        if(sayi1%i==0 && sayi2%i==0)
        {
            ebob=i;
        }
    }
    return ebob;
}

int main()
{


int s1,s2;
printf("sayi gir:");scanf("%d%d",&s1,&s2);
printf("ebob:%d",ebobbulma(s1,s2));

}


