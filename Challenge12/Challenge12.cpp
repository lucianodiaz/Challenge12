// Challenge12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <memory>
#include "TextSystem.h"

int main()
{
    const shared_ptr<TextSystem> textSystem = make_shared<TextSystem>();

    string str = "ANA lleVa al ôsö la avellana";

    cout << str << endl;

    textSystem->FormatString(str);
    
    if (textSystem->IsPalindrome(str))
    {
        std::cout << "Is a palindrome!\n";
    }
    else
    {
        std::cout << "Is not a palindrome!\n";
    }

    
}

