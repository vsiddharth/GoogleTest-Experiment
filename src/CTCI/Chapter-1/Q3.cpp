/*
 * Q3:
 */
#include "Q3.h"

bool areStringPermutations(const string & s, const string & t)
{
    if (s.length() != t.length())
        return false;

    map<char, int> m;

    for (const char &c : s) {
        m[c]++;
    }

    for (const char &c : t) {
        m[c]--;
        if (m[c] < 0)
            return false;
    }
    return true;
}