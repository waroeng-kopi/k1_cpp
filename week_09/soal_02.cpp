// Programmer : Adam Rahmat Ilahi
// Monday, 3 January 2022
//
// soal:
//		Menginputkan 3 bilangan, kemudian 
//		tentukan bilangan genap & ganjil
//		dengan menggunakan subprogram
//

#include <iostream>

int input(){
	int Input;

	std::cin >> Input;
	return Input;
}

int main(void){
	std::cout << "Program Penetu bilangan Genap & Ganjil" << std::endl;

	int bil[3];

	// input 3 bilangan
	for(int a = 0; a < 3; a++){
		std::cout << "Input bilangan ke " << a+1 << " : ";
		bil[a] = input();
	}

	// Proses menentukan Ganjil Genap
	for(int a = 0; a < 3; a++){
		if((bil[a] % 2) == 0){
			std::cout << bil[a] 
				<< " adalah bilangan Genap" 
				<< std::endl;
		}
		else {
			std::cout << bil[a]
				<< " adalah bilangan Ganjil"
				<< std::endl;
		}
	}
}
