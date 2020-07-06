#include <stdio.h>
#include <stdlib.h>



int main()
{
int a;
printf("sayi gir:");
scanf("%d",&a);
if(a%3==0 && a%5==0)
{
    if(a%2==0)
    {
        printf("sayı 15'e bolunur ve cıft sayıdır",(float)a);

    }

}
if (a%3==0 && a%5==0)
{

    if(a%2!=0)
    {
        printf("sayi 15'e bolunur ama cıft degıldır",(float)a);
    }


}
else
    {
       printf("sayı bolunmez",(float)a);
    }

    return 0;
}



