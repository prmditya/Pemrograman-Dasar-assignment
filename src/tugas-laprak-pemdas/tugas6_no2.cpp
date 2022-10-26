#include <iostream>
#include <string>

using namespace std;

int main() {
  int total = 0;
  string userInput;
  cout << "Masukkan nilai n : ";
  getline(cin, userInput);

  for (int i = 0; i < userInput.size(); i++) {
    total += stoi(userInput.substr(i, 1));
  }
  cout << "\n";
  cout << "Hasil penjumalahan : " << total;

  return 0;
}