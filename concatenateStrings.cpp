#include <algorithm> // copy
#include <iterator> // back_inserter
#include <vector>
#include <string>

#include "concatenateStrings.h"

std::string concatenateStrings (const std::vector<std::string>& vec){
    std::string ret;

    for (std::vector<std::string>::size_type i = 0; i != vec.size(); ++i)
        std::copy(vec[i].begin(), vec[i].end(), back_inserter(ret));

    return ret;
}
