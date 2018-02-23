/*
Accelerated C++ by Koenig
Exercise 6-9
Page 122
Use a library algorithm to concatenate all the elements of a vector<string>.
*/

#include <iostream>
#include <string>
#include <vector>

#include "concatenateStrings.h"

int main(){
    // Obtain strings from user and store in vector
    std::cout << "Provide list of strings to concatenate: " << std::endl;
    std::string s;
    std::vector<std::string> vec;
    while(std::cin >> s)
        vec.push_back(s);

    std::string concatenated = concatenateStrings(vec);

    std::cout << std::endl
              << "Result: " << concatenated;

    return 0;
}
