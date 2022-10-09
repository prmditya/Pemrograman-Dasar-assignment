#include <iostream>

using namespace std;

int main() {
	int banyakBil;
	float rata2, dataBil, totalBil;
	
	cout << " PROGRAM PENGHITUNG RATA - RATA \n";
	cout << "--------------------------------\n";

	// untuk menginput banyaknya data(banyakBil)
	cout << "mau menghitung berapa bilangan : ";
	cin >> banyakBil;

	// for untuk menginput data(dataBil) dan 
	// menjumlah total data yang di inputkan (totalBil)
	for (int i = 1; i <= banyakBil; i++){
		cout << "masukkan angka ke-" << i << " : ";
		cin >> dataBil;
		totalBil += dataBil;
	}

	// untuk menghitung rata-rata
	rata2 = totalBil / banyakBil;

	// mengeluarkan nilai rata-rata ke user
	cout << "-Hasil--------------------------\n";
	cout << "rata - rata : " << rata2 << endl;
	cout << "--------------------------------\n";
	cout << "Disusun oleh :\n";
	cout << "- Evan\n";
	cout << "- Rafi\n";
	cout << "- Thoriq\n";
	cout << "- Wahyu\n";
	cout << "--------------------------------\n";

	system("pause");
	return 0;
}