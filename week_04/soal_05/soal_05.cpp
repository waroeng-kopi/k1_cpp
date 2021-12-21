// Programmer : Adam Rahmat Ilahi
// Thursday, 11 November 2021
//
// soal :
//          Sebagai perbandingan antara buku Azma dan Azmi 2:3. Jika jumlah buku 
//       keseluruhan adalah 20, hitunglah jumlah buku Azmi.
//
#include <iostream>
int main(void){
    int azma, azmi, jumlah_buku, buku_azma, buku_azmi;
    std::cout << "Program Pembanding Buku Azam dan Azmi" << std::endl;
    
    // rumus
    azma = 2;
    azmi = 3;
    jumlah_buku = 20;
    buku_azma = jumlah_buku / (azma + azmi) * azma;
    buku_azmi = jumlah_buku - buku_azma;
    std::cout << "Buku azmi : " << buku_azmi << std::endl;
}
