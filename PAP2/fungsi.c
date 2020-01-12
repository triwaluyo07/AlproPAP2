#include "header.h"

int is_kabisat(int year)
{
    x = false;
    if (year%4==0)
    {
        x = true;

    }

    if(x==true)
    {
        printf("Tahun %d merupakan Tahun Kabisat",year);
    }
    else
    {
        printf("Tahun %d bukan Tahun Kabisat",year);
    }
    return(x);
}

int hitung_vokal(char text[])
{
    vokal=0;
    for(x1=0;x1<255;x1++)
    {
        if((text[x1]=='a')||(text[x1]=='i')||(text[x1]=='u')||(text[x1]=='e')||(text[x1]=='o')||
       (text[x1]=='A')||(text[x1]=='I')||(text[x1]=='U')||(text=='E')||(text[x1]=='O'))
        {
        vokal = vokal+1;
        }
    }

    printf("Jumlah vokalnya ialah %d ",vokal);
    return(vokal);
}

int cek_prima(int num)
{
    if(num <= 1)
    {
    printf("Masukkan angka lebih dari 1.");
    }
    else
    {
        if(num == 2)
        {
        printf("%d merupakan bilangan prima.", num);
        }
        else
        {
        for(angka=2; angka<num; angka++)
        {
            if(num %angka == 0)
            {
            stat = false;
            break;
            }
            else
                {
                stat = true;
                }
        }

    if(stat == true)
    {
        printf("%d merupakan bilangan prima.\n", num);
    }
    else
    {
        printf("%d bukan bilangan prima.", num);
    }
        }
    }
    return(stat);
}

void char_frekuensi(char text[])
{
    fflush(stdin);
    printf("Masukkan kalimat : ");
    gets(text);

    for(i=0;i<strlen(text);i++)
    {
        wadah=0;
        for(j=0;j<strlen(text);j++)
        {
            if(tolower(text[i])==tolower(text[j]))
            {
                wadah=wadah+1;
                jumlah[i]=wadah;
                index[j]=i;
            }
        }
    }
    for(i=0;i<strlen(text);i++)
    {
        if(i==index[i])
        {
            printf("%c = %d ",tolower(text[i]),jumlah[i]);
        }
    }
}

void print_diamond(int row)
{
    printf ("Masukkan Batasan Angka : ");
    scanf ("%d", &row);
    printf ("\n");
    for (a = 1; a <= row; a++)
    {
        for (b = row; b >= a; b--)
        {
            printf (" ");
        }
        for (b = 1; b <= a; b++)
        {
            printf ("*");
        }
        for (b = (a-1); b >= 1; b--)
        {
            printf ("*");
        }
        printf ("\n");
    }

    for (a = 1; a <= row-1; a++)
    {
        for (b = 0; b <= a; b++)
        {
            printf (" ");
        }
        for (b = 1; b <= (row-a); b++)
        {
            printf ("*");
        }
        for (b = (row-a-1); b >= 1; b--)
        {
            printf ("*");
        }
        printf ("\n");
    }
}
