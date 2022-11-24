#include <iomanip>
#include <iostream>


using std::cin;
using std::cout;
using std::setprecision;

int main() {
  float imt, beratBadan, tinggiBadan;
  cout << "Berat badan (kg)\t: ";
  cin >> beratBadan;
  cout << "Tinggi badan (m)\t: ";
  cin >> tinggiBadan;
  imt = beratBadan / (tinggiBadan * tinggiBadan);
  cout << "IMT\t= " << setprecision(4) << imt << "\t\t\t";

  if (imt > 30) {
    cout << "Termasuk kegemukan\n";
  } else if (imt > 25) {
    cout << "Termasuk gemuk\n";
  } else if (imt > 18.5) {
    cout << "Termasuk normal\n";
  } else {
    cout << "Termasuk kurus\n";
  }
  cout << "\n";
  return 0;
}
