/*Variablen Deffinierung und Benutzung in Rechnung*/
#include <stdio.h>
int main()
{

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
    printf("Der Gesamtpreis für die Herzen beträgt: %.2f Eurp\n", gesamtPreisHerzen);
    printf

    return 0;

}