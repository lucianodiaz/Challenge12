#pragma once
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
class TextSystem
{
public:
	TextSystem();

	void FormatString(string& str);

	const bool CheckIsPalindrome(const string& str);

	
private:

	void RemoveAccentMark(string& str);

	void DeleteSpaces(string& str);

	void LowerCaseString(string& str);

	

	
};

