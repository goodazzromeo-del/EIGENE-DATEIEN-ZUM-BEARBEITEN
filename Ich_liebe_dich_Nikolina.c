#include <stdio.h>
#include <windows.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    MessageBoxW(NULL, L"Ich liebe dich über alles Nikolina Lazarević. \nDu bist die beste und schönste Frau auf der ganzen Welt", L"❤️❤️❤️❤️Hallo meine wundervolle Liebe❤️❤️❤️❤️", MB_OK | MB_ICONINFORMATION);
    
    return 0;
}