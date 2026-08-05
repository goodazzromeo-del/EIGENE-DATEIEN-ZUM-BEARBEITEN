#include <stdio.h>
#include <locale.h>
int main()
{
    /*Die Variablen werden hier definiert*/
    int ErsterArtikelAnzahl, ZweiterArtikelAnzahl;
    double PreisErsterArtikel, PreisZweiterArtikel, gesamtPreisBeide, gesamtpreisRabatt, gesamtpreisRabattDifferenz;


    setlocale(LC_ALL, "");

    /*Der Erste Artikel wird abgefragt und der Preis wird abgefragt*/

    printf("Gib bitte die Anzahl des Ersten Artikels ein:\n");
    scanf("%d", &ErsterArtikelAnzahl);
    
    wprintf(L"Bitte gib den Preis deines Ersten Artikel pro Stück ein:\n");
    wscanf(L"%le", &PreisErsterArtikel);

    /*Der zweite Artikel wird im Preis abgefragt und der Anzahl*/

    printf("Bitte gib mir die Anzahl des zweiten Artikels an:\n");
    scanf("%d", &ZweiterArtikelAnzahl);

    wprintf(L"Bitte gib mir den Preis des zweiten Artikels an:\n");
    wscanf(L"%lf", &PreisZweiterArtikel);

    /*Hier wird alles zusammen gerechnet als auch der Rabattpreis Berechnet*/
    
    gesamtPreisBeide = (ErsterArtikelAnzahl * PreisErsterArtikel) + (PreisZweiterArtikel * ZweiterArtikelAnzahl); 

    gesamtpreisRabattDifferenz =  gesamtPreisBeide / 5;

    gesamtpreisRabatt = gesamtPreisBeide - gesamtpreisRabattDifferenz;

    /*Hier werden die Preise beide Ausgegben und dem Einkäufer gesagt*/

    wprintf(L"Die Summe ohne Rabatt aller Artikel ist: %.2lf\n", gesamtPreisBeide);
    wprintf(L"Durch den 20 Prozent Rabatt kostet der Einkauf aber nur: %.2lf\n", gesamtpreisRabatt);

    getchar();

    return 0;

}