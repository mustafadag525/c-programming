
int mmukemmel(int n)
{
    int i=1;
    int toplam=0;
    while(i<n)
    {
        if(n%i==0)
        {
            toplam+=i;
        }
        i++;
    }
    if(toplam==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int sayi,sonuc;
    printf("sayi gir:");scanf("%d",&sayi);
    sonuc=mmukemmel(sayi);
    if(sonuc==1)
    {
        printf("mukkemel sayi");
    }
    else
    {
        printf("mukkemel deðil");
    }
}