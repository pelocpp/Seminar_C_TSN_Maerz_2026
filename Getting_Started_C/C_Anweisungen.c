// ===========================================================================
// C_Anweisungen.c // if und while Anweisung
// ===========================================================================

#include <stdio.h>           // Systemdateien 

#include "Unterprogramme.h"  // selbst geschr. Dateien

void main_if()
{
    int a = 6;
    int b = 5;

    unterprogramm();

    if (a < b)
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

// ===========================================================================
// End-of-File
// ===========================================================================

