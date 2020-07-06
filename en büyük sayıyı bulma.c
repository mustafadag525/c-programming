#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  a,b,c;
    int max,min;
    printf("sayý gir:");
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    printf("max:%d",max);
    return 0;
}
