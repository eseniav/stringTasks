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
    if (found1 != found2) {
        if (found1)
            cout << "ѕодстрока найдена только в первой строке!" << endl;
        if (found2)
            cout << "ѕодстрока найдена только во второй строке!" << endl;
    }
    return found1 && found2;
}

const string ExtendedString::getString() {
    return s;
}

const char* ExtendedString::getCharString() {
    return str;
}

size_t ExtendedString::getSize() {
    return stringSize;
}

void ExtendedStringFile::OutputFile(string path) {
    ofstream f;
    f.open(path);
    if (!f.is_open())
    {
        cout << "Ќе удалось открыть файл " << path << endl;
    }
    else
    {
        f << getString() << endl;
        f.close();
    }
}

void ExtendedStringFile::ReadFile(string path) {
    ifstream f;
    f.open(path);
    if (!f.is_open())
    {
        cout << "Ќе удалось открыть файл " << path << endl;
    }
    else
    {
        string s;
        f >> s;
        addString(s);
        f.close();
    }
}
/*—оздайте новый класс ExtendedString, в котором сделайте два пол€: string s и char[200] str. “акже должно быть поле с размером строки.
ћетоды:
1) конструктор по умолчанию
2) конструктор с параметром (строка)
3) добавление строки (одновременно в первое s и второе поле str)
4) подсчет количества символов в строке (через strlen дл€ str и методы типа string дл€ s)
5) поиск указанной подстроки в первой и второй строках
ќсновной смысл: в обоих строковых пол€х должны поддерживатьс€ одинаковые значени€.*/