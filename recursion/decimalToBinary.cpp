#include <iostream>
using namespace std;

string findBinary(int decimal, string str)
{
    if (decimal == 0)
    {
        return str;
    }

    string result = to_string(decimal % 2) + str;

    return findBinary(decimal / 2, result);
}

int main()
{
    string binaryVal = "";
    binaryVal = findBinary(10, binaryVal);
    cout << binaryVal;
}