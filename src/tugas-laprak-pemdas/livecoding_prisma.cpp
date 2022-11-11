#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Nama : Thoriq Kusuma Paramaditya
    // NIM : 225150301111032
    // No : 14
    
    float sisiAC, sisiBC, sisiAD, sisiAB, luasAlas, kelAlas, luasPerPris, volumePris;
    
    cin >> sisiAC >> sisiBC >> sisiAD;

    sisiAB = sqrt((sisiAC*sisiAC) + (sisiBC*sisiBC));
    luasAlas = (sisiAC * sisiBC) / 2;
    kelAlas = sisiAC + sisiBC + sisiAB;
    luasPerPris = (luasAlas * 2) + (sisiAD * sisiAB)+ (sisiAD * sisiAC) + (sisiAD * sisiBC);
    volumePris = luasAlas * sisiAD;

    cout << "Luas alas Prisma : " << luasAlas << endl;
    cout << "Keliling alas Prisma : " << kelAlas << endl;
    cout << "Luas permukaan Prisma : " << luasPerPris << endl;
    cout << "Volume Prisma : " << volumePris << endl;
    
    system("pause");
    return 0;
}