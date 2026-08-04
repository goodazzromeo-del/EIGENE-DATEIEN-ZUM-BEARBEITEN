#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "German");


    double PreisEuro, GesamtPreis;
    short Anzahl;

    wprintf(L"Bitte Anzahl eingeben:\n");
    wscanf(L"%d", &Anzahl);

    wprintf(L"Preis in Euro eingeben:\n");
    wscanf(L"%lf", &PreisEuro);

    GesamtPreis = PreisEuro * Anzahl;

    wprintf(L"Die Anzahl ist: %d\n", Anzahl);
    wprintf(L"Der Preis ist: %.2lf Euro\n", PreisEuro);
    wprintf(L"Der Gesamtpreis ist: %.2lf Euro\n", GesamtPreis);
}