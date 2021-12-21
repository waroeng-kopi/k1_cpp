// Programmer : Adam Rahmat Ilahi
// Wednesday, 10 November 2021
//
// soal : Jarak rumah Adi ke sekolah adalah 4.550 dam, dan jarak sekolah ke
//       tempat les piano Adi adalah 550.000 cm. Berapakah jarak yang harus
//       ditempuh Adi jika Adi harus les piano sepulang sekolah?
//
#include <iostream>
int main(void){
    int rumah_sekolah, sekolah_les; // deklarasi variabel
    std::cout << "Program penghitung jarak yang harus ditempuh Adi jika haru ke tempat les sepulang sekolah"
    << std::endl;

    // 4.550 dam = 4.550.000 cm
    rumah_sekolah = 4500000;
    sekolah_les = 550000;
    std::cout << "Jarak yang harus di tempuh oleh Adi untuk pergi dari sekolah ke tempat les : ";
    std::cout << sekolah_les;
    std::cout << std::endl << std::endl;
}