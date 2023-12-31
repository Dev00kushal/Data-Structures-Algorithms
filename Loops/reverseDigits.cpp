#include <iostream>
using namespace std;

int main()
{
    int number;
    
    cin >> number;
    int numberValues;
    int result = 0;
    while (number > 0)
    {

        int numberValues = number % 10;
        result = result * 10 + numberValues;
        number /= 10;
    }
    cout << result;
}
