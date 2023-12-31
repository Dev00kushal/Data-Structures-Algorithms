#include <iostream>
#include <string>

using namespace std;

bool isPlaindrome(string str)
{
    if (str.length() == 0 || str.length() == 1)
    {
        return true;
    }

    else if (str[0] == str[str.length() - 1])
    {
        isPlaindrome(str.substr(1, str.length() - 2));
    }
    else
    {
        return false;
    }
}

int main()
{
    bool test = isPlaindrome("hello");
    test == 0 ? cout << "It is a plaindrome" : cout << "It is not a plaindrome";
}