// =====================================================================================
// ZinsberechnungMitArray.c
// =====================================================================================

#include <stdio.h>
                // Stellvertreter
void ZinsRechnung ( double capital, double rate, int years )
{
    if (years <= 0)
    {
        return;
    }

    int year = 0;

    double newCapital = capital;

    while (year <= years) {

        double interest = (newCapital / 100.0) * rate;

        newCapital = newCapital + interest;

        printf("Jahr: %d: Kapital: %.2f\n", year, newCapital);

        //year = year + 1;
        year++;
    }
}

// Unterprogramm MIT ERGEBNIS
int Summe(int zahl1, int zahl2)
{
    int result;

    result = zahl1 + zahl2;

    return result;  // return VARIABLE
}

int SummeKuerzer(int zahl1, int zahl2)
{
    return zahl1 + zahl2;
}

void aufgaben()
{
    ZinsRechnung( 1000.0,  5.0,  10 );

    ZinsRechnung( 100.0,  3.0, 10 );

    int wert1 = 10;
    int wert2 = 20;
    int ergebnis = 0;

    ergebnis = Summe(wert1, wert2);

}


// =====================================================================================
// End-of-File
// =====================================================================================
