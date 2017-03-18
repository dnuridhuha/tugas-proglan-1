//agama, fiksi = rahma
//zakki = sejarah, politik
// dwiki = teknologi, classnya
// yulias = psiko ,
// mei = filsa

#include <iostream>
#include <string>

using namespace std;

class buku {
	string judul, penulis, deskripsi, penerbit, kota;
	int hal, tahun;

	public:
		void isi_buku(string judul, string penulis, string deskripsi, string penerbit, string kota, int hal, int tahun){
			this->hal = hal;
			this->penulis = penulis;
			this->penerbit = penerbit;
			this->deskripsi = deskripsi;
			this->judul = judul;
			this->tahun = tahun;
			this->kota = kota;
		}

		void tampil(){
			cout << "Penulis\t\t:" << this->penulis << endl;
			cout << "Tahun\t\t:" << this->tahun << endl;
			cout << "Judul\t\t:" << this->judul << endl;
			cout << "Kota\t\t:" << this->kota << endl;
			cout << "Penerbit\t:" << this->penerbit << endl;
			cout << "Halaman\t\t:" << this->hal << endl;
			cout << "Deskripsi\t:" << this->deskripsi << endl;
		}
};

//Dari Yullius
void daftar_psychology(){
	//membuat variabel class array psychology berisi 5
	buku psychology[5];

	//membuat mengisi array 'psychology'
	psychology[0].isi_buku("Read Your Mind", "Yulius Pratama", "Tutorial membaca pikiran manusia ", "YuliusP", "Blitar", 327, 2020);
	psychology[1].isi_buku("Bimbingan Konseling ", "Fenti Hikmawati ", "Ini buku tentang bibimbingan konseling", "RajaGrafindo Persada", "indonesia", 160, 2012);
	psychology[2].isi_buku("Psychology For Beginner", "Yulius Pratama", "Ini buku bembelajaran Psychology untuk pemula ", "YuliusP", "Blitar", 710, 2030);
	psychology[3].isi_buku("Cara Mengendalikan pikiran manusia", "Yulius Pratama", "Ini buku tentang cara mengedalikan pikiran manusia", "YuliusP", "Blitar", 775, 2027);
	psychology[4].isi_buku("The brain game", "Yulius Pratama", "Ini buku tentang bagaimana mangolah pikiran dengan baik", "YuliusP", "Blitar", 231, 2043);

	cout << "Daftar Buku psychology :" << endl;

	//menapilkan daftar buku psychology
	for (int i = 0; i < sizeof(psychology) / sizeof(buku); i++) {
		cout << "\nDaftar yang ke-" << i + 1 << endl;
		psychology[i].tampil();
	}
}

int main()
{

    cout << "==================================================" << endl;
    cout << "=                 LIST DATA BUKU                 =" << endl;
    cout << "=                   THE DREAMER TEAM             =" << endl;
    cout << "==================================================" << endl;
    cout << endl;
    cout << endl;

   daftar_psychology();

    return 0;
}

