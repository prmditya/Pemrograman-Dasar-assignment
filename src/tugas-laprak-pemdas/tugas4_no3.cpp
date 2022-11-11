#include <iostream>
#include <iomanip>

using std::cout; using std::cin; using std::endl; using std::setw;

int main(){
  int jamKerja = 0, totalUpah = 0, totalLembur = 0, totalDenda = 0, jamSelisih = 0, totalGaji = 0;
  cout << "Jam kerja  : ";
  cin >> jamKerja;

  if (jamKerja > 50){ 
    if (jamKerja > 60){
      jamSelisih = jamKerja - 60;
      totalLembur = jamSelisih * 6000;
    }
    jamSelisih = jamKerja - jamSelisih;
    totalUpah = jamSelisih * 5000;
  }else{
    jamSelisih = 50 - jamKerja;
    totalDenda = jamSelisih * 1000;
  }
  
  totalGaji = totalUpah + totalLembur + totalDenda;

  cout << "Upah  \t= Rp. " << setw(7) << totalUpah << endl;
  cout << "Lembur\t= Rp. " << setw(7) << totalLembur<< endl;
  cout << "Denda \t= Rp. " << setw(7) << totalDenda << endl;
  cout << "-----------------------\n";
  cout << "Total \t= Rp. " << setw(7) << totalGaji << endl;
  return 0;
}

