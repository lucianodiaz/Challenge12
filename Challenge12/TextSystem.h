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
		{'á','a'},{'è','e'},{'í','i'},{'ó','o'},{'ú','u'},
		{'ä','a'},{'à','a'},{'â','a'},
		{'é','e'},{'ë','e'},{'ê','e'},
		{'ï','i'},{'ì','i'},{'î','i'},
		{'ô','o'},{'ö','o'},{'ò','o'},
		{'û','u'},{'ü','u'},{'ù','o'},
	};
	void FormatString(string& str);

	const bool IsPalindrome(const string& str);
private:
	void RemoveAccentMark(string& str);

	void DeleteSpaces(string& str);

	void LowerCaseString(string& str);
};
