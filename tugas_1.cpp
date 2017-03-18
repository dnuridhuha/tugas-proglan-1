//agama, fiksi = rahma
//zakki = sejarah, politik
// dwiki = teknologi, classnya
// yulias = psiko ,
// mei = filsa

#include <iostream>
#include <string>

using namespace std;

class buku {
	string judul, penulis, deskripsi, penerbit;
	int hal, tahun;

	public:
		void isi_buku(string judul, string penulis, string deskripsi, string penerbit, int hal, int tahun){
			this->hal = hal;
			this->penulis = penulis;
			this->penerbit = penerbit;
			this->deskripsi = deskripsi;
			this->judul = judul;
			this->tahun = tahun;
		}

		void tampil(){
			cout << "Judul\t:" << this->judul << endl;
			cout << "Halaman\t:" << this->hal << endl;
			cout << "Penerbit\t:" << this->penerbit << endl;
			cout << "Penulis\t:" << this->penulis << endl;
			cout << "Deskripsi\t:" << this->deskripsi << endl;
		}
};

int main()
{

    cout << "==================================================" << endl;
    cout << "=                 LIST DATA BUKU                 =" << endl;
    cout << "=                   THE DREAMER TEAM             =" << endl;
    cout << "==================================================" << endl;
    cout << endl;
    cout << endl;
    cout << "=                 The Technology book            =" << endl;
    cout << endl;
	buku teknologi[2];

	teknologi[0].isi_buku("Program C++", "Dwiki", "Ini buku tentang pemrograman C++", "Informatika", 627, 2018);
	teknologi[0].tampil();

	cout << endl;

	teknologi[1].isi_buku("Become Hakel", "Dwiki", "Ini buku tentang Hakel", "Informatika", 482, 2020);
	teknologi[1].tampil();

    cout << endl;
    cout << "=                 The Psychology book            =" << endl;
    cout << endl;

	buku psychology[2];

	psychology[0].isi_buku("Belajar Bahasa Tubuh", "Yulius", "Buku ini mengajarkan cara beljar bahasa tubuh yang baik  ", "YuliusPratama", 158, 2030);
	psychology[0].tampil();

	cout << endl;

	psychology[1].isi_buku(" Read Mind ", "Yulius", "Ini buku tentang bagaimana membaca pikiran Manusia ", "YuliusPratama", 382, 2029);
	psychology[1].tampil();
    return 0;
}

