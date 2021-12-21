// Programmer : Adam Rahmat Ilahi
// Tuesday, 21 December 2021
//
// quest:
//		Menginputkan nilai IPK mahasiswa pada 2 fakultas, 
//		dimana masing masing fakultas terdapat 3 jurusan 
//		& masing masing jurusan terdapat 4 mahasiswa 
//		Kemudian tentukan nilai IPK terbesar & terkecil
//

#include <iostream>

int main(void){
	std::cout << "Program menentukan IPK terbesar dan terkecil"
	<< "berdasarkan inputan nilai IPK mahasiswa" 
	<< std::endl << std::endl;
	
	float ipk[2][3][4], besar, kecil;

	int fakultas, jurusan, mhs;

	// proses looping for input 
	for(fakultas = 0; fakultas < 2; fakultas++){
		for(jurusan = 0; jurusan < 3; jurusan++){
			for(mhs = 0; mhs < 4; mhs++){
				
				// input proses
				std::cout << "Nilai IPK mahasiswa " << mhs + 1 
					<< " jurusan " << jurusan + 1 << " fakultas " 
					<< fakultas + 1 << " : ";
				std::cin >> ipk[fakultas][jurusan][mhs];
			}
		}
	}
	
	// proses looping for compare
	for(fakultas = 0; fakultas < 2; fakultas++){
		for(jurusan = 0; jurusan < 3; jurusan++){
			for(mhs = 0; mhs < 4; mhs++){
				
				// proses compare
				kecil = ipk[0][0][0];
				besar = ipk[0][0][0];
				if(kecil > ipk[fakultas][jurusan][mhs]){
					kecil = ipk[fakultas][jurusan][mhs];
				}
				if(besar < ipk[fakultas][jurusan][mhs]){
					besar = ipk[fakultas][jurusan][mhs];
				}
			}
		}
	}

	std::cout << "IPK terbesar = " << besar << std::endl;
	std::cout << "IPK terkecil = " << kecil << std::endl;

}
