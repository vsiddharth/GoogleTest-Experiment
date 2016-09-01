/*
 * Q8:
 */

#include "Q8.h"

bool isSubString(string & s1, string & s2)
{
    return s1.find(s2) != std::string::npos;
}


bool isStringRotation(string & s1, string & s2) {
    string s1e = s1 + s1;
    return isSubString(s1e, s2);
}