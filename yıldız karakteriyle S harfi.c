
#include <stdio.h>
#include <stdlib.h>





int main()
{



    printf("-----------------------\n\n\n");
    printf("AD:\n\n\n");


    int i,j,k,a,l,b;

    for(i=0;i<=11;i++)  //S HARFI;
{
    for(j=1;j<=8;j++)
    {
        if(i>=0 && i<2 || i>4 && i<7 || i>=2 && i<=4 && j==1 || i>6 && i<=9 && j==8 ||i>9 && i<=11)
        {
            printf("**");
        }
        else
        {
            printf("  ");
        }
    }
    printf("\n");

}
printf("\n\n\n");

