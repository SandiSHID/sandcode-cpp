#include <iostream>
using namespace std;

int main() {
    int tinggi;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++) { 
        for (int j = 1; j <= tinggi - i; j++) { 
            cout << " ";  // Cetak spasi sebelum bintang
        }
        for (int k = 1; k <= (2 * i - 1); k++) { 
            cout << "*";  // Cetak bintang
        }
        cout << endl;
    }
    for (int i = tinggi; i >= 1; i--) { 
        for (int j = tinggi; j >= 1 - i; j--) { 
            cout << " ";  // Cetak spasi sebelum bintang
        }
        for (int k = tinggi; k >= (2 * i - 1); k--) { 
            cout << "*";  // Cetak bintang
        }
        cout << endl;
    }

    return 0;
}
