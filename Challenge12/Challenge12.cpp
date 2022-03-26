// Challenge12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <memory>
#include "TextSystem.h"

int main()
{
    shared_ptr<TextSystem> textSystem = make_shared<TextSystem>();

    string str = "Anîta lavâ lä tína";

    cout << str << endl;

    textSystem->FormatString(str);
    
    if (textSystem->CheckIsPalindrome(str))
    {
        std::cout << "Is a palindrome!\n";
    }
    else
    {
        std::cout << "Is not a palindrome!\n";
    }

    
}

