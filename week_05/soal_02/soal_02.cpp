// programmer : Adam Rahmat Ilahi
// Saturday, 13 November 2021
//
// soal :
//          Menentukan bilangan terbesar dan terkecil dari 2 bilangan yang diinputkan
//
#include <iostream>
int main(void){
    int bil_1, bil_2;
    std::cout << "Program menentukan bilangan terbesar dan terkecil dari 2 bilangan yang diinputkan" << std::endl;
    std::cout << "Input bilangan pertama : "; std::cin >> bil_1;
    std::cout << "Input bilangan kedua   : "; std::cin >> bil_2;
    std::cout << std::endl;

    // proses
    if (bil_1 > bil_2){
        std::cout << bil_1 << " lebih besar dan " << bil_2 << " lebih kecil" << std::endl;
    }
    else if (bil_2 > bil_1){
        std::cout << bil_2 << " lebih besar dan " << bil_1 << " lebih kecil" << std::endl;
    }
    std::cout << std::endl;
}