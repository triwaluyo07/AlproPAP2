#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>

int is_kabisat(int year);
int hitung_vokal(char text[]);
int cek_prima(int num);
void char_frekuensi(char text[]);

int year,vokal,num,wadah;
int x1,y1,a,b,angka,n;
int i,j,jum,jumlah[],index[];
char text[255],kal[255];
bool x,stat;

#endif // HEADER_H_INCLUDED
