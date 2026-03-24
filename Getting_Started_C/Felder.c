
// 5 Noten

#include <stdio.h>

#define AnzahlNoten   5

void meineNotenAlt()
{
    int noten[AnzahlNoten] = { 0 };  // Platz für 5 Noten

    // erste Note eintragen
    int meineNoteInC = 4;

    noten[0] = meineNoteInC;

    int meineNoteInMathe = 1;

    noten[1] = meineNoteInMathe;

    // Ja, 3 Noten fehlen noch ....

    // Ein Feld durchlaufen: 0 .. 4 in diesem Fall habe
    for (  int i = 0;  i < AnzahlNoten ; i ++ )
    {
        int note = noten[i];

        printf("Note %d: %d\n", i + 1 , note);
    }
}


