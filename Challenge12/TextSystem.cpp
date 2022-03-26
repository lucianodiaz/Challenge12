#include "TextSystem.h"
#include <map>

TextSystem::TextSystem()
{
}

void TextSystem::FormatString(string& str)
{
    DeleteSpaces(str);
    LowerCaseString(str);
    RemoveAccentMark(str);
}

void TextSystem::DeleteSpaces(string& str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
}

void TextSystem::LowerCaseString(string& str)
{
	for_each(str.begin(), str.end(), [](char& c)
	{
			c = ::tolower(c);
	});
}

void TextSystem::RemoveAccentMark(string& str)
{
    map<char, char> mapCharacter;

    mapCharacter.insert(pair<char, char>('á', 'a'));
    mapCharacter.insert(pair<char, char>('é', 'e'));
    mapCharacter.insert(pair<char, char>('í', 'i'));
    mapCharacter.insert(pair<char, char>('ó', 'o'));
    mapCharacter.insert(pair<char, char>('ú', 'u'));

    for (size_t i = 0; i < str.length(); i++)
    {
        map<char, char>::iterator it;
        for (it = mapCharacter.begin(); it != mapCharacter.end(); it++)
        {
            if (str[i] == it->first)
            {
                str[i] = it->second;
            }
        }
    }
}

const bool TextSystem::CheckIsPalindrome(const string& str)
{
    unsigned int begin = 0;
    unsigned int end = str.length()-1;
    const unsigned int pivot = end / 2;

    while (begin < pivot && end > pivot)
    {
        if (str[begin] == str[end])
        {
            begin++;
            end--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
