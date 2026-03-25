// ===========================================================================
// Zeiger.c // Pointer / Zeiger
// ===========================================================================

#include <stdio.h>           // Systemdateien 

#include "Unterprogramme.h"  // selbst geschr. Dateien

struct Lotto
{
    int kugeln[6];
    short dummy;     // Alignment  /  Ausrichtung 
                     // Vielfache von der Bitanzhal der Variablen (32)
    int gezogeneKugeln;   // 0, 1, 2, ... 6

    short dummy1;
    int gezogeneKugeln1;   // 0, 1, 2, ... 6
};

struct IPAdresse
{
    char kugeln[4];
    int komplett;
};

union IPAdresseBesser
{
    char octet[4];
    int komplett;
};

void main_union()
{
    union IPAdresseBesser localHost = { 0 };

    localHost.octet[0] = 127;
    localHost.octet[1] = 0;
    localHost.octet[2] = 0;
    localHost.octet[3] = 1;

    int n = localHost.komplett;

}


void main_zeiger()
{
    int n = 123;
    int m = 124;

    //char ch = '?';
    //char* cp = &ch;
    //((int*) cp)   ++ ;
    //cp++;

    printf("n: %d\n", n);

    int* ip = NULL;

    ip = &n;

    ip = ip + 3;

    // Schreibe den Wert 125 in die Variable n, ohne den Namen n zu verwenden
 
    * ip = 125;  // indirekter Zugriff 
    printf("n: %d\n", n);

    ip++;  // ???????????????????????????????????????????

    printf("*ip: %x\n", *ip);
    printf("ip: %p\n", ip);

    ip--;

    // Nächste Frage: Gehört "mir" dieser Speicher ... hinter dieser Adresse
    // Nein
    *ip = 456;

    return;
    size_t si = sizeof(int);
    printf("sizeof(int): %llu\n", si);
    printf("sizeof(double): %llu\n", sizeof (double));
    printf("sizeof(struct Lotto): %llu\n", sizeof(struct Lotto));
    printf("sizeof(short): %llu\n", sizeof(short));
    printf("sizeof(int*): %llu\n", sizeof(ip));
}

// ===========================================================================
// End-of-File
// ===========================================================================
