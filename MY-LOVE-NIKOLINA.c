#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "German");

    wprintf(L"Liebst du mich wirklich?\n");

    char Eingabe;

    wscanf(L"%c", &Eingabe);



    if(Eingabe == "Ja" )
    {

        wprintf(L"Ich liebe dich viel mehr, über alles sogar");
    }
        else
    {
        
        wprintf(L"Tja dachte ich mir ich liebe dich mehr.");
    }

    return 0;
}