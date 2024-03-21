//1.bubblesort akan melakukan scan secara berulang ulang untuk membandingkan elemen yang berurutan,
// akan terjadi swapping jika ada urutan yang salah, buble sort mengurutkan dari kecil ke besar
//2.prosses dari algoritma shell sort adalah dengan membagi elemen menjadi lebih kecil,
// kemudian diurutkan menggunakan algoritma insertion sort
//3.algoritma yang cocok adalah insertion sort, 
// karna jika sudah ada yang berurutan maka elemen yang ditukar hanya sedikit

//4.
#include <iostream>
using namespace std;
int wildan[45];
int n;

void input() {
	while (true) {
		cout << "Masukan Banyak elemen Pada Array :";
		cin >> n;
		if (n <= 45)
			break;
		else {
			cout << "\nArray hanya dapat menampung 45 elemen\n";
		}
	}
	cout << endl;
	cout << "=====\n";
	cout << "Masukkan Elemen Array\n";
	cout << "=====\n";

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> wildan[i];
	}
}

void selectionSort() {
	int i, temp, j;

	for (i = 1; i <= n - 1; i++) {
		temp = wildan[i];

		j = i - 1;

		while (j >= 0 && wildan[j] > temp)
		{
			wildan[j + 1] = wildan[j];
			j--;
		}
		wildan[j + 1] = temp;

	}

}
void display() {
	cout << endl;
	cout << "=====" << endl;
	cout << "element array yang telah tersusun" << endl;
	cout << "=====" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << wildan[j];
		if (j < n - 1) {
			cout << "-->";
		}
			
	}
	cout << endl;
	cout << endl;
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main()
{
	input();
	selectionSort();
	display();
	system("pause");
	return 0;
}


