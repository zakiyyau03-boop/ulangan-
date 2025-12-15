#include <iostream>
using namespace std;

int main() {
    int tinggi;
    cout << "masukkan tinggi segitiga: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++) {
        
        for (int s = 1; s <= tinggi - i; s++) {
            cout << " ";
        }

       
        for (int b = 1; b <= (2 * i - 1); b++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}