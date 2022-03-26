// Challenge12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <memory>
#include "TextSystem.h"

int main()
{

    const shared_ptr<TextSystem> textSystem = make_shared<TextSystem>();

    //string str = "ANA lleVa al ôsö la avellana";
    string str1;

    cout << "Escriba su palindromo: ";
    getline(cin >> ws,str1);
    //cout << str << endl;

    textSystem->FormatString(str1);
    
    if (textSystem->IsPalindrome(str1))
    {
        std::cout << "Is a palindrome!\n";
    }
    else
    {
        std::cout << "Is not a palindrome!\n";
    }

    
}

