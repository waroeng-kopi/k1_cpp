// Programmer : Adam Rahmat Ilahi
// Monday, 8 November 2021
//
/*
soal :  - Hitung luas persegi panjang
        - Hitung luas segitiga
        - Jarak rumah Adi ke sekolah adalah 4.550 dam, dan jarak sekolah ke
            tempat les piano Adi adalah 550.000 cm. Berapakah jarak yang harus
            ditempuh Adi jika Adi harus les piano sepulang sekolah?
        - Harga untuk kemeja adalah Rp. 180.000,-. Lalu ada diskon 15%. Berapa
            harga pakaian tsb ?
        - Sebagai perbandingan antara buku Azma dan Azmi 2:3. Jika jumlah buku 
            keseluruhan adalah 20, hitunglah jumlah buku Azmi.
        - Hitunglah luas daerah yang diarsir berikut:
            `panjang persegi : 10 cm, lebar persegi : 20 cm;
        - Sebuah peta memiliki skala 1:200.000 dan jarak kota A dengan kota B
            yang sebenarnya adalah 6 km. Berapa jarak pada peta dari kedua 
            kota itu ?
*/

#include <iostream>
int maint(void){
    while (true){
        // menu
        std::cout << "1. Hitung luas persegi panjang" << std::endl
            << "2. Hitung luas segitiga" << std::endl
            << "3. Hitung jarak yang ditempuh Adi dari sekolah ke tempat les piano" << std::endl
            << "4. Menghitung harga untuk kemeja dan memberikan diskon" << std::endl
            << "5. Menghitung jumlah buku Azmi dengan perbandingan Buku Azma" << std::endl
            << "6. Menghitung luas yang diarsir" << std::endl
            << "7. Jarak kota A dan kota B pada peta" << std::endl;
        std::cout << "";
        int _panjang, _lebar, _luas;
        std::cout   << "Program menghitung luas persegi panjang" << std::endl;
        std::cout << "Input Panjang : "; std::cin >> _panjang;
        std::cout << "Input lebar : "; std::cin >> _lebar;
        // rumus persegi panjang
    _   _luas = _panjang * _lebar;
        std::cout << "luas persegi panjang : " << _luas << std::endl;
    }
}