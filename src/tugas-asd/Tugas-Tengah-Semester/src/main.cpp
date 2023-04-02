#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

// Nama : Thoriq Kusuma Paramaditya
// NIM  : 225150301111032
// Prodi: Teknik Komputer - D

const string path[4] = {"MK-A", "MK-B", "MK-C", "MK-D"};

struct Mahasiswa
{
  string nim;
  string nama;
  float nilai[4] = {0, 0, 0, 0};
  float mean;
  string matkul[4] = {"", "", "", ""};
};

int manyData(Mahasiswa mahasiswa)
{
  int sizeNilai = sizeof(mahasiswa.nilai) / sizeof(mahasiswa.nilai[0]);
  int nData = 0;
  for (int i = 0; i < sizeNilai; i++)
  {
    if (mahasiswa.nilai[i] != 0)
    {
      nData++;
    }
  }
  return nData;
}

vector<Mahasiswa> readCSVfileALL()
{
  int count = 1, indexMatkul = 0;
  string line, data, tempNim;
  bool findSameData = false;
  vector<Mahasiswa> mhs;
  Mahasiswa temp;

  while (indexMatkul < 4)
  {
    fstream file(".\\import\\" + path[indexMatkul] + ".csv", ios::in);
    if (file.is_open())
    {
      while (getline(file, line))
      {
        stringstream sstr(line);

        while (getline(sstr, data, ';'))
        {
          if (count == 1)
          {
            temp.nim = data;
            tempNim = data;
          }
          else if (count == 2)
          {
            temp.nama = data;
          }
          else if (count == 3)
          {
            for (auto &listLama : mhs)
            {
              if (listLama.nim == tempNim)
              {
                findSameData = true;
                int manyDataInList = manyData(listLama);
                listLama.nilai[manyDataInList] = (float)stoi(data);
                listLama.matkul[manyDataInList] = path[indexMatkul];
              }
            }
            if (!findSameData)
            {
              temp.nilai[0] = (float)stoi(data);
              temp.matkul[0] = path[indexMatkul];
            }
          }
          count++;
        }
        if (!findSameData)
        {
          mhs.push_back(temp);
        }
        findSameData = false;
        count = 1;
      }
    }
    else
    {
      cout << "Maaf terjadi kesalahan saat membaca file CSV\n";
    }
    indexMatkul++;
  }
  for (auto &mahasiswa : mhs)
  {
    for (int i = 0; i < manyData(mahasiswa); i++)
    {
      mahasiswa.mean += mahasiswa.nilai[i];
    }
    mahasiswa.mean = mahasiswa.mean / manyData(mahasiswa);
  }

  return mhs;
}

vector<Mahasiswa> readCSVfile(string namaMatkul)
{
  int indexFile = 0;
  int count = 1;
  string line, data;
  vector<Mahasiswa> mhs;
  Mahasiswa temp;
  for (int i = 0; i < 4; i++)
  {
    if (namaMatkul == path[i])
    {
      indexFile = i;
    }
  }

  fstream file(".\\import\\" + path[indexFile] + ".csv", ios::in);
  if (file.is_open())
  {
    while (getline(file, line))
    {
      stringstream sstr(line);

      while (getline(sstr, data, ';'))
      {
        if (count == 1)
        {
          temp.nim = data;
        }
        else if (count == 2)
        {
          temp.nama = data;
        }
        else if (count == 3)
        {
          temp.nilai[0] = (float)stoi(data);
          temp.matkul[0] = path[indexFile];
        }
        count++;
      }
      mhs.push_back(temp);
      count = 1;
    }
  }
  return mhs;
}

void displayDB(list<Mahasiswa> mhs)
{
  for (auto &temp : mhs)
  {
    cout << temp.nim << ", " << temp.nama << ", ";
    for (int i = 0; i < manyData(temp); i++)
    {
      cout << temp.nilai[i] << ":";
    }
    cout << ", ";
    for (int i = 0; i < manyData(temp); i++)
    {
      cout << temp.matkul[i] << ":";
    }
    cout << "\n";
  }
}

void searchByNIM(string nim, vector<Mahasiswa> mainDB)
{
  bool notFound = true;
  for (auto &mahasiswa : mainDB)
  {
    if (mahasiswa.nim == nim)
    {
      notFound = false;
      cout << "Nama Mahasiswa : " << mahasiswa.nama << "\n";
      cout << "NIM Mahasiswa : " << mahasiswa.nim << "\n";
      cout << "Matkul yang diampu serta nilai : \n";
      for (int i = 0; i < manyData(mahasiswa); i++)
      {
        cout << mahasiswa.matkul[i] << " : " << mahasiswa.nilai[i] << "\n";
      }
    }
  }
  if (notFound)
  {
    cout << "Maaf Mahasiswa dengan nim : " << nim << " tidak ditemukan!\n";
  }
}

