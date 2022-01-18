// Programmer : Adam Rahmat Ilahi
// Saturday, 8 January 2021
//
// soal:
//		membuat Segitiga dari nilai Input
//

#include <iostream>

int main(void){
	int input;

	std::cout << "Program pencetak segitiga dari nilai input" << std::endl;
	std::cout << "Input Nilai : "; std::cin >> input;

	// proses
	for(int a = 1; a <= input; a++){
		for(int b = 1; b <= a; b++){
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	for(int c = input; c >= 1; c--){
		for(int d = c; d >= 1; d--){
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}
