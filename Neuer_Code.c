#include <stdio.h>

int main()
{
    /*Deklaration*/
    
    int Anzahl;
    double Preis;

    /*Zuweisung der Werte*/
    
    Anzahl = 2;
    Preis = 1.45;

    /*Ausgabe der Werte*/
    
    printf("Anzahl: %d\n", Anzahl);
    printf("Preis: %f Euro\n", Preis);
    printf("Preis: %.2f Euro\n", Preis);



    return 0;
}