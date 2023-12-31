#include <iostream>
#include <string>
using namespace std;

string reverseString(string str);

int main()
{
    string reversedStr = reverseString("Hello");
    cout << reversedStr;
    return 0;
}

string reverseString(string str)
{
    int length = str.length();

    if (length == 0)
    {
        return " ";
    }

    return reverseString(str.substr(1)) + str[0];
}
int main()
{
    string reversedStr = reverseString("Hello");
    cout << reversedStr;
    return 0;
}
