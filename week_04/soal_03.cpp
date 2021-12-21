// Programmer : Adam Rahmat Ilahi
// Saturday, 11 Desember 2021
//
// soal:
//		Mencetak bilangan bilangan kelipatan 3 dan 4, antara x sampai y
//		(syarat x harus lebih kecil dari y)
//
#include <iostream>

int main(void){
	std::cout << "Program Pencetak nilai kelipatan 3 dan 4" << std::endl;
	int x, y;

	// deklarasi nilai random dengan syarat sesuai soal
	x = 20;
	y = 40;

	// proses
	for (int a = x; a <= y; a++){
		if((a % 3) == 0){
			std::cout << a << " adalah bilangan kelipatan 3" << std::endl;
		}
		if ((a % 4) == 0){
			std::cout << a << " adalah bilangan kelipatan 4" << std::endl;
		}
		else {
			continue;
		}
	}
}
