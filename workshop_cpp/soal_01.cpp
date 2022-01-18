// rogrammer : Adam Rahmat Ilahi
// Saturday, 8 January 2021
//
// soal:
//		Buatlah Program penilaian dengan hint:
//		- Nilai 81 - 100 = A
//		- Nilai 71 - 80 = B
//		- Nilai 61 - 70 = C
//		- Nilai 41 - 60 = D
//		- Nilai 00 - 40 = E
//

#include <iostream>

int main(void){
	std::cout << "Program Penilaian, Silahkan Input Nilai antara 1 - 100" << std::endl;

	int input;

	std::cout << "Input Nilai : "; std::cin >> input;

	// proses
	if (input >= 81 && input <= 100){
		std::cout << "Nilai adalah A" << std::endl;
	}

	else if (input >= 71 && input <= 80){
		std::cout << "Nilai adalah B" << std::endl;
	}

	else if (input >= 61 && input <= 70){
		std::cout << "Nilai adalah C" << std::endl;
	}

	else if (input >= 41 && input <= 60){
		std::cout << "Nilai adalah D" << std::endl;
	}

	else if (input >= 0 && input <= 40){
		std::cout << "Nilai adalah E" << std::endl;
	}
}

