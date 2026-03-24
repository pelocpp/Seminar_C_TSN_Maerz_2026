
// Ablage meiner Noten

#include <stdio.h>   // printf
#include <stdlib.h>  // rand
#include <time.h>    // time


#define AnzahlNoten 5

int meineNoten[AnzahlNoten] = { };  // Vorbelegung: ???

void NotenEingebenReal()
{
    for (int i = 0; i < AnzahlNoten; i++) {

        int note = rand() % 6 + 1;
        // int note = rand();

        printf("Ihre %d. Note: %d\n", i + 1, note);

        meineNoten[i] = note;
    }
}

void NotenEingeben()
{
    for (int i = 0; i < AnzahlNoten; i++) {
        printf("Bitte geben Sie ihre %d. Note ein: ", i+1);

        int note = 0;
        scanf_s("%d", &note);

        meineNoten[i] = note;
    }
}

double meineDurchschnittsNote()
{
    int summe = 0;

    for (int i = 0; i < AnzahlNoten; i++)
    {
        summe = summe + meineNoten[i];
        // summe += meineNoten[i];
    }

    //  Typkonvertierung: summe (int) ==> double
    //  ===> Umwandlungsoperation:  cast 

    double average = (double) summe / AnzahlNoten;

    return average;
}


void NotenAusgeben()
{
    for (int i = 0; i < AnzahlNoten; i++)
    {
        printf("Note %d: %d\n", i+1, meineNoten[i]);
    }
}

void WirSpielenSchule()
{
    // srand(123);    // s = seed  // Samen // für eine bestimmte zufällige Zahlenfolge

    srand(time(NULL));    // s = seed  // Samen // für eine bestimmte zufällige Zahlenfolge

    NotenEingebenReal();
    NotenAusgeben();
    WEITER NACH DER PAUSE meineDurchschnittsNote();
}
