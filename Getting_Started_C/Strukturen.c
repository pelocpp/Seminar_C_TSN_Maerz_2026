// Strukturen

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

void printTime( struct Time uhrzeit)
{
    printf("%d:%d:%d\n", uhrzeit.hours, uhrzeit.minutes, uhrzeit.seconds);
}

void strukturen ()
{
    struct Time now;

    now.hours = 13;
    now.minutes = 49;
    now.seconds = 30;

    // Ausgeben
    //printf("%d:%d:%d", now.hours, now.minutes, now.seconds);
    printTime(now);

    struct Time finish = { 15, 59, 0 };
   // printf("%d:%d:%d", finish.hours, finish.minutes, finish.seconds);
    printTime(finish);
}