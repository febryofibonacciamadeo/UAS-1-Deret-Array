#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    // Mencari nilai yang tidak bisa di bagi 3,5,7
    int row, col, res, i, j;
    int a[10][10];

    cout << "\n\nMENCARI NILAI YANG TIDAK HABIS DIBAGI DENGAN 3, 5, 7\n";
    cout << "\n" << "Masukkan banyak baris: "; cin >> row;
    cout << "\n" << "Masukkan banyak kolom: "; cin >> col;


    // input
    for (i = 1; i <= row; i++) {
        for (j = 1; j <= col; j++) {
            cout << "Masukan Angka[" << i << "][" << j << "]: ";cin >> a[i][j];
        }
    }

    // proses
    for (i = 1; i <= row; i++) {
        for (j = 1; j <= col; j++) {
            if (a[i][j] % 3 != 0 && a[i][j] % 5 != 0 && a[i][j] % 7 != 0) {
                cout << "Bilangan yang tidak habis dibagi 3, 5, 7: " << a[i][j] << endl;
            } 
        }
    }

    getch();

}