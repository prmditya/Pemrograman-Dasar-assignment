#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  long int n = 0, max = 0, bilangan = 0, min = 0, lcm = 0;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> bilangan;

      if (j == 1 && i == 1) {
        min = bilangan;
        max = bilangan;
      } else if (bilangan < min) {
        min = bilangan;
      } else if (bilangan > max) {
        max = bilangan;
      }
    }
  }

  cout << min << "\n";
  cout << max << "\n";
  lcm = min;
  while (lcm % max != 0) {
    lcm = lcm + min;
  }
  cout << lcm << "\n";

  return 0;
}
