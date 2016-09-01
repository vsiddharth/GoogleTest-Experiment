#include "gtest/gtest.h"
#include "CTCI/Chapter-1/Q4.h"

TEST(Chapter1, Q4a)
{
    string s = "RACE CAR";
    int len = s.length();

    replaceSpaces(s);
    ASSERT_GT(s.size(), len);

}

/* FIXME
TEST(Chapter1, Q4b)
{
string s = "RACE CAR";

cout << "S : " << s << endl;

string t = replaceSpaces2(s);

cout << "L: " << t.length() << endl;
cout << "S': " << t << endl;

}
 */
