#include "header.h"

///Nama : Tri Waluyo
///Kelas : A11.4203
/// Nim : A11.2017.10097

int main()
{
    printf("==============================\n");
    printf("\t  Tugas 1\n");
    printf("==============================\n");

    printf("Masukkan Tahun : ");
    scanf("%d",&year);

    is_kabisat(year);
    puts("\n");

    printf("==============================\n");
    printf("\t  Tugas 2\n");
    printf("==============================\n");

    printf("Masukkan Kalimat : ");
    fflush(stdin);
    gets(text);
    hitung_vokal(text);
    puts("\n");

    printf("==============================\n");
    printf("\t  Tugas 3\n");
    printf("==============================\n");
    fflush(stdin);
    printf("Masukkan angka : ");

    scanf("%d",&num);
    cek_prima(num);
    puts("\n");

    printf("==============================\n");
    printf("\t  Tugas 4\n");
    printf("==============================\n");

    char_frekuensi(text);

    puts("\n");

    printf("==============================\n");
    printf("\t  Tugas 5\n");
    printf("==============================\n");

    print_diamond();
    return 0;
}
