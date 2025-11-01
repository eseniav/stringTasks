#include "ExtendedString.h"

ExtendedString::ExtendedString() {
	s = "";
	str[0] = '\0';
	stringSize = 0;
}

ExtendedString::ExtendedString(string _s) {
	addString(_s);
}

void ExtendedString::addString(string newString) {
    s = newString;
    stringSize = s.length();

    if (stringSize > 199) {
        stringSize = 199;
    }
    s.copy(str, stringSize);
    str[stringSize] = '\0';
}

size_t ExtendedString::countSymbols() {
    int len1 = s.length();
    int len2 = strlen(str);

    if (len1 != len2) {
        cout << "ќшибка!" << endl;
    }
    return len1;
}

bool ExtendedString::findSubstring(string substring) {
    bool found1 = s.find(substring) != string::npos;

    bool found2 = strstr(str, substring.c_str()) != NULL;

    return found1 && found2;
}

string ExtendedString::getString() {
    return s;
}

char* ExtendedString::getCharString() {
    return str;
}

size_t ExtendedString::getSize() {
    return stringSize;
}

/*—оздайте новый класс ExtendedString, в котором сделайте два пол€: string s и char[200] str. “акже должно быть поле с размером строки.
ћетоды:
1) конструктор по умолчанию
2) конструктор с параметром (строка)
3) добавление строки (одновременно в первое s и второе поле str)
4) подсчет количества символов в строке (через strlen дл€ str и методы типа string дл€ s)
5) поиск указанной подстроки в первой и второй строках
ќсновной смысл: в обоих строковых пол€х должны поддерживатьс€ одинаковые значени€.*/