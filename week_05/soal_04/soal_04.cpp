// programmer : Adam Rahmat Ilahi
// Sunday, 14 November 2021
// 
// soal :
//          Mengkonversi nilai angka hari menjadi nama hari, yaitu:
//      nilai angka hari          nama hari
//              1                   Senin
//              2                   Selasa
//              3                   Rabu
//              4                   Kamis
//              5                   Jum'at
//              6                   Sabtu
//              7                   Minggu
// 
#include <iostream>
void print(int angka_hari){
    if (angka_hari >= 1 && angka_hari <= 7){
        std::cout << angka_hari << " Bernilai hari : ";
    }
}

int main(void){
    int angka_hari;
    std::cout << "Program Pengkonversi nilai angka menjadi nama hari" <<std::endl;
    std::cout << "Silahkan inputkan nama hari : "; std::cin >> angka_hari;
    
    // proses
    print(angka_hari);
    switch (angka_hari){
    case 1:
        std::cout << "Senin" << std::endl;
        break;
    case 2:
        std::cout << "Selasa" << std::endl;
        break;
    case 3:
        std::cout << "Rabu" << std::endl;
        break;
    case 4:
        std::cout << "Kamis" << std::endl;
        break;
    case 5:
        std::cout << "Jum'at" << std::endl;
        break;
    case 6:
        std::cout << "Sabtu" << std::endl;
        break;
    case 7:
        std::cout << "Minggu" << std::endl;
        break;
    default:
        std::cout << "input haruslah 1-7" << std::endl;
        break;
    }
    std::cout << std::endl << std::endl;
}
