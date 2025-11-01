#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "ExtendedString.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
   /* string s = "test";
    cout << s << endl;
    s += " another string";
    cout << s << endl;

    char str[100] = "test\0";
    cout << str << endl;
    strcat(str, " another string");
    cout << str << endl;*/

    ExtendedString es;
    es.addString("Привет gggg hhhh dfsfsf!");

    cout << "Длина строки: " << es.countSymbols() << endl;
    cout << "Строка string: " << es.getString() << endl;
    cout << "Строка char: " << es.getCharString() << endl;

    cout << "Поиск: " << es.findSubstring("gg") << endl;
}
