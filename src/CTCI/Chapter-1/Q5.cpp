/*
 * Q5:
 */

#include "Q5.h"

string RLE(const string &s)
{
    string t;
    for (int i = 1, count = 1; i <= s.length(); i++) {
        if (i == s.length() || s[i] != s[i-1] ) {
            t += s[i-1] + to_string(count);
            count = 1;
        }
        else {
            ++count;
        }
    }
    return (t.length() < s.length() ? t : s);
}