/*
 * Q1:
 */
#include "Q1.h"

bool isStringUnique(const string & str)
{
    if (str.length() > 256)
        return false;

    int state  = 0;
    for (const char &c : str) {
        int val = c - 'A';
        if ((state & (1 << val)) > 0)
            return false;
        state |= 1 << val;
    }
    return true;
}