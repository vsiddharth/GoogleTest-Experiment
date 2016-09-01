/*
 * Q4:
 */

#include "Q4.h"
#include <iostream>

void replaceSpaces(string & s)
{
    string s2 = "%20";
    for (int i = s.length()-1; i > -1; i--) {
        if (s[i] == ' ') {
            s.insert(i, s2);
        }
    }
}
