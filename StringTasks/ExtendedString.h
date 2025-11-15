#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
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
	const string getString();
	const char* getCharString();
	size_t getSize();
};

class ExtendedStringFile : public ExtendedString {
public:
	ExtendedStringFile() :
		ExtendedString() {};
	ExtendedStringFile(string _s) :
		ExtendedString(_s) {};
	void OutputFile(string path);
	void ReadFile(string path);
};