#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "German");
    /*Hier werden die Integer Definiert*/
    int AnzahlApfel;
    double Preis, gesammtPreis;
    

    /*Hier werden Eingaben eines Benutzers getestet und aufgebaut*/
    /*Erster Versuch von mir*/
    wprintf(L"Gib bitte Werte für die Einkäufe ein:\n");
    wprintf(L"Gib mir bitte den Preis von dem Apfel ein:\n");
    scanf("%lf", &Preis);
    
    wprintf(L"Wie viele Äpfel hast du denn überhaupt? Bitte gib deine Nummer ein:\n");
    scanf("%d", &AnzahlApfel);
    
    gesammtPreis = AnzahlApfel * Preis;
    
    wprintf(L"Alle Äpfel zusammen kosten:%.2lf Euro.\n", gesammtPreis);

    return 0;
}