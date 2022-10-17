#include <iostream>
#include <string>

using std::cout; using std::cin; using std::string;

int main(){
  string namaPelanggan;
  int daya, pemakaianDaya;

  getline(cin, namaPelanggan);
  cin >> daya >> pemakaianDaya;

  if(namaPelanggan[0] == 'R' || namaPelanggan[0] == 'B' || namaPelanggan[0] == 'I'){
    cout << namaPelanggan.substr(2) << "\n";
    cout << daya << "\n";
    cout << pemakaianDaya << "\n";
    switch (namaPelanggan[0]){
      case 'R':
        switch (daya){
          case 900 ... 2200:
            cout << "R-1/TR\n";
            if (daya >= 2200 || daya == 1300){
              cout << pemakaianDaya * 1444 << "\n";
            }else {
              cout << pemakaianDaya * 1352 << "\n";
            }

            break;
          case 3500 ... 6600:
            cout << "R-2/TR\n";
            cout << pemakaianDaya * 1699 << "\n";
            break;
          default:
            cout << "R-3/TR\n";
            cout << pemakaianDaya * 1699 << "\n";
            break;
        }
        break;
      case 'B':
        switch (daya){
          case 6600 ... 200000:
            cout << "B-2/TM\n";
            cout << pemakaianDaya * 1444 << "\n";
            break;
          default:
            cout << "B-3/TM\n";
            cout << pemakaianDaya * 1144 << "\n";
            break;
        }
        break;
      case 'I':
        if (daya >= 30000000){
          cout << "I-4/TT\n";
          cout << pemakaianDaya * 996 << "\n";
        }else if(daya > 200000){
          cout << "I-3/TM\n";
          cout << pemakaianDaya * 1114 << "\n";
        }
        break;
    }
  }else {
    cout << "0\n0\n0\n0\n0";
  }
  return 0;
}