#include "TextSystem.h"


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
    for (size_t i = 0; i < str.length(); i++)
    {
        map<char, char>::const_iterator it;
        for (it = m_dictionaryAccents.begin(); it != m_dictionaryAccents.end(); it++)
        {
            if (str[i] == it->first)
            {
                str[i] = it->second;
            }
        }
    }
}

const bool TextSystem::IsPalindrome(const string& str)
{
    size_t begin = 0;
    size_t end = str.length()-1;
    const size_t pivot = end / 2;

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
