
// Ablage meiner Noten

#include <stdio.h>

#define AnzahlNoten 5

int meineNoten[AnzahlNoten] = { 0 };  // Vorbelegung: ???

void NotenEingeben()
{
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
    NotenEingeben();
    NotenAusgeben();
}
