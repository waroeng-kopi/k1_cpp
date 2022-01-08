// programmer : Adam Rahmat Ilahi
// Monday, 3 January 2022
//
// soal:
//      Menghitung luas segitiga menggunakan subproses
//

#include <iostream>

int alas(){
    int Alas;
    std::cout << "Inputkan Alas : ";
    std::cin >> Alas;
    return Alas;
}

int tinggi(){
    int Tinggi;
    std::cout << "Inputkan Tinggi : ";
    std::cin >> Tinggi;
    return Tinggi;
}

int main(void){
    int Alas = alas();
    int Tinggi = tinggi();
    float Hasil;

    // rumus luas segitiga
    Hasil = 0.5 * Tinggi * Alas;
    std::cout << "Nilai Luas Segitiga : " << Hasil;
}