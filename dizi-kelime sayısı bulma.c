#include <stdio.h>
#include <stdlib.h>


int main()
{
char cumle[100];
int i,toplam=0;
printf("kelime giriniz:");
gets(cumle);
for(i=0;i<cumle[i];i++)
{
    if(cumle[i]==32)
    {
        toplam++;
    }
}


printf("kelime sayýsý:%d",toplam+1);

return 0;


}