// ============================================================

Erste Schritte in C

Peter Loos

// ============================================================

TODO:
Frage:  globales versus lokale Variablen

// ============================================================

Neuronales Netz

Ein anderes Tutorial:

https://github.com/pelocpp/cpp_case_studies/blob/master/MarkDown/NeuralNetwork/NeuralNetwork.md

https://www.reddit.com/r/MachineLearning/comments/3mdvxv/neural_net_in_c_for_absolute_beginners_super_easy/



// ============================================================



https://github.com/pelocpp

https://github.com/pelocpp/c_introduction

peter.loos@gmx.de

// ============================================================

Programmiersprache C

Dennis Ritchie

C ist in C++ enthalten

== C

== C++

==============================================================

Hello World in C

Programmiersprache:

== Lexikon
== Grammatik

Korrekter Satz ===> Übersetzer  // (Translator) Compiler 


C ist format-frei !!!!

Python ist NICHT format-frei 

Achtung: 

Am Ende einer jeden Anweisung in C steht ein Strichpunkt ;


// =======================================================

Wie wird ein Python Programm ausgeführt ????

cmd

Der Reihe nach

==> ein Prozessor

Was führt ein Prozessor aus: Maschinencode

C ====> wird in Maschinencode umgesetzt.

Python ====> wird interpretiert.  //

Was ist "interpretieren" : NICHT nach Maschinencode übersetzen,
                    sondern mit einem ANDEREN Programm ausführen: Interpreter




.exe:   Executable


Wie kann man ein Programm testen ???????????????????????

a) mit "print" Anweisungen

b) Extra Tool:  Wanze  => bug   // entwanzen  // to debug

   Debugger

   Haltepunkt:  man kann einem Programm sagen: Halte hier

   Einzelschritt  // Single Step

   F10 

   Menü "Einzelschritt"

   Python:

   n = 123;   // Integer

   m = 123.345;

   C:

   int n;

   n = 123;

   oder

   int n = 123;   // C  // MUSS Typ der Variablen hinschreiben

   Man muss Variablen vereinbaren / definieren.


   123.234324  // float // Gleitkommazahl

   int, long, short     // ganzzahlige Werte

   float, double        // Gleitkommazahl

   Für einen ganzzahligen Wert benötigt man Speicher:

   // Bit:  0 oder 1

   Byte: 8 Bits sind ein Byte

   Wie viele Bytes belegt eine int-Variable ???

   C:  int - 4 Bytes             double word

       short - 2 Bytes           word

       long - 4 Bytes            double word

       long long - 8 Bytes       quad word

       char    - 1 Bytes         byte

  float:   4  Byte

  double:  8 byte

============================================================

Anweisungen

a) Wertzuweisung

b) if-Anweisung // Bedingungsanweisung

   SYNTAX:

   if ( Bedingung )
   {
       ...
   }

c) Wiederholungsanweisung

   while ( Bedingung)
   {
   }

Übung:
======

  7, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1. ENDE


Collatz 


  n => n / 2, wenn n gerade
  n => 3 * n + 1, wenn n ungerade



C: int n = 5; // oder was anderes 

Wann ist n gerade ???????????

   if ( n % 2 == 0 )
   {
       hier ist n gerade
   } 

   printf ("hallo");


   int n = 1;
   printf ("hallo %d", n);    // %d  Platzhalter / Stellvertreter

=================================================================

Unterprogramm
-------------

Was ist ein Unterprogramm?

Eine Zusammenfassung von mehreren Anweisungen
mit einem Namen.

Über den Namen sind diese Anweisungen aufrufbar.

In C:    Ausdrucksweise / Nomenklatur:

2 Arten von Unterprogrammen:

== Funktion  // Hat ein Ergebnis
== Unterprogramm  // Subroutine // hat kein Ergebnis

a) Unterprogramm

SYNTAX:

Stellvertreter

void UnterprogrammNAME ( Parameter )
{
} 

Für Namen von Variablen / Unterprogrammen
// Bezeicher / Identifier
gibt es Regeln:

a) KEIN blank / Leerzeichen

   stelle Regler  FALSCH
   stelle_Regler  Korrekt
   stelle-Regler  FALSCH


   stelle_Regler123

   1Regler        FALSCH

   _1Regler       Korrekt





Beispiel:

void main()
{
   // Anfang des Programms
}


// Bemerkung: 

i = i + 1;

IDENTISCH und KÜRZER:

i ++;

// ====================================================

Zinsen berechnen

void ZinsRechnung( double Startkapital, double zinsen, int jahre);

Welche Ausgabe soll diese Funktion haben:

Beispiel:

Zinsrechnung (1000.0,  5.0, 10);

Ausgabe: 

1. Jahr:  1050.0
2. Jahr:  1102.5                // circa ...........
...
10. Jahr: 

printf("%f")   // double !!!!!!!!!!!!!!





Unterprogramm OHNE Ergebnis:  void

Unterprogramm MIT Ergebnis:  void


Schaltjahr:

int year = 2026;

Wann ist ein Jahr ein Schaltjahr ??????

