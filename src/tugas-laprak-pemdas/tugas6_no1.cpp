#include <iostream>

using namespace std;

int main() {
  int userInput, userInputTemp, barisStart = 0, barisCount;
  cout << "Masukkan banyak n : ";
  cin >> userInput;

  if (userInput >= 0 && userInput <= 9) {
    userInputTemp = userInput;
    for (int i = 0; i <= userInput; ++i) {
      userInputTemp = userInput - i;
      for (int j = 0; j <= i; j++) {
        cout << " " << userInputTemp++;
      }
      cout << "\n";
    }

    for (int i = userInput; i >= 1; i--) {
      for (int j = ++barisStart; j <= userInput; j++) {
        cout << " " << j;
      }
      cout << "\n";
    }
  } else {
    cout << "Inputan tidak valid\n";
  }

  return 0;
}