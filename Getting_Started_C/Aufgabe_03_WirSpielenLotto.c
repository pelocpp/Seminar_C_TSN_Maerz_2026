// ===========================================================================
// Aufgabe_03_WirSpielenLotto.c // Lotto Aufgabe
// ===========================================================================

#include <stdio.h>
#include <stdlib.h>   // rand()
#include <time.h>     // time_t

struct Lotto
{
    int kugeln[6];
    int gezogeneKugeln;   // 0, 1, 2, ... 6
};

struct Lotto mittwochsZiehung;

void lottoVorbelegen()
{
    mittwochsZiehung.gezogeneKugeln = 0;
    mittwochsZiehung.kugeln[0] = 0;
    mittwochsZiehung.kugeln[1] = 0;
    mittwochsZiehung.kugeln[2] = 0;
    mittwochsZiehung.kugeln[3] = 0;
    mittwochsZiehung.kugeln[4] = 0;
    mittwochsZiehung.kugeln[5] = 0;
}

int naechsteKugel()
{
    // soll mit rand gezogen werden
    // kuemmert sich NICHT um doppelte Kugeln

    int kugel = rand() % 49 + 1;
    return kugel;
}

int istKugelSchonVorhanden(int kugel)
{
    // 0: Nein
    // 1: Ja

    // Beispiel:
    // [ 17, 3, 44 ]  von Oben: 22

    for (int i = 0; i < mittwochsZiehung.gezogeneKugeln; ++i)
    {
        if (mittwochsZiehung.kugeln[i] == kugel)
        {
            return 1; // true // doppelte
        }
    }

    return 0;   // false // keine doppelte
}

void kugelEinfuegen(int kugel)
{
    // Kugel in das Array einfügen

    mittwochsZiehung.kugeln[mittwochsZiehung.gezogeneKugeln] = kugel;

    mittwochsZiehung.gezogeneKugeln++;

}

void lottoAusgabe()
{
    // alle aktuell gezogenen Kugeln ausgeben
    printf("Ziehung der Lottozahlen:\n");
    printf("========================\n");

    for (int i = 0; i < 6; ++i)
    {
        printf("%d ", mittwochsZiehung.kugeln[i]);
    }
    printf("\n");
}

void aufgabe_lottoSpielen()
{
    lottoVorbelegen();

    for (int i = 0; i < 6; ++i)
    {
        int kugel = naechsteKugel();
        while (istKugelSchonVorhanden(kugel) == 1)
        {
            kugel = naechsteKugel();
        }

        printf("%d. Kugel: %d\n", (i + 1), kugel);
        kugelEinfuegen(kugel);
    }
}

// ===========================================================================
// End-of-File
// ===========================================================================
