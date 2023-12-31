#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int rows = 1; rows <= n; ++rows) {
    for (int columns = 1; columns <= (n - rows); ++columns) {
      cout << " ";
    }
    for (int j = 1; j <= (2 * rows - 1); ++j) {
      cout << "*";
    }
    cout << endl;
  }
}
