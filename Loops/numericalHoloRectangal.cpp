#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= 7; ++j)
        {
            if ((i >= 2 && i <= (n - 1)) && (j >= 2 && j <= 6))
            {
                cout << " ";
            }
            else
            {
                cout << j;
            }
        }
        cout << endl;
    }

    return 0;
}
