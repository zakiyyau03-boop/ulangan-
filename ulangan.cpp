#include <iostream>
using namespace std;

int main() {
    float harga, diskon, totalDiskon, totalBayar;

    
    cout << "SELAMAT DATANG DI TOKO UNISBA BLITAR" << endl;
    cout << "===================================" << endl << endl;
   
    cout << "Silakan masukkan:" << endl;
    cout << "Masukkan harga barang  (Rp) = ";
    cin >> harga;

    cout << "diskon barang  (%) =  ";
    cin >> diskon;

   
    totalDiskon = harga * diskon / 100;
    totalBayar = harga - totalDiskon;

    

    cout << "hasil :" << endl;

    cout << endl;
    cout << "Jumlah diskon           = Rp " << totalDiskon << endl;
    cout << "harga setelah diskon    = Rp " << totalBayar << endl;

    return 0;
}