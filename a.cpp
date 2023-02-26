#include <iostream>
#include <cmath>
using namespace std; 

int main() {
    int nilai;
    
    cout << "Masukkan Nilai Ujian" << endl;
    cin >> nilai;
      
    if (nilai > 90) {
        cout << "Anda mendapatkan A";
    }
        else if (nilai > 80) {
            cout << "Anda mendapatkan B";
        }
        else if (nilai > 70) {
            cout << "Anda mendapatkan C";
        }
        else if (nilai > 60) {
            cout << "Anda mendapatkan D";
        }
        else if (nilai > 50) {
            cout << "Anda mendapatkan E";
        }
        else {
            cout << "Maaf, Anda dinyatakan Gagal";
        }

        
    
    return 0;
}