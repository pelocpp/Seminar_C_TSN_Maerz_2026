#include <stdio.h>   // Systemdateien 

#include "Unterprogramme.h"  // selbst geschr. Dateien

void main()
{
    WirSpielenSchule();
}

void main_mit_eingabe()
{
    int n;

    printf("Bitte Wert eingeben: ");
    scanf_s("%d", &n);

    printHello ( 8 );
}

void main_Hello_World()
{
    printf("Hello World Seminar");

    int n = 5;
    int m;

    // Anweisung:  Wertzuweisung  // assignment
    // Von Rechts nach Links
    m = n;   // in m ist eine KOPIE des Werts aus n
}

void main_if()
{
    int a = 6;
    int b = 5;

    unterprogramm();

    if ( a < b ) 
    {
        printf("a kleiner b");
        printf("noch was anderes");
    }
    else
    {
        printf("Bedingung nicht erfuellt");
        printf("Bedingung nicht erfuellt");
    }

    printf("Fertig.");
}

void main_while()
{
    int n = 0;

    while (n < 5) {
        printf("C is beautiful\n");
        n = n + 1;
    }
}


// =========

//
//n = 123
//m = 456
//m = n
//n = 100
