#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;
    int sum = 0;
    while(num >0)
    {
        int lastAns = num % 10;
        sum += lastAns;
        num /=10;
    }
    cout << sum;
}