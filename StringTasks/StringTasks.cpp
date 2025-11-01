#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "test";
    cout << s << endl;
    s += " another string";
    cout << s << endl;

    char str[100] = "test\0";
    cout << str << endl;
    strcat(str, " another string");
    cout << str << endl;
}