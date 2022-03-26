#pragma once
#include <algorithm>
#include <iostream>
#include <string.h>
#include <map>
using namespace std;

class TextSystem
{
public:
	TextSystem();
	const map<char, char> m_dictionaryAccents
	{
		{'�','a'},{'�','e'},{'�','i'},{'�','o'},{'�','u'},
		{'�','a'},{'�','a'},{'�','a'},
		{'�','e'},{'�','e'},{'�','e'},
		{'�','i'},{'�','i'},{'�','i'},
		{'�','o'},{'�','o'},{'�','o'},
		{'�','u'},{'�','u'},{'�','o'},
	};
	void FormatString(string& str);

	const bool IsPalindrome(const string& str);
private:
	void RemoveAccentMark(string& str);

	void DeleteSpaces(string& str);

	void LowerCaseString(string& str);
};
