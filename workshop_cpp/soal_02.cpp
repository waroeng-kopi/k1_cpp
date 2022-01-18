// Programmer : Adam Rahmat Ilahi
// Saturday, 8 January 2021
//
// soal:
//		buatlah Program FPB
//

#include <iostream>

int main(void){
	int input1, input2;

	std::cout << "Program Penentu FPB" << std::endl;

	std::cout << "Input angka ke-1 :"; std::cin >> input1;
	std::cout << "Input angka ke-2 :"; std::cin >> input2;

	// proses
	while(input1 != input2){
		if(input1 > input2){
			input1 = input1 - input2;
			std::cout << input1 << std::endl;
		}
		else{
			input2 = input2 - input1;
			std::cout << input2 << std::endl;
		}
	}
}
