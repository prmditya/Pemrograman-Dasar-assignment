#include <iostream>

using namespace std;

int main (){
  float bilPertama, bilKedua;

  cout << "Masukkan operator pertama : ";
  cin >> bilPertama;
  cout << "Masukkan operator kedua : ";
  cin >> bilKedua;
  cout << "Hasil penjumlahan : " << bilPertama + bilKedua << endl;
  cout << "Hasil pengurangan : " << bilPertama - bilKedua << endl;
  cout << "Hasil perkalian : " << bilPertama * bilKedua << endl;
  cout << "Hasil pembagian : " << bilPertama / bilKedua << endl;

  system("pause");
  return 0;
}