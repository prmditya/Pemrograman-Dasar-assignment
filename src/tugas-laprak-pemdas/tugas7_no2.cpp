#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, wSpace, numSpace;

  cin >> n;
  wSpace = n;
  numSpace = n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  for (int i = 1; i <= n * 2; i++) {
    cout << "* ";
  }

  cout << endl;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= wSpace; j++) {
      cout << "  ";
    }

    for (int k = 1; k <= numSpace; k++) {
      cout << "* ";
    }
    wSpace++;
    numSpace--;
    cout << endl;
  }

  return 0;
}
