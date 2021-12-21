// Programmer : Adam Rahmat Ilahi
// Thursday, 11 November 2021
//
// soal :
//          Hitunglah luas daerah yang diarsir (*) berikut:
//
//           #############
//           #***** *****#
//           #****   ****#
//           #***     ***#
//           #**       **#
//           #*         *#
//           #############
//       
//          panjang persegi : 10 cm
//          lebar persegi : 20 cm
//
#include <iostream>
int main(void){
    int panjang, lebar, luas_persegi;
    float luas_segitga, luas_arsir;
    
    std::cout << "Program penghitung luas daerah yang diarsir" 
    << std::endl << std::endl 
    << "#############" << std::endl
    << "#***** *****#" << std::endl
    << "#****   ****#" << std::endl
    << "#***     ***#" << std::endl
    << "#**       **#" << std::endl
    << "#*         *#" << std::endl
    << "#############" << std::endl;
    panjang = 10;
    lebar = 20;
    std::cout << "Panjang persegi : " << panjang << std::endl;
    std::cout << "Lebar persegi   : " << lebar << std::endl;
    
    // rumus
    luas_persegi = panjang * lebar;
    luas_segitga = 0.5 * panjang * lebar;
    luas_arsir = luas_persegi - luas_segitga;

    std::cout << "Luas yang diarsir bernilai : " << luas_arsir << std::endl;
    std::cout << std::endl << std::endl;
}