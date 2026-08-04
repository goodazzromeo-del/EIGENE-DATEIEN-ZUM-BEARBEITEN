/*Variablen Deffinierung und Benutzung in Rechnung*/
#include <stdio.h>
#include <locale.h>
int main()
{

    /*Damit man auch einfach Ä und so benutzen kann in Texten*/

    setlocale(LC_ALL, "German");

    /*Hier werden Integer und Double definiert*/
    int anzahlHerzen = 2, anzahlNieren =  4;
    double preisHerzen = 1.45, preisNieren = 0.85;
    
    /*Hier werden die Gesamtpreise als Double defniert um sie danach berechnen zu können*/
    double gesamtPreisHerzen, gesamtPreisNieren, gesamtPreisBeide;

    /*Hier wird alles dann Berechnet*/
    gesamtPreisHerzen = anzahlHerzen * preisHerzen;
    gesamtPreisNieren = anzahlNieren * preisNieren;
    gesamtPreisBeide = gesamtPreisHerzen + gesamtPreisNieren;

    /*Hier werden die Ergebnisse ausgegeben und mittgeteilt*/
    wprintf(L"Der Gesamtpreis für die Herzen beträgt: %.2f Euro\n", gesamtPreisHerzen);
    wprintf(L"Der Gesamtpreis der Nieren beträgt: %.2f Euro \n", gesamtPreisNieren);
    wprintf(L"Der Gesamtpreis für alle Produkte nach dem Kauf ist: %.2lf Euro.\n", gesamtPreisBeide);

    getchar();

    return 0;
}