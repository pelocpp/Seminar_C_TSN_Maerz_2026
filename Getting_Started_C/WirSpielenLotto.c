

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
    //...
    mittwochsZiehung.kugeln[5] = 0;
}

int naechsteKugel()
{
    // soll mit rand gezogen werden

    // kuemmert sich NICHT um doppelte Kugeln
}

int istKugelSchonVorhanden(int kugel)
{
    // 0: Nein
    // 1: Ja

    // Beispiel:
    // [ 17, 3, 44 ]  von Oben: 22
}

void kugelEinfuegen(int kugel)
{
    // Kugel in das Array einfügen
}

void lottoAusgabe()
{
    // alle aktuell gezogenen Kugeln ausgeben
}

void lottoSpielen()
{
    lottoVorbelegen();

    while (mittwochsZiehung.gezogeneKugeln != 6) {
        // die Funktionen von oben aufrufen
    
        lottoAusgabe();
    }
}