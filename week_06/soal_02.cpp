// Programmer : Adam Rahmat Ilahi
// Tuesday, 2 December 2021
//
// soal:
//		Mengkonversi usia yang diinputkan manejadi nama kelompok umur dengan ketentuan :
//		usia 0 -> 1			=	Bayi
//		usia > 1 -> 3		=	Banita
//		usia > 3 -> 5		=	Balita
//		usia > 5 -> 12		=	Anak - anak
//		usia > 12 -> 18		=	Remaja
//		usia > 18 -> 40		=	Dewasa
//		usia > 40			=	Lansia
//
#include <iostream>
int main(void){
	int input;
	std::cout << "Program pengkonversi input usia menjadi nama kelompok umur" << std::endl;
	std::cout << "Input usia : "; std::cin >> input;
	
	// Proses
	if (input < 0 ){
		std::cout << "Input tidak boleh kurang dari 0";
	}
	else {
		std::cout << "Kelompok umur menurut input adalah = ";
		if (input >= 0 && input <= 1){
			std::cout << "Bayi";
		}
		else if (input > 1 && input <= 3){
			std::cout << "Batita";
		}
		else if (input > 3 && input <= 5){
			std::cout << "Balita";
		}
		else if (input > 5 && input <= 12){
			std::cout << "Anak-anak";
		}
		else if (input > 12 && input <= 18){
			std::cout << "Remaja";
		}
		else if (input > 18 && input <= 40){
			std::cout << "Dewasa";
		}
		else if (input > 40){
			std::cout << "manula";
		}
	}
	std::cout << std::endl;
}

