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

//Dari Meidiana
void daftarFilsafat(){
	//membuat variabel class array filsafat berisi 5
	buku filsafat[6];
	
	//membuat mengisi array 'filsafat'
	filsafat[0].isi_buku("Sejarah Filsafat Barat", "George Russel", "Ini buku tentang filsafat orang barat", "Indonesia Merdeka", "Jakarta", 500, 2005);
	filsafat[1].isi_buku("Menelusuri Pragmatisme", "Anastasia Jessica", "Ini buku tentang Pemikiran Pragmatisme", "Gramedia", "Bandung", 350, 2016);
	filsafat[2].isi_buku("Tema-Tema Eksistensialisme", "Emanuel Prasetyono", "Ini buku tentang Pengantar Eksistensialisme", "Widya Mandala", "Surabaya", 675, 2011);
	filsafat[3].isi_buku("Filsafat Berpikir Orang Timur", "Konrad", "Ini buku tentang cara berpikir manusia", "Merdeka", "Madiun", 958, 2020);
	filsafat[4].isi_buku("Pengembangan Metode Ilmiah", "Suwardi Endraswara", "Ini buku tentang pengembangan ilmu", "Gramedia", "Jakarta", 800, 2017);
	filsafat[5].isi_buku("Filsafat Ilmu,Teori dan Aplikasi", "Jack Dawson", "Ini buku tentang pengamatan bahasa yang mudah dicerna", "Cahaya", "Bogor", 775, 2014);
	
	cout << "Daftar Buku Filsafat :" << endl;
	
	//menapilkan daftar buku filsafat
	for (int i = 0; i < sizeof(filsafat) / sizeof(buku); i++) {
		cout << "\nDaftar yang ke-" << i + 1 << endl;
		filsafat[i].tampil();
	}
}

int main()
{
	daftarFilsafat(); //Dari Meidiana
	
    return 0;
}
