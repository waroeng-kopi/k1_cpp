// Programmer : Adam Rahmat Ilahi
// Tuesday, 2 December 2021
//
// soal:
//		Membuat Program yang dapat melakukan konversi nilai kode jurusan menjadi nama jurusan
//		kode 1			=	Tehnik Sipil
//		kode 2			=	Tehnik Mesin
//		kode 3			=	tehnik Arsitektur
//		kode 4			=	Tehnik Perkapalan
//		kode 5			=	Tehnik Industri
//		kode 6			=	Tehnik Informasi
//		kode 7			=	Tehnik Lingkungan
//		kode 8			=	Sistem Informasi
//		kode 9			=	Tehnik Geologi
//		kode 10			=	Tehnik Pertambangan
//		 
#include <iostream>
int main(void){
	int input;
	std::cout << "Program Konversi Kode jurusan menjadi nama jurusan" << std::endl;
	std::cout << "#################################" << std::endl;
	std::cout << "# kode 1  # Tehnik Sipil        #" << std::endl;
	std::cout << "# kode 2  # Tehnik Mesin        #" << std::endl;
	std::cout << "# kode 3  # Tehnik Arsitektur   #" << std::endl;
	std::cout << "# kode 4  # Tehnik Perkapalan   #" << std::endl;
	std::cout << "# kode 5  # Tehnik Industri     #" << std::endl;
	std::cout << "# kode 6  # Tehnik Informasi    #" << std::endl;
	std::cout << "# kode 7  # Tehnik Lingkungan   #" << std::endl;
	std::cout << "# kode 8  # Sistem Informasi    #" << std::endl;
	std::cout << "# kode 9  # Tehnik Geologi      #" << std::endl;
	std::cout << "# kode 10 # Tehnik Pertambangan #" << std::endl;
	std::cout << "#################################" << std::endl;
	std::cout << std::endl;
	std::cout << "Inputkan kode yang ingin di konvert : ";
	std::cin >> input;

	// proses
	if (input > 0 && input <= 10 ){
		std::cout << "Nama jurusan : ";
		switch(input){
			case 1 :
				std::cout << "Tehnik Sipil";
				break;

			case 2 :
				std::cout << "Tehnik Mesin";
				break;

			case 3 :
				std::cout << "Tehnik Arsitektur";
				break;

			case 4 :
				std::cout << "Tehnik Perkapalan";
				break;

			case 5 :
				std::cout << "Tehnik Industri";
				break;

			case 6 :
				std::cout << "Tehnik Informasi";
				break;

			case 7 :
				std::cout << "Tehnik Lingkungan";
				break;

			case 8 :
				std::cout << "Sistem Informasi";
				break;

			case 9 :
				std::cout << "Tehnik Geologi";
				break;

			case 10 :
				std::cout << "Tehnik Pertambangan";
				break;
		}
	}
	else {
		std::cout << "Input kode tidak boleh melebihi 10 atau kurang dari 1";
	}
	std::cout << std::endl;
}

