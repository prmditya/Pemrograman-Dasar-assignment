#include <iostream>

using namespace std;

void calculateVolume();
void identifyOddEven();
void userWarning();

int main(){
  char userInput;

  system("cls");

  cout << " Program Kalkulasi Ternary\n";
  cout << "---------------------------\n";
  cout << "1. Volume balok\n";
  cout << "2. Pengecek Ganjil Genap\n";
  cout << "3. Keluar program\n";
  cout << "---------------------------\n";
  cout << "Pilih dari (1-3) : ";
  cin >> userInput;

  switch (userInput)
  {
  case '1':
    calculateVolume();
    break;
  case '2':
    identifyOddEven();
    break;
  case '3':
    cout << "---------------------------\n";
    cout << "Terimakasih telah mencoba :)\n";
    cout << "Dibuat oleh : \n";
    cout << "Thoriq Kusuma \n";      
    cout << "---------------------------\n";
    system("pause");
    return 0;
  default :
    userWarning();
    break;
  }
}

void calculateVolume(){
  // a : panjang, b : lebar, c : tinggi
  float a, b, c, hasil;
  char pilihanUser;

  do {

    system("cls");
    cout << " Menghitung Volume Balok\n";
    cout << "-------------------------\n";
    cout << "Masukkan panjang : ";
    cin >> a;
    cout << "Masukkan lebar : ";
    cin >> b;
    cout << "Masukkan tinggi : ";
    cin >> c; 
    hasil = a * b * c;
    cout << "-------------------------\n";
    cout << "Volume balok : " << hasil << endl;
    cout << "Apakah ingin mengulang program ?\n (Y/y) : ";
    cin >> pilihanUser;

  }while((pilihanUser == 'y') || (pilihanUser == 'Y'));

  main();
}

void identifyOddEven(){
  int inputBil;
  char pilihanUser;
  string hasilAkhir;

  do{

    system("cls");
    cout << "  Pengecek Ganjil Genap\n";
    cout << "-------------------------\n";
    cout << "Masukkan bilangan bulat : ";
    cin >> inputBil;
    cout << "-------------------------\n";
    hasilAkhir = ((inputBil % 2) == 0 || inputBil == 0) ? "Genap" : "Ganjil";
    cout << "Bilangan " << inputBil << " merupakan bilangan " << hasilAkhir << endl; 
    cout << "Apakah ingin mengulang program ?\n (Y/y) : ";
    cin >> pilihanUser;

  }while((pilihanUser == 'y') || (pilihanUser == 'Y'));

  main();
}

void userWarning(){
  system("cls");
  cout << "--Peringatan------------------------------\n";
  cout << " hanya boleh memasukkan antara (1-3) !!! \n";
  cout << "------------------------------------------\n";
  system("pause");
  main();
}