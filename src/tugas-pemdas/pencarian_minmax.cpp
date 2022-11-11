#include <iostream>

using namespace std;

int main() {
	int banyakBil, dataBil;
	
	cout << " PROGRAM PENCARI MIN & MAX \n";
	cout << "---------------------------\n";

  // agar program terus berulang maka digunakanlah
  // perulangan Do-While
  do{
    // untuk menginput banyaknya data(banyakBil)
    cout << "masukkan banyak bilangan : ";
    cin >> banyakBil;

    // saat program dijalankan kembali nilai min
    // dan max diubah menjadi 0 kembali
    int min = 0;
    int max = 0;

    for (int i = 0; i < banyakBil; i++){
      cout << "masukkan bilangan ke-" << i + 1 << " : ";
      cin >> dataBil;

      // saat user menginput bilangan -9999 
      // maka program akan otomatis mati
      if (dataBil == -9999){
        cout << "-Keluar--------------------\n";
        system("pause");
        return 0;
      }
      
      // untuk mencari dan menyimpan data min dan max
      if (i == 0){
        min = dataBil;
        max = dataBil;
      }else {
        if (dataBil < min){
          min = dataBil;
        }else if (dataBil > max){
          max = dataBil;
        }
      }
    }

    // mengeluarkan nilai rata-rata ke user
    cout << "-Hasil---------------------\n";
    cout << "Angka terbesar : " << max << ", Angka terkecil : " << min << endl;
    cout << "---------------------------\n\n";
  }while(banyakBil > 0);

  cout << "-Keluar--------------------\n";
  system("pause");
  return 0;
}