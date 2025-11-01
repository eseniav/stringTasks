#pragma once

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class ExtendedString
{
private:
	string s;
	char str[200];
	size_t stringSize;
public:
	ExtendedString();
	ExtendedString(string _s);
	void addString(string newString);
	size_t countSymbols();
	bool findSubstring(string substring);
	string getString();
	char* getCharString();
	size_t getSize();
};

