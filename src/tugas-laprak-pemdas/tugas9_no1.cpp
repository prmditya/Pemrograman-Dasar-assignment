#include <iostream>

void searchMaxOf(int *x, int *y) {
  int temp;
  if (*x < *y) {
    temp = *x;
    *x = *y;
    *y = temp;
  }
}

int gcd(int x, int y) {
  searchMaxOf(&x, &y);
  int modResult = 0;
  if (x % y == 0) {
    return y;
  } else {
    modResult = x % y;
    return gcd(y, modResult);
  }
  return 1;
}

int main() {
  int bil1, bil2;
  std::cout << "Masukkan bil pertama : ";
  std::cin >> bil1;
  std::cout << "Masukkan bil kedua : ";
  std::cin >> bil2;
  std::cout << "Hasil GCD adalah : " << gcd(bil1, bil2) << std::endl;
  return 0;
}
