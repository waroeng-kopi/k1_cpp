// Programmer : Adam Rahmat Ilahi
// Friday, 12 November 2021
//
// soal :
//          Menentukan bilangan terkecil dari 2 bilangan yang diinputkan
//
#include <iostream>
int main(void){
    float bil_1, bil_2, hasil;

    std::cout << "Program menentukan bilangan terkecil dari 2 inputan" << std::endl;
    std::cout << "Inputkan bilangan pertama : "; std::cin >> bil_1;
    std::cout << "Inputkan bilangan kedua   : "; std::cin >> bil_2;
        
    // Sesuai dengan soal diatas maka
    if (bil_1 <= bil_2){
        std::cout << "Bilangan pertama : " << bil_1 
            << " lebih kecil dari bilangan kedua : " << bil_2;
    }
    else if (bil_1 >= bil_2){
        std::cout << "Bilangan kedua : " << bil_2 
        << " lebih kecil dari bilangan pertama : " << bil_1;
    }
    // else{
    //     std::cout << "terdapat kesalahan, pastikan inputan tidak mengandung huruf dan simbol spesial";
    // }
    std::cout << std::endl << std::endl;
}
