// Programmer : Adam Rahmat Ilahi
// Tuesday, 9 November 2021
//
/*
soal :  
    1. Menghitung luas segitiga berikut : 
        alas   : 20 cm
        tinggi : 25 cm

    2. Mencetak tampilan data (nilai / bilangan) yang di inputkan

    3. Buatlah program pembalik nilai yang dapat menukar nilai
        variabel_a ke variabel_b. contoh :
        variabel_a = 10
        variabel_b = 20
        dibalik menjadi
        variabel_a = 20
        variabel_b = 10

    4. Menginputkan 3 buah bilangan, kemudian lakukan 
        proses penjumlahan, pengurangan, perkalian, dan pembagian 
        pada ke-3 bilangan tersebut.
*/

#include <iostream>

int hasil;
int penjumlahan(int bil_1, int bil_2, int bil_3);
int pengurangan(int bil_1, int bil_2, int bil_3);
int perkalian(int bil_1, int bil_2, int bil_3);
int pembagian(int bil_1, int bil_2, int bil_3);

int soal_1() {
    // rumus segitiga langsung diproses pada saat melakukan output
    return 0.5 * 25 * 20;
}

void soal_3(void) {
    // soal nomer 3
    int var_a, var_b, var_c;
    std::cout << "3. program penukar nilai data bertipe int" << std::endl;
    std::cout << "inputkan nilai var_a : ";
    std::cin >> var_a;
    std::cout << "inputkan nilai var_b : ";
    std::cin >> var_b;
    std::cout << std::endl;
    std::cout << "Nilai variabel Setelah dibalik" << std::endl;

    // proses untuk melakukan pembalikan nilai
    var_c = var_a;
    var_a = var_b;
    var_b = var_c;
    std::cout << "nilai var_a : " << var_a << std::endl;
    std::cout << "nilai var_b : " << var_b << std::endl;
    std::cout << std::endl;
}

void soal_4(void) {
    // soal nomer 4
    int bil_1, bil_2, bil_3;
    std::cout << "Program penjumlahan, pengurangan, perkalian, dan pembagian terhadap 3 bilangan" << std::endl;
    std::cout << "Inputkan bilangan ke-1 : "; std::cin >> bil_1;
    std::cout << "Inputkan bilangan ke-2 : "; std::cin >> bil_2;
    std::cout << "Inputkan bilangan ke-3 : "; std::cin >> bil_3;
    std::cout << std::endl;

    std::cout << "Silahkan pilih opsi berikut : " << std::endl;
    std::cout << "1. Jumlahkan semua nilai" << std::endl;
    std::cout << "2. Kurangi semua nilai" << std::endl;
    std::cout << "3. Kalikan semua" << std::endl;
    std::cout << "4. Bagikan semua" << std::endl;
    int input_pilihan;
    std::cout << "Pilih input yang ingin dilakukan : "; std::cin >> input_pilihan;
    
    // percabangan
    if (input_pilihan == 1){
        std::cout << "Hasil dari penjumlahan semua nilai : " 
        << penjumlahan(bil_1, bil_2, bil_3) << std::endl;
    }
    else if (input_pilihan == 2){
        std::cout << "Hasil dari Pengurangan semua nilai : "
        << pengurangan(bil_1, bil_2, bil_3) << std::endl;
    }
    else if (input_pilihan == 3){
        std::cout << "Hasil dari perkalian semua nilai : "
        << perkalian(bil_1, bil_2, bil_3) << std::endl;
    }
    else if (input_pilihan == 4){
        std::cout << "Hasil dari pembagian semua nilai : "
        << pembagian(bil_1, bil_2, bil_3) << std::endl;
    }
    else{
        std::cout << "Input haruslah antara (1 - 4)" << std::endl;
    }
}

int main(void){
    
    // menu
    int opsi_menu;
    while (true) {
        std::cout << "Program soal-jawab ALPRO 9/11/2021" << std::endl
            << "soal nomer : 1" << std::endl
            << "soal nomer : 2" << std::endl
            << "soal nomer : 3" << std::endl
            << "soal nomer : 4" << std::endl
            << "keluar     : 5" << std::endl;
        std::cout << "opsi untuk melihat soal & jawaban (1 - 5) : ";
        std::cin >> opsi_menu;
        system("clear");
        if (opsi_menu == 1){
            // soal nomer 1
            std::cout << "1. Perogram penghitung luas segitiga " << std::endl;
            std::cout << "tinggi segitiga : 25 " << std::endl;
            std::cout << "alas segitiga   : 20 " << std::endl;
            std::cout << "Luas segitiga : " << soal_1() << std::endl;
            std::cout << std::endl;
        }

        else if (opsi_menu == 2){
            // soal nomer 2
            int input_nilai;

            std::cout << "2. Progam untuk mencetak nilai yang telah diinputkan" << std::endl;
            std::cout << "input data berupa nilai bilangan : "; std::cin >> input_nilai;
            std::cout << "data yang telah diinputkan bernilai : " << input_nilai << std::endl;
            std::cout << std::endl;
        }

        else if (opsi_menu == 3){
            soal_3();
            std::cout << std::endl;
        }

        else if (opsi_menu == 4){
            soal_4();
            std::cout << std::endl;
        }

        else if (opsi_menu == 5){
            std::cout << "Terimakasih" << std::endl;
            std::cout << std::endl;
            break;
        }

        else {
            std::cout << "input harus berupa angka (1 - 5)" << std::endl;
            std::cout << std::endl;
        }

    }          
}

int penjumlahan(int bil_1, int bil_2, int bil_3){
    hasil = bil_1 + bil_2 + bil_3;
    return hasil;
}

int pengurangan(int bil_1, int bil_2, int bil_3){
    hasil = bil_1 - bil_2 - bil_3;
    return hasil;
}

int perkalian(int bil_1, int bil_2, int bil_3){
    hasil = bil_1 * bil_2 * bil_3;
    return hasil;
}

int pembagian(int bil_1, int bil_2, int bil_3){
    hasil = bil_1 / bil_2 / bil_3;
    return hasil;
}