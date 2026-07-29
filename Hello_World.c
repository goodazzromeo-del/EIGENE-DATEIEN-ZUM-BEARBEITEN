// Hier wird das Stdio.h Header-File eingebunden, um die Funktionalität der Standard-Ein-/Ausgabe zu nutzen
#include <stdio.h>
//Hier wird das Locale.h Header-File eingebunden, um die Funktionalität der Lokalisierung zu nutzen damit ich auch Umlaute und Sonderzeichen in der Konsole ausgeben kann.
#include <locale.h>


int main() {
    setlocale(LC_ALL, "");
    wprintf(L"Hallo meine Liebe \nIch liebe dich über alles Nikolina Lazarević \nDu bist die beste und schönste Frau auf der ganzen Welt");
    
    getchar();
    
    return 0;
}