#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "German");
    double preis = 0.85;

    /* Bedingte Ausführung eines Blocks von Anweisungen*/

        if(preis > 0.99)
        {
            wprintf(L"Ein teurer Artikel\n");
            wprintf(L"Brauchen wir den wirklich\n");
        }

        /* Bedingte Ausführung einer einzelnen  Anweisung */
        if(preis < 1.0)
        {
        wprintf(L"Ein billiger Artikel\n");
        }

    return 0;
}