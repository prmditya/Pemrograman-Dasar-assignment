#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Nama : Thoriq Kusuma Paramaditya
    // NIM : 225150301111032
    // No : 14

    char nama[100], jurusan[100], keilmuan[100], olahraga[100], kesenian[100];
    int angkatan, usia;

    scanf("%[^\n]\n", &nama);
    scanf("%[^\n]\n", &jurusan);
    scanf("%d\n", &angkatan);
    scanf("%d\n", &usia);
    scanf("%[^\n]\n", &keilmuan);
    scanf("%[^\n]\n", &olahraga);
    scanf("%[^\n]", &kesenian);

    printf("\n");
    printf("Nama = %s\n", nama);
    printf("Jurusan = %s\n", jurusan);
    printf("Angkatan = %d \n", angkatan);
    printf("usia = %d \n", usia);
    printf("minat keilmuan = %s\n", keilmuan);
    printf("minat olahraga = %s\n", olahraga);
    printf("minat kesenian = %s\n", kesenian);
    
    printf("\n");
    system("pause");
    return 0;
}