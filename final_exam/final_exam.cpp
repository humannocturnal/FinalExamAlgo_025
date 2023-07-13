#include <iostream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = ;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 0;

void tambahMahasiswa(); {
	int nim;
	string nama;
	cout << "\nEnter the roll number of the mahasiswa: ";
	cin >> nim;
	cout << "\nEnter the name of the mahasiswa: ";
	cin.ignore();
	getline(cin, nm);
	Node* newNode = new Node();
	newNode->noMhs = nim;
	newNode->name = nm;
}

void tampilkanSemuaMahasiswa(); {
	Node* previous, * current;
	previous = current = NULL;
}

void algoritmacariMahasiswaByNIM(); {
	newNode->noMhs = nim;
	newNode->name = nm;
}

void algoritmaSortByTahunMasuk(); {
	Node* current = START;
	while (current->next != NULL && nim > current->next->noMhs)
		current = current->next;
}

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1, Tambah Mahasiswa" << endl;
		cout << "2, Tampilkan Semua Mahasiswa" << endl;
		cout << "3, Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4, Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5, Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();

			switch (pilihan) {
			case '1': 
				q.insert();
				break;
			case '2': 
				q.remove();
				break;
			case '3': 
				q.display();
				break;
			case '4': 
				break;
			case '5': 
				cout << "Terima Kasih! Program selesai." << endl;
				break;
			default: 
				cout << "Pilihan tidak valid. Silahkan coba lagi." << endl;
				break;
			}
		    cout << endl;
} while (pilihan != 5);

return 0;
}

// 2. algoritma yang digunakan adalah double linked list
// 3. stack digunakan untuk mengurutkan data sedangkan queue digunakan untuk mencari data yang di urutkan
// 4. algoritma stack digunakan kerika data yang dimiliki banyak dan bisa dikategorikan
// 5. a. kedalaman yang dimiliki struktur tersebut adalah 5
//    b. postorder yaitu dengan membaca sruktur yang paling atas kemudian sampai yang kebawah