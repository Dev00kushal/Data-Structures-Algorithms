#include <iostream>
using namespace std;

int main()
{

    int num, div;
   cin >> num >>div;

    for (int i = 1; i <= div; ++i)
    {
        if(num == 0){;
            break;
        }
        num /= 10;
        cout << num << endl;
    }
}
