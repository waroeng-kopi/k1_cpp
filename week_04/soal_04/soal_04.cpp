// Programmer : Adam Rahmat Ilahi
// Thursday, 11 November 2021
//
// soal : Harga untuk kemeja adalah Rp. 180.000,-. Lalu ada diskon 15%. Berapa
//          harga pakaian tsb ?
//
#include <iostream>
int main(void){
    int harga_kemeja, diskon, harga_total, harga_diskon;
    harga_kemeja = 180000;
    diskon = 15;
    std::cout << "Program Penhitung harga diskon kemeja" << std::endl;
    std::cout << "Harga kemeja : Rp. " << harga_kemeja << std::endl;
    std::cout << "Diskon sebesar : " << diskon << "%" << std::endl;
    // rumus untuk melakukan proses diskon
    harga_diskon = harga_kemeja * diskon / 100;
    harga_total = harga_kemeja - harga_diskon; 
    std::cout << "Harga Kemeja tersebut sebesar : " << harga_total << std::endl;
    std::cout << std::endl;
}