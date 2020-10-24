#include <stdio.h>
#include <stdlib.h>




void fibonacci(int a)
{

    int s1=0,s2=1,s3,i;
    printf("uretilecek fibonacci");
    for(i=0;i<a;i++)
    {
        if(i<=1)
        {
            s3=i;
        }
        else
        {
            s3=s1+s2;
            s1=s2;
            s2=s3;
        }
        printf("%d",s3);
    }



}






int main()
{
    int sayi;
    printf("olusacak fibonacci sayisi:");scanf("%d",&sayi);
    fibonacci(sayi);
}
