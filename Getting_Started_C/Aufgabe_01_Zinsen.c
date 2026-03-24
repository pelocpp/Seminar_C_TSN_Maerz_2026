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

void aufgaben()
{
    ZinsRechnung( 1000.0,  5.0,  10 );

    ZinsRechnung( 100.0,  3.0, 10 );

}


// =====================================================================================
// End-of-File
// =====================================================================================
