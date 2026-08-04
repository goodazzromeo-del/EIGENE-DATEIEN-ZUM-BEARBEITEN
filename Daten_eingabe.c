#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main()
{
    setlocale(LC_ALL, "German");
    
    /*Hier werden die Integer Definiert*/
    long long AnzahlApfel;
    double Preis, gesammtPreis;
    

    /*Hier werden Eingaben eines Benutzers getestet und aufgebaut*/
    wprintf(L"Gib bitte Werte für die Einkäufe ein:\n");
    wprintf(L"Gib mir bitte den Preis von dem Apfel ein:\n");
    wscanf(L"%lf", &Preis);
    
    wprintf(L"Wie viele Äpfel hast du denn überhaupt? Bitte gib deine Nummer ein:\n");
    wscanf(L"%lld", &AnzahlApfel);
    
    gesammtPreis = AnzahlApfel * Preis;
    
    wprintf(L"Alle Äpfel zusammen kosten: %.2lf Euro.\n", gesammtPreis);

    return 0;

    /*Hat selber ganz gut funktioniert nur duch locale muss ich an L denken in einer wprintf("")
    sonst bricht das Programm in sich und kann nicht kompilieren*/
}