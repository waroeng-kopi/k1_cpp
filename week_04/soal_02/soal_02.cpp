// Programmer : Adam Rahmat Ilahi
// Wednesday, 10 November 2021
//
// soal : Hitung luas segitiga
//
#include <iostream>
int main(void){
    // deklarasi variabel
    int panjang, tinggi;
    float luas;

    std::cout << "Program Penghitung Luas Segitiga" << std::endl;
    std::cout << "Inputkan nilai panjang : "; std::cin >> panjang;
    std::cout << "inputkan nilai tinggi  : "; std::cin >> tinggi;
    
    // rumus segitiga
    luas = 0.5 * panjang * tinggi;
    std::cout << "Luas segitiga : " << luas;
    std::cout << std::endl << std::endl;
}