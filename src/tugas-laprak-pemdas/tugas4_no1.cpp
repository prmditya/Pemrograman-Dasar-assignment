#include <iostream>
#include <cmath>

using std::cout; using std::cin; using std::endl;

int main(){
  float panjang, lebar;
  float jariJari;
  float alasSegitiga, sisiTegak, sisiMiring, kelilingSegitiga, halfArround, luasSegitiga;
  int userInput;

  cout << "Menu :\n";
  cout << "1. Menghitung luas dan keliling persegi panjang\n";
  cout << "2. Menghitung luas dan keliling lingkaran\n";
  cout << "3. Menghitung luas dan keliling segitiga\n";
  do{   
    cout << "Pilihan anda : ";
    cin >> userInput;

    switch (userInput)
    {
    case 1:
      cout << "Masukkan p : ";
      cin >> panjang;
      cout << "Masukkan l : ";
      cin >> lebar;
      cout << endl;
      cout << "Keliling persegi panjang\t: " << 2 * (panjang + lebar) << " cm\n";
      cout << "Luas persegi panjang\t\t: " << panjang * lebar << " cm2\n";
      cout << endl;
      break;
    case 2:
      cout << "Masukkan r : ";
      cin >> jariJari;
      cout << endl;
      cout << "Keliling lingkaran\t: " << 3.14 * 2 * jariJari << " cm\n";
      cout << "Luas lingkaran\t\t: " << 3.14 * jariJari * jariJari << " cm2\n";
      cout << endl;
      break;
    case 3:
      cout << "Masukkan a : ";
      cin >> alasSegitiga;
      cout << "Masukkan b : ";
      cin >> sisiTegak;
      cout << "Masukkan r : ";
      cin >> sisiMiring;
      cout << endl;
      kelilingSegitiga = alasSegitiga + sisiTegak + sisiMiring;
      cout << "Keliling segitiga\t: " << kelilingSegitiga << " cm\n";
      halfArround = kelilingSegitiga * 0.5;
      luasSegitiga = sqrt(halfArround * ((halfArround - alasSegitiga) * (halfArround - sisiTegak) * (halfArround - sisiMiring)));
      cout << "Luas segitiga\t\t: " << luasSegitiga << " cm2\n";
      cout << endl;
      break;  
    default:
      cout << "Data tak ditemukan, program dihentikan ...\n";
    }
  } while (userInput <= 3 && userInput >= 1);
  return 0;
}