== Alle 4 Jahre
== 1. Ausnahme: Wenn durch 100 teilbar: KEIN Schaltjahr (2000)
== 2. Ausnahme: Wenn durch 400 teilbar: DOCH Schaltjahr (2000)


int istSchaltjahr ( int year );

0 == falsch
1 == wahr

Konvention // Vereinbarung


isLeapyear



Frage: Sollte ich mit 400 anfangen ???

Pessimization:  


// ======================================================

Arrays in C:

ÄHNLICH zu Liste in Python.

NICHT Dasselbe !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

Was ist ein Array // Feld:

Mehre Variablen desselben Typs.

Beispiel:

26 Noten

Die kann man in einem Feld ablegen:

int noten [ 26 ];

UNTERSCHIED zu Python // Liste:

Die 26 ist FIX !!!!!!!!!!!!!!!!!!!!!!!

==============================================

Kann man die Kopfzeilen für Unterprogramme
nicht einfacher bekannt machen ???

Mit speziellen Dateien:  Header-Datei.  // Endung: .h


=============================================

Feld der Länge 5:

int Noten[5];

Achtung: 

int ersteNote = Noten[ 0 ]; 

int letzteNote = Noten[ 4 ];

Also, gültige Indices: 0 bis einschl. 4



=====================================================

Wie , welchen Speicher habe ich in 
einem C Programm zur Verfügung ??

A) Lokale Variablen

Beispiel:

void ZinsRechnung ()
{
   ...
    double newCapital = 0;  // Lokale Variable

Alle Variablen in Unterprogramm sind lokale Variablen.

B) Globale Variablen

Alles außerhalb von Funktionen


=======================================================

AUfgabe:

Unterprogramm:

meineDurchschnittsNote

ACHTUNG:

Welchen Datentyp hat die Durchschnittsnote:

2 , 3  ==> 2.5 float   / double


Berechnen / In der Konsole ausgeben

// NACHDEM die REAL berechneten Noten erzeugt worden sind.

=======================================================

Die Division in C gibt es ZWEIMAL:

int / int:    17 / 5  ====> 3  

    ganzzahlige Division


double (float) / double (float)
int            / double (float)
double (float) / int

              17.0 / 5.0  ====> 3.4

    Gleitpunkt Division

=========================================================

Feld: Viele Daten desselben Typs

Struktur: Viele Daten unterschiedlichen Typs

Beispiel:

Schüler / ..in der TSN:

- Vor/Nachname  // Zeichenketten in C
- Durchschnittsnote
- Adresse
- Fehltage

Uhrzeit:

- Stunden
- Minuten
- Sekunden

int uhrzeit [3];  // NO


=======================================================

Zeiger / Pointer

Java, C#: Genau das will man vermeiden.

C   ===>  UNIX-Betriebssystem:  Assembler // C 

Datentyp für Zeiger:


Adresse mit einem Typ wie int, float verbinden:

Beipiel:

0x1024 ==> wieviele Bytes

int* ip;

a) ip ist eine Variable für eine ADRESSE

b) Weil int:  ab / an dieser Adresse gehören mir (Anwendung) 4 BYTES.




double* ip;

a) ip ist eine Variable für eine ADRESSE

b) Weil double:  ab / an dieser Adresse gehören mir (Anwendung) 8 BYTES.



float* ip;

a) ip ist eine Variable für eine ADRESSE

b) Weil float:  ab / an dieser Adresse gehören mir (Anwendung) 4 BYTES.

Hmmmm, wieviele Bytes sind es denn jetzt

Handbuch:  NEIN

sizeof

size_t: Ist wie int  // also ganzzahliger Datentyp 

VORSICHT:  Keine negativen Werte: 0, 1, 2, ..............

===============================================================

Zeiger

Zeigerarithmetik

2 Operationen:

i) ++, --

ii) einen Offset addieren


Whyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy

Dynamische Daten

=======================================================

Wo ist der Fehler ???????????????

Methode der Intervallhalbierung

=======================================================

Speicherbereiche

a) Globale Varianblen

   Außerhalb von allen Funktionen // auf der obersten Ebene

b) Lokale Variablen

   Stack // Stapel

   Füllbytes // Testbytes // Sicherheitsbytes:  CC

   In Unterprogrammen 

   Sind nach Verlassen des Unterprogramms weg ...

   Temporäre Zwischenergebnisse



c) Dynamische Variablen

   Füllbytes // Testbytes // Sicherheitsbytes:  CD

   Wird angelegt / erzeugt, wenn die Variable benötigt wird.
   Wird freigegeben, wenn die Variable nicht mehr benötigt wird.

   Wo:

   Halde // Heap



Es gibt einen void Pointer

void* ptr   ==> NUR ALS ZWISCHENERGEBNIS

=====================================================

Studentenverwaltung:

Nachname:

struct Student
{
    char vorname [32];
    char nachname [32];
}

struct TSN
{
    Student students [1000];
}

===============================================================

"In C gibt es keine Arrays"

===============================================================
https://github.com/pelocpp/c_introduction/blob/master/C_Introduction/Exercises/DynamicIntArray/Exercises_DynamicIntArray.md

===============================================================
