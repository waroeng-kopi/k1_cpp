// Programmer : Adam Rahmat Ilahi
// Sunday, 12 December 2021
//
// soal:
//		Mencetak tampilan '+' dan "-" sesuai inputan
//		Misal input = 5
//		Output = +-+-+
//
#include <iostream>

int main(void){
	int input;
	std::cout << "Program pencetak '+' dan '-' sesuai input" << std::endl;
	std::cout << "Input : "; std::cin >> input;

	// Proses
	std::cout << "Output : ";
	for (int a = 1; a <= input; a++){
		if ((a % 2) == 0){
			std::cout << "-";
			continue;
		}
		std::cout << "+";
	}
}
