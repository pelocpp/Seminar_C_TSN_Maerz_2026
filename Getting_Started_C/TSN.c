#include <stdio.h> // standard input / output
#include <stdlib.h> // standard input / output
#include <string.h> // standard input / output

struct Student
{
    char vorname[32];
    char nachname[32];
};

struct StudentImproved
{
    char* vorname;
    char* nachname;
};

struct TSN
{
    struct Student students[1000];
};

void test_tsn()
{
    char buffer[64] = {};

    // Hans
    // Mueller_Luedenscheid

    printf("Bitte Vorname eingeben: ");

    scanf_s("%s", buffer, 64);

    int len = 1 + strlen(buffer); // 1 für das Ende-Zeichen

    struct StudentImproved neuAnmeldung;

    char* pName = malloc(len * sizeof(char));

    // Puffer mit Namen (buffer) nach neuen Puffer (pName) umkopieren
    strcpy_s(pName, len, buffer);

    neuAnmeldung.vorname = pName;
}