// Programmer : Adam Rahmat Ilahi
// Tuesday, 2 December 2021
//
// soal:
//		rancanglah program yang dapat mengkonversi nilai menjadi hurufu dengan ketentuan :
//			E	= 0 -> 40,5
//			D	= 40,6 -> 55,5
//			C	= 55,6 -> 60,5
//			B	= 60,6 -> 70,5
//			B+	= 70,6 -> 80,5
//			A	= 80,6 -> 100
//
#include <iostream>
int main(void){
	float input_nilai,nilai;
	std::cout << "Program Pengkonvert nilai angka menjadi huruf" << std::endl;
	std::cout << "Inputkan nilai : "; std::cin >> input_nilai;

	// proses
	if (input_nilai < 0 || input_nilai > 100){
		std::cout << "input tidak boleh kurang dari 0 dan lebih dari 100" << std::endl;
	}
	else {
		std::cout << "Convert Nilai dari = " << input_nilai << std::endl
			<< "adalah = ";
		if (input_nilai >= 0 && input_nilai <= 40.5){
			std::cout << "E";
		}
		else if (input_nilai >= 40.6 && input_nilai <= 55.5){
			std::cout << "D";
		}
		else if (input_nilai >= 55.6 && input_nilai <= 60.5){
			std::cout << "C";
		}
		else if (input_nilai >= 60.6 && input_nilai <= 65.5){
			std::cout << "C+";
	   	}
        else if (input_nilai >= 65.6 && input_nilai <= 70.5){
			std::cout << "B";
		}
		else if (input_nilai >= 70.6 && input_nilai <= 80.5){
			std::cout << "B+";
		}
		else if (input_nilai >= 80.6 && input_nilai <= 100){
			std::cout << "A";
		}
		std::cout << std::endl;
	}
}

