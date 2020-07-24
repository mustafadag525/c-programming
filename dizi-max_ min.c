#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10];
    int i;
    int max,min;
    for(i=0;i<10;i++)
    {    printf("sayý gir:");

        scanf("%d",&dizi[i]);
    }
    max=min=dizi[0];
    for(i=1;i<10;i++)
    {printf("%5d\n",dizi[i]);
        if(dizi[i]>max)
        {
            max=dizi[i];
        }
        else if(dizi[i]<min)
        {
            min=dizi[i];
        }
    }
    printf("MAX: %d\n",max);
    printf("MIN: %d",min);



    return 0;
}

