// Programmer : Adam Rahmat Ilahi
// Thursday, 11 November 2021
//
// soal :
//          Sebuah peta memiliki skala 1:200.000 dan jarak kota A dengan kota B
//        yang sebenarnya adalah 6 km. Berapa jarak pada peta dari kedua 
//        kota itu ?
//
#include <iostream>
int main(void){
    int skala, jarak_ab, jarak_peta;
    
    // anggaplah 1 = 1 cm, jadi 1 cm : 200.000 cm 
    // atau 1 cm pada peta sebanding dengan 2 km jarak sebenarnya
    // maka 
    skala = 2; // ubah dari 200.000 cm menjadi 2 km
    jarak_ab = 6; // jarak sebenarnya dari kota a ke kota b (6 km)
    // rumus mencari jarak pada peta
    jarak_peta = jarak_ab * 1 / skala;
    std::cout << "Jarak pada peta dari kedua kota itu : " << jarak_peta << " cm"
    << std::endl << std::endl;
}