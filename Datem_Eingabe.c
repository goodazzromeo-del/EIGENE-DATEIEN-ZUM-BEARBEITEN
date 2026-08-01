/*Hier wird eine Eingabe von einem Benutzer eingegeben und wieder ausgegeben*/

#include <stdio.h>
int main()
{
/*Hier werden die Variabllen definierti ob sie ein int oder ein double sind*/

int anzahl;
double preis;

/*Hier wird zuerst eine Ausgabe getätigt und nach der Eingabe eine Zahl gefragt*/

printf("Bitte geben Sie eine Zahl ein:");
scanf("%d", &anzahl);

/*Hier wird Nach dem Preis gefragt der als Double Deklariert ist, 
um Nachkommastellen zu ermöglichen*/


printf("Bitte gebe deinen Preis ein:");
scanf("%lf", &preis);

/*Nun die Ausgabe der beiden Werte, der Double wird hier mit .2 auf die zweite
Nachkommastelle gerundet*/

printf("Deine eingegebene Zahl ist: %d\n", anzahl);
printf("Dein eingegebener Preis ist: %.2f Euro\n", preis);

return 0;
}