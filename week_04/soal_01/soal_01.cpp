// Programmer : Adam Rahmat Ilahi
// Wednesday, 10 November 2021
//
// soal : Hitung luas persegi panjang
//
#include <iostream>
int main(void){
    // deklarasi variabel
    int panjang, lebar, luas;

    std::cout << "Program Penghitung luas persegi panjang" << std::endl;
    std::cout << "Inputkan nilai panjang : "; std::cin >> panjang;
    std::cout << "Inputkan nilai lebar   : "; std::cin >> lebar;
    std::cout << std::endl;

    // rumus dan output luas persegi panjang
    luas = panjang * lebar;
    std::cout << "Luas persegi panjang : " << luas;
    std::cout << std::endl << std::endl;
}