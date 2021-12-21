// Programmer: Adam Rahmat Ilahi
// Saturday, 11 December 2021
//
// soal:
//		Mencetak m buah bilangan ganjil yang merupakan kelipatan 5, mulai dari a
//
#include <iostream>

int main(void){
	int m, respon;
	for (int a = 1;	; a++){
		if ((a % 5) == 0 && !(a % 2) == 0){
			m = a;
			std::cout << m << " merupakan bilangan ganjil kelipatan 5" << std::endl;

			std::cout << "lanjutkan perulangan? (1 untuk y / 0 untuk n) : ";
			std::cin >> respon;

			if (respon == 1){
				continue;
			}
			else if (respon == 0){
				break;
			}
			else{
				std::cout << "pilihan haruslah 1 atau 0" << std::endl;
				break;
			}
		}
	}
}
