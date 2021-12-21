// programmer : Adam Rahmat Ilahi
// saturday, 13 November 2021
//
// soal :
//          Menentukan bilangan terbesar dan tekecil dari 3 buah bilangan yang diinputkan
//
#include <iostream>

void besar(float bil){
    std::cout << "Bilangan terbesar : " << bil << std::endl;
}

void kecil(float bil){
    std::cout << "Bilangan terkecil : " << bil << std::endl;
}

void terbesar(float bil_1, float bil_2, float bil_3){
    if (bil_1 > bil_2 && bil_1 > bil_3){
        besar(bil_1);
    }
    else if (bil_2 > bil_1 && bil_2 > bil_3){
        besar(bil_2);
    }
    else if (bil_3 > bil_1 && bil_3 > bil_2){
        besar(bil_3);
    }
}

void terkecil(float bil_1, float bil_2, float bil_3){
    if (bil_1 < bil_2 && bil_1 < bil_3){
        kecil(bil_1);
    }
    else if (bil_2 < bil_1 && bil_2 < bil_3){
        kecil(bil_2);
    }
    else if (bil_3 < bil_1 && bil_3 < bil_2){
        kecil(bil_3);
    }
}

int main(void){
    float bil_1, bil_2, bil_3;
    std::cout << "Program menentukan bilangan terbesar dan terkecil dari 3 buah bilangan yang diinputkan" << std::endl;
    std::cout << "Inputkan bilangan pertama : "; std::cin >> bil_1;
    std::cout << "Inputkan bilangan kedua   : "; std::cin >> bil_2;
    std::cout << "Inputkan bilangan ketiga  : "; std::cin >> bil_3;

    // rumus
    terbesar(bil_1, bil_2, bil_3);
    terkecil(bil_1, bil_2, bil_3);
    std::cout << std::endl << std::endl;    
}