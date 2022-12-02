#include <iostream>

void printArray(int *arr) {
  for (int i = 0; i < 10; i++) {
    std::cout << arr[i];
    if (i != 9) {
      std::cout << ", ";
    } else {
      std::cout << ".";
    }
  }
  std::cout << "\n";
}

int sum(int *arr) {
  int total = 0;
  for (int i = 0; i < 10; i++) {
    total += arr[i];
  }
  return total;
}

int main() {
  int *data = new int[10];
  for (int i = 0; i < 10; i++) {
    std::cout << "data " << i + 1 << " : ";
    std::cin >> data[i];
  }
  std::cout << "\nYour array data : ";
  printArray(data);
  std::cout << "Your sum of array : " << sum(data) << std::endl;

  delete[] data;
  return 0;
}
