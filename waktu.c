#include<stdio.h>
#include<time.h>
void tampilan()
{
    time_t detik;
    struct tm *info;
    char buffer[80];
    char hari[10];
    time (&detik);
    info = localtime(&detik);
    strftime(buffer,80,"%A,%d,%B,%Y - %H:%M:%S", info);
    strftime(hari,10,"%A", info);
    printf("Sekarang adalah hari dan tanggal : | %s |\n", buffer);
    if(strcmp(hari,"Sunday")==0)
    {
        printf("\n Sekarang  hari minggu \n");
    }
    else if(strcmp(hari,"Monday")==0)
    {
        printf("\n Sekarang hari senin \n");
    }
    else if(strcmp(hari,"Tuesday")==0)
    {
        printf("\n Sekarang hari selasa \n");
    }
    else if(strcmp(hari,"Wednesday")==0)
    {
        printf("\n Sekarang hari rabu \n");
    }
    else if(strcmp(hari,"Thursday")==0)
    {
        printf("\n Sekarang hari kamis \n");
    }
    else if(strcmp(hari,"Friday")==0)
    {
         printf("\n Sekarang hari jumat \n");
    }
    else if(strcmp(hari,"Saturday")==0)
    {
        printf("\n Sekarang hari sabtu \n");
    }
}
int main()
{
    time_t awal=0, akhir=0;
    time(&awal);
    while(1)
    {
        time(&akhir);
        if(akhir - awal > 0 )
        {
            tampilan();
            awal = akhir;
        }
    }
    return 0;
}
