// Programmer : Adam Rahmat Ilahi
// Tuesday, 11 January 2022
//
// Soal:
//		Rancanglah program c++ untuk membuat menu pilihan dimana pilihanya adalah :
//		1. Mencetak tampilan berdasarkan inputan
//			Misal : Input => x = 5
//					Output => 1 2 3 4 5
//							  1 2 3 4 
//							  1 2 3
//							  1 2
//							  1
//							  1 2
//							  1 2 3
//							  1 2 3 4
//							  1 2 3 4 5
//
//		2. Mencetak Deret Fibonacci sebanyak N suku
//			Misal : input => N = 7
//					Output => 1 1 2 3 5 8 13
//
//		CATATAN
//		~> Implementasikan konsep SUB PROSES
//		~> Ada fasilitas U/ Mengulang Menu
//		~> Ada fasilitas U/ keluar dari program utama
//

#include <iostream> 

void menu(){
	std::cout << "Menu Program Pilihan : " << std::endl;
	std::cout << "1. Mencetak Angka" << std::endl;
	std::cout << "2. Deret Fibonarcci" << std::endl;
	std::cout << "Pilihan anda = ";
}

int input(){
	int input;
	std::cin >> input;
	return input;
}

void pilihan_1(){
	int x, diversion;
	
	std::cout << "Mencetak tampilan berdasarkan inputan" << std::endl;
	std::cout << "Input = "; 
	x = input();
	diversion = x;
	
	// proses
	while(true){
		for(int a = 1; a < x; a++){
			for(int b = 1; b <= diversion; b++){
				std::cout << b << " ";
			}
			diversion--;
			std::cout << std::endl;
		}

		for(int c = 1; c <= x; c++){
			for(int d = 1; d <= c ; d++){
				std::cout << d << " ";
			}
			std::cout << std::endl;
		}
		break;
	}
}

void pilihan_2(){
	int n1, n2, N, diversion;

	std::cout << "Mencetak deret Fibonacci sebanyak input N suku" << std::endl;
	std::cout << "Input = ";
	N = input();
	n1 = 1;
	n2 = 1;
	diversion = 0;

	// proses
	for (int a = 1; a <= N; a++){
		if (a == 1){
			std::cout << n1 << " ";
			continue;
		}
		if (a == 2){
			std::cout << n2 << " ";
			continue;
		}
		diversion = n1 + n2;
		n1 = n2;
		n2 = diversion;
		std::cout << n2 << " ";
	}
	std::cout << std::endl;
}

int main(void){
	int INPUT;
	char input_char;

	// perulangan
	while(true){
		menu();
		
		INPUT = input();
		// opsi pilihan
		if(INPUT == 1){
			pilihan_1();
		}
		else if(INPUT == 2){
			pilihan_2();
		}
		else{
			std::cout << "Pilihan hanya bisa antara 1 - 2" << std::endl;
		}

	// continue or stop
		std::cout << "lanjut ? (y / n) : ";
		std::cin >> input_char;
		if(input_char == 'y'){
			continue;
		}
		else if(input_char == 'n'){
			break;
		}
	}
	
}
