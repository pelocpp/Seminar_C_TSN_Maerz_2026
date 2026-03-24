// ===========================================================================
// Program.c // if und while Anweisung
// ===========================================================================

#include <stdio.h>           // Systemdateien 

#include "Unterprogramme.h"  // selbst geschr. Dateien

int main()
{
    aufgabe_lottoSpielen();

    return 1;
}

void main_mit_eingabe()
{
    int n;

    printf("Bitte Wert eingeben: ");
    scanf_s("%d", &n);

    printHello( 8 );
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

// ===========================================================================
// End-of-File
// ===========================================================================
