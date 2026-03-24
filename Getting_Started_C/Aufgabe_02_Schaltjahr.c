#include <stdio.h>

static int isLeapLear(int year)
{
    int result;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                result = 1; // Ausnahme von der Ausnahme
            }
            else {
                result = 0; // Ausnahme
            }
        }
        else {
            result = 1; // Schaltjahr
        }
    }
    else {
        result = 0; // Kein Schaltjahr
    }

    return result;
}

static int isLeapLearCompact(int year)
{
    int result;

    if (year % 400 == 0 || (year % 4 == 0 && (year % 100 != 0)))
    {
        result = 1;
    }
    else
    {
        result = 0;
    }


    return result;
}

static void aufgabe_Schaltjahr()
{
    int result;
    int year;

    year = 1999;
    result = isLeapLear(year);
    printf("%d ist Schaltjahr: %d\n", year, result);

    year = 2000;
    result = isLeapLear(year);
    printf("%d ist Schaltjahr: %d\n", year, result);

    year = 2003;
    result = isLeapLear(year);
    printf("%d ist Schaltjahr: %d\n", year, result);

    year = 2004;
    result = isLeapLear(year);
    printf("%d ist Schaltjahr: %d\n", year, result);

    year = 2024;
    result = isLeapLear(year);
    printf("%d ist Schaltjahr: %d\n", year, result);
}
