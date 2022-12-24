# Ujian Akhir Semester 
<br>Mata Kuliah 	: Dasar Pemograman
<br> Nama		: Febryo Fibonacci Amadeo
<br>NIM		: 1227050045
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
Program dari source code adalah untuk mengimplementasikan deret aritmatika dengan menggunakan array dua dimensi. Dengan tujuan utamanya mencari nilai yang tidak habis dibagi dengan angka 3,5, dan 7. Algoritma dari program ini yaitu : 
<ol>
    <li>User menginputkan berapa banyak baris pada array mulai dari range 0-20.</li>
    <li>User menginputkan berapa banyak baris pada array mulai dari range 0-20.</li>
    <li>User menginputkan satu persatu nilai array,dimulai dari baris 1 dan kolom 1.</li>
    <li>Jika sudah,Nilai dalam array tersebut di tampilkan sesuai aturan matriks.</li>
    <li>Kemudian nilai divalidasi kembali apakah nilai tersebut habis dibagi 3,5 dan 7.</li>
    <li>Apabila nilai tadi habis dibagi 3,5 dan 7, maka nilai tidak akan ditampilkan. apabila tidak habis. tampilkan kembali kepada user</li>
</ol> 

## Source Code
<code>

#include <iostream>

#include <conio.h>

using namespace std;

int main () {
    
    // Mencari nilai yang tidak bisa di bagi 3,5,7
    int nRow, nCol, res;
	int num[nRow][nCol];
	
	cout << "\n\nMENCARI NILAI YANG TIDAK HABIS DIBAGI DENGAN 3, 5, 7\n";
	cout << "\n" << "Masukkan banyak baris: "; cin >> nRow;
	cout << "\n" << "Masukkan banyak kolom: "; cin >> nCol;
	
	
	// input
	for (i = 1; i <= nRow; i++) {
		for (j = 1; j <= nCol; j++) {
			cout << "Num[" << i << "." << j << "]: ";
			cin >> num[i][j];
		}
	}
	
	// proses
	for (i = 1; i <= nRow; i++) {
		for (j = 1; j <= nCol; j++) {
			if (num[i][j] % 3 != 0 && num[i][j] % 5 != 0 && num[i][j] % 7 != 0) {
				cout << "Bilangan yang tidak habis dibagi 3, 5, 7: " << num[i][j] << endl;
			} 
		}
	}
    
    getch();
}
</code>

## Output