void searchMeanByNIM(string nim, vector<Mahasiswa> mainDB)
{
  bool notFound = true;
  for (auto &mahasiswa : mainDB)
  {
    if (mahasiswa.nim == nim)
    {
      notFound = false;
      cout << "Nama Mahasiswa : " << mahasiswa.nama << "\n";
      cout << "NIM Mahasiswa : " << mahasiswa.nim << "\n";
      cout << "Rata-rata nilai mahasiswa : " << mahasiswa.mean << "\n";
    }
  }
  if (notFound)
  {
    cout << "Maaf Mahasiswa dengan nim : " << nim << " tidak ditemukan!\n";
  }
}

void searchMaxByMatkul(vector<Mahasiswa> mataKuliahDB)
{
  int maxNilai = 100, count = 0;
  cout << "NIM, NAMA, NILAI\n";
  while (count < 5)
  {
    for (auto &mahasiswa : mataKuliahDB)
    {
      if (mahasiswa.nilai[0] == maxNilai && count < 5)
      {
        cout << mahasiswa.nim << ", " << mahasiswa.nama << ", " << mahasiswa.nilai[0] << "\n";
        count++;
      }
    }
    maxNilai--;
  }
}

void searchRangeIn(vector<Mahasiswa> mataKuliahDB)
{
  int count[4] = {0, 0, 0, 0};
  for (auto &mahasiswa : mataKuliahDB)
  {
    if (mahasiswa.nilai[0] > 90)
    {
      count[0]++;
    }
    else if (mahasiswa.nilai[0] > 75)
    {
      count[1]++;
    }
    else if (mahasiswa.nilai[0] > 60)
    {
      count[2]++;
    }
    else
    {
      count[3]++;
    }
  }

  cout << "0-60 : " << count[3] << "\n";
  cout << "61-75 : " << count[2] << "\n";
  cout << "76-90 : " << count[1] << "\n";
  cout << "91-100 : " << count[0] << "\n";
}

void highestScore(int nMahasiswa, vector<Mahasiswa> mainDB)
{
  int count = 0;
  sort(mainDB.begin(), mainDB.end(), [](const Mahasiswa &a, const Mahasiswa &b)
       { return a.mean > b.mean; });
  cout << "NIM Nama Nilai\n";
  for (auto &mahasiswa : mainDB)
  {
    cout << mahasiswa.nim << ", " << mahasiswa.nama << ", " << mahasiswa.mean << "\n";

    count++;
    if (count == nMahasiswa)
    {
      break;
    }
  }
}

int main()
{
  char userOption = 'n';
  string nimMahasiswa, namaMatkul;
  int nMahasiswa;
  vector<Mahasiswa> mainDB = readCSVfileALL(), mataKuliahDB;
first:
  cout << "Program Database Mahasiswa\n";
  cout << "---------------------------\n";
  cout << "1. Daftar mata kuliah serta nilai seorang mahasiswa\n";
  cout << "2. Rata-rata nilai seorang mahasiswa\n";
  cout << "3. Mahasiswa dengan nilai tertinggi pada mata kuliah tertentu\n";
  cout << "4. Jumlah mahasiswa yang memiliki nilai 0-60, 61-75, 76-90, 91-100\n   pada matakuliah tertentu\n";
  cout << "5. Daftar N mahasiswa dengan nilai tertinggi pada seluruh mata kuliah\n";
  cout << "---------------------------\n";
  cout << "Masukkan pilihan anda (1-5)\njika ingin keluar ketik (Y/y)=Ya / (ctrl+c): ";
  cin >> userOption;

  if (userOption == 'Y' || userOption == 'y')
  {
    goto last;
  }

  switch (userOption)
  {
  case '1':
    cout << "\nMasukkan NIM : ";
    cin >> nimMahasiswa;
    searchByNIM(nimMahasiswa, mainDB);
    break;
  case '2':
    cout << "\nMasukkan NIM : ";
    cin >> nimMahasiswa;
    searchMeanByNIM(nimMahasiswa, mainDB);
    break;
  case '3':
    cout << "\nMasukkan nama matkul : ";
    cin >> namaMatkul;
    searchMaxByMatkul(readCSVfile(namaMatkul));
    break;
  case '4':
    cout << "\nMasukkan nama matkul : ";
    cin >> namaMatkul;
    searchRangeIn(readCSVfile(namaMatkul));
    break;
  case '5':
    cout << "\nMasukkan jumlah Mahasiswa : ";
    cin >> nMahasiswa;
    highestScore(nMahasiswa, mainDB);
    break;
  default:
    cout << "Maaf anda salah memasukkan pilihan\n";
    break;
  }
  cout << "---------------------------\n";
  system("pause");
  cout << "\n";
  goto first;
last:
  return 0;
}