#include <iostream>

using namespace std;

int main (){
  int awalPower, akhirPower, biayaBeban, selisihPower, tarifListrik;
  float pajak , biayaPajak;
  string nama, kelurahan;

  cout << "Program penghitung pemakaian listrik sederhana\n";
  cout << "Masukkan nama : ";
  // karena fungsi cin tidak dapat menginputkan whitespace
  // maka digukanalah fungsi getline
  getline(cin, nama);
  cout << "Kelurahan : ";
  getline(cin, kelurahan);
  cout << "Posisi awal Kwh meter : ";
  cin >> awalPower;
  cout << "Posisi akhir Kwh meter : ";
  cin >> akhirPower;
  cout << "Masukkan biaya beban saat ini : ";
  cin >> biayaBeban;
  cout << "Masukkan PPJ (dalam persen) : ";
  cin >> pajak;
  cout << "===================PLN " << kelurahan << "===================\n";
  cout << "Nama : " << nama << endl;
  cout << "Kelurahan : " << kelurahan << endl;
  selisihPower = akhirPower - awalPower;
  cout << "Pemakaian akhir bulan ini : " << selisihPower << " Kwh meter\n";
  tarifListrik = selisihPower * biayaBeban;
  cout << "Tarif Listrik : Rp " << tarifListrik << ",-\n";
  biayaPajak = tarifListrik * (pajak / 100);
  cout << "PPJ " << pajak << "% : Rp " << biayaPajak << ",-\n";
  cout << "Total bayar : Rp " << tarifListrik + biayaPajak << ",-\n";
  cout << "==============================================\n";

  system("pause");
  return 0;
}