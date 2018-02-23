#include <iostream>
#include <string>
#include <vector>

int main(){
    // Obtain strings from user and store in vector
    std::cout << "Provide list of strings to concatenate: " << std::endl;
    std::string s;
    std::vector<std::string> vec;
    while(std::cin >> s)
        vec.push_back(s);

    std::string concatenated = concatenateString(vec);

    std::cout << std::endl
              << "Result: " << concatenated;

    return 0;
}
