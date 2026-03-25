// ===========================================================================
// Dynamic.c // Dynamische Variablen
// ===========================================================================

#include <stdio.h>           // printf 
#include <stdlib.h>          // rand, malloc 

#define  Length 10

#include "Unterprogramme.h"  // selbst geschr. Dateien

int daten[100000000];

void main_dynamic()
{
    // int daten[100000000] = {};

    // will 10 int Werte dynamisch anlegen

    int* ptr = malloc(Length * sizeof (int) );

    if (ptr == NULL)
    {
        printf("Kein Speicher");
    }
    else
    {
        int* copyPtr = ptr;  // Will ptr aufheben

        //copyPtr--;
        //int secret1 = *copyPtr;
        //copyPtr--;
        //int secret2 = *copyPtr;
        //copyPtr--;
        //int secret3 = *copyPtr;
        //copyPtr--;
        //int secret4 = *copyPtr;


        // will mit diesen 10 Werten arbeiten

        // A) klassisch, im Gedankengut von Dennis Ritchie
        // will die Zahlen 1 bis 10 in den Speicher schreiben
        //for (int i = 0; i < Length; i++)
        //{
        //    *copyPtr = i + 1;
        //    copyPtr++;
        //}
        //free(ptr); 

        // B) Nochmal klassisch, im Gedankengut von Dennis Ritchie

        // will die Zahlen 1 bis 10 in den Speicher schreiben
        //for (int i = 0; i < Length; i++)
        //{
        //    *(ptr + i) = i + 1;
        //}
        //free(ptr);

        // C) so sollte man es tun - eleganter - besser
        for (int i = 0; i < Length; i++)
        {
            *(ptr + i) = i + 1;

            // leichtere, elegantere Schreibweise
            // IDENTISCH !!!!!!!!!!!!!!!!!!!!!!
            ptr[i] = i + 1;
        }
        free(ptr);

    }

}

// ===========================================================================
// End-of-File
// ===========================================================================
