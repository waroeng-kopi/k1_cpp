// Programmer : Adam Rahmat Ilahi
// Sunday, 14 November 2021
// 
// soal :
//          Sebuah toko elektronik "Senang selalu" memberi voucher belanja bagi 
//      customernya dengan ketentuan sbb :
//      - Pembelian Rp.300.000,- sampai Rp.500.000,-
//          -> Mendapatkan voucher belanja Rp.50.000,-
//      - Pembelian diatas Rp.500.000,- sampai Rp.1.000.000,-
//          -> Mendapatkan voucher belanja Rp.150.000,-
//      - Pembelian diatas Rp.1.000.000,- sampai Rp.2.500.000,-
//          -> Mendapatkan voucher belanja Rp.250.000,-
//      - Pembelian diatas 2.500.000,-
//          -> Mendapatkan voucher "Buy 1 get 1 produk dibawah Rp.350.000,-"
//      Inputkan jumlah pembelian customer lalu tentukan voucher apa yang 
//      diperoleh customer tersebut.
//
#include <iostream>
void voucher(int input_jumlah){
    if (input_jumlah == 300000 && input_jumlah <= 500000){
        std::cout << "Selamat anda mendapatkan voucher belanja senilai Rp.50.000,-" << std::endl;
    }
    else if (input_jumlah > 500000 && input_jumlah <= 1000000){
        std::cout << "Selamat anda mendapatkan voucher belanja senilai Rp.150.000,-" << std::endl;
    }
    else if (input_jumlah > 1000000 && input_jumlah <= 2500000){
        std::cout << "Selamat anda mendapatkan voucher belanja senilai Rp.250.000,-" << std::endl;
    }
    else if (input_jumlah > 2500000){
        std::cout << "Selamat anda mendapatkan voucher belanja Buy 1 get 1 produk dibawah Rp.350.000,-" << std::endl;
    }
    else {
        std::cout << "Nominal jumlah pembelian tidak mencukupi untuk mendapatkan voucher" << std::endl;
    }
}

int main(void){
    int input_jumlah;
    std::cout << "Program pemberi voucher belanja toko elektronik Senang Selalu" << std::endl;
    std::cout << "Silahkan menginputkan jumlah pembelian : "; std::cin >> input_jumlah;

    // proses
    voucher(input_jumlah);
    std::cout << std::endl << std::endl; 
}