#include <stdio.h>
#include <stdlib.h>


int main()
{
int matris[2][2];
int i,j;
for( i=0;i<2;i++)
{
    for( j=0;j<2;j++)
    {
        printf("sayı gir:");
        scanf("%d",&matris[i][j]);
    }
}
printf("\n");
for( i=0;i<2;i++)
{
    for( j=0;j<2;j++)
    {
        printf("%d ",matris[i][j]);
    }
    printf("\n");
}


    return 0;
}
