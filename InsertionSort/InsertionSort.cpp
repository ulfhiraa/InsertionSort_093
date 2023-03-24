#include <iostream>
using namespace std;

int arr[20];			// membuat array dengan panjang data 20
int n;					// membuat variable inputan n

void input() {		// Procedure Input
	while (true) {
		cout << "Masukkan jumlah data pada array : "; // Membuat Inputan jumlah element Array
		cin >> n;									// Memanggil variable inputan n

		if (n <= 20) {								// membuat kondisi n tidak lebih dari 20
			break;
		}
		else 
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen.\n"; // Menampilkan pesan jika data lebih dari 20
		}
	} 
	cout << endl;								// Membuat jarak per baris program
	cout << "======================" << endl;   // Membuat tampilan susunan data element array
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++)					// Menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}

void insertionsort() {    // Menambahkan prosedur Insertion Sort
	int temp;			// Membuat variable data temporer atau penyimpanan sementara
	int j;				// Membuat variable j sebagai penanda

	for (int i = 1; i < n; i++) {  // 1. Looping dengan dimulai dari 1 hingga n-1

		temp = arr[i];   // 2. Simpan nilai arr[i] ke variable sementara temp

		j = i - 1;		// 3. Setting nilai j sama dengan i-1;

		while (j >= 0 && arr[j] > temp) // 4. Looping while dimana nilai j lebih besar sama dengan 0 dan 
										// arr[j] lebih besar daripada temp
		{
			arr[j + 1] = arr[j];		// a. simpan arr[j] ke dalam nilai variable arr[j+1]
			j--;						// b. Decrement nilai j by 1 
		}
		arr[j + 1] = temp;

		cout << "\nPass " << i << ": ";
		for (int k = 0; k < n; k++) {
			cout << arr[k] << " ";
		}
	}
}

void display() {
	cout << "\n===============================" << endl;
	cout << "Element Array Yang Telah Tersusun" << endl;
	cout << "=================================" << endl;

	for (int j = 0; j < n; j++) {
		cout << arr[j] << " ";
	}
}

int main()
{
	input();
	insertionsort();
	display();
}