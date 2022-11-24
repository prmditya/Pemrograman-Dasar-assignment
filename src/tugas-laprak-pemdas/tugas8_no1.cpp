#include <iostream>

int main() {
  std::string studentName[10], matkul[10][10];
  int sks[10][10] = {{0}, {0}}, sksSum[10] = {0}, matkulCount[10] = {0},
      studentCount = 0;

  for (int i = 0; i < 10; i++) {
    std::cout << "Nama : ";
    std::getline(std::cin, studentName[i]);
    if (studentName[i] == "quit") {
      break;
    } else {
      studentCount++;
      for (int j = 0; j < 10; j++) {

        if (sksSum[i] == 24) {
          std::cout << "Mata Kuliah Penuh\n";
          break;
        } else {
          if (sksSum[i] > 24) {
            j--;
            matkulCount[i]--;
            std::cout << "TIDAK DAPAT MEMASUKKAN MATA KULIAH";
            std::cout << "Jumlah Matkul " << j << " Total SKS " << sksSum[i]
                      << std::endl;
            sksSum[i] -= sks[i][j];
          }
          std::cout << "Jumlah Matkul " << j << " Total SKS " << sksSum[i];
          std::cout << "\nMasukkan matakuliah (type="
                       "quit"
                       " for quit): ";
          std::getline(std::cin, matkul[i][j]);
          if (matkul[i][j] == "quit") {
            break;
          } else {
            matkulCount[i]++;
            std::cout << "Masukkan SKS :";
            std::cin >> sks[i][j];
            std::cin.ignore();
            if (sks[i][j] < 2) {
              j--;
              std::cout
                  << "TIDAK DAPAT MEMASUKKAN MATA KULIAH KURANG DARI 2 SKS\n";
              matkulCount[i]--;
            } else {
              sksSum[i] += sks[i][j];
            }

            if (j == 9) {
              std::cout << "Mata Kuliah Penuh\n";
            }
          }
        }
      }
    }
  }

  for (int i = 0; i < studentCount; i++) {
    std::cout << "\n";
    std::cout << studentName[i] << std::endl;
    std::cout << "MATKUL\t\t\t"
              << " SKS\n";
    for (int j = 0; j < matkulCount[i]; j++) {
      std::cout << matkul[i][j] << "\t\t\t" << sks[i][j] << "\n";
    }
    std::cout << "Total : " << sksSum[i] << std::endl;
  }

  return 0;
}
