//agama, fiksi = rahma
//zakki = sejarah, politik
// dwiki = teknologi, classnya
// yulias = psiko
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

//Dari Meidiana
void daftarFilsafat(){
	//membuat variabel class array filsafat berisi 6
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

//Dari Dwiki
void daftarTeknologi(){
	//membuat variabel class array teknologi berisi 5
	buku teknologi[5];
	
	//membuat mengisi array 'teknologi'
	teknologi[0].isi_buku("Programing C++", "Dwiki Nuridhuha", "Ini buku tentang pemrograman C++", "Informatika", "Mojokerto", 627, 2018);
	teknologi[1].isi_buku("Become Hakel", "Dwiki Nuridhuha", "Ini buku tentang Hakel", "Informatika", "Mojokerto", 482, 2020);
	teknologi[2].isi_buku("Non Blocking With NodeJS", "Dwiki Nuridhuha", "Ini buku tentang membuat Website", "Informatika", "Mojokerto", 524, 2019);
	teknologi[3].isi_buku("Membuat Hybrid App dengan Ionic", "Dwiki Nuridhuha", "Ini buku tentang membuat Mobile App", "Informatika", "Mojokerto", 675, 2020);
	teknologi[4].isi_buku("Data sains dengan Python", "Dwiki Nuridhuha", "Ini buku tentang programing python", "Informatika", "Mojokerto", 497, 2021);
	
	cout << "Daftar Buku Teknologi :" << endl;
	
	//menapilkan daftar buku teknologi
	for (int i = 0; i < sizeof(teknologi) / sizeof(buku); i++) {
		cout << "\nDaftar yang ke-" << i + 1 << endl;
		teknologi[i].tampil();
	}
}
//Dari Zakki
void daftarSejarah(){
	//membuat variabel class array sejarah berisi 5
	buku sejarah[5];
	
	//membuat mengisi array 'sejarah'
	teknologi[0].isi_buku("Api Sejarah Jilid Kesatu", "Ahmad Mansur Suryanegara", "Ini buku tentang sejarah Indonesia yang sebenarnya", "Salamadani Pustaka Semesta", "Bandung", 584, 2009);
	teknologi[1].isi_buku("Api Sejarah Jilid Kedua", "Ahmad Mansur Suryanegara", "Ini buku tentang sejarah Indonesia yang sebenarnya", "Salamadani Pustaka Semesta", "Bandung", 578, 2010);
	teknologi[2].isi_buku("Menemukan Sejarah:wacana pergerakan Islam di Indonesia", "Ahmad Mansur Suryanegara", "Ini buku tentang wacana pergerakan Islam di Indonesia", "Mizan", "Jakarta", 335, 1995);
	teknologi[3].isi_buku("", "Ahmad Mansur Suryanegara", "Ini buku tentang membuat Mobile App", "Informatika", "Mojokerto", 675, 1995);
	teknologi[4].isi_buku("Pemberontakan Tentara Pembela Tanah Air- Peta di Cileunca Pangalengan Bandung Selatan", "Ahmad Mansur Suryanegara", "Ini buku tentang programing python", "Informatika", "Mojokerto", 497, 1996);
	
	cout << "Daftar Buku Sejarah :" << endl;
	
	//menapilkan daftar buku sejarah
	for (int i = 0; i < sizeof(sejarah) / sizeof(buku); i++) {
		cout << "\nDaftar yang ke-" << i + 1 << endl;
		sejarah[i].tampil();
	}
}
//Dari Zakki
void daftarPolitik(){
	//membuat variabel class array politik berisi 5
	buku politik[5];
	
	//membuat mengisi array 'politik'
	teknologi[0].isi_buku("Programing C++", "Dwiki Nuridhuha", "Ini buku tentang pemrograman C++", "Informatika", "Mojokerto", 627, 2018);
	teknologi[1].isi_buku("Become Hakel", "Dwiki Nuridhuha", "Ini buku tentang Hakel", "Informatika", "Mojokerto", 482, 2020);
	teknologi[2].isi_buku("Non Blocking With NodeJS", "Dwiki Nuridhuha", "Ini buku tentang membuat Website", "Informatika", "Mojokerto", 524, 2019);
	teknologi[3].isi_buku("Membuat Hybrid App dengan Ionic", "Dwiki Nuridhuha", "Ini buku tentang membuat Mobile App", "Informatika", "Mojokerto", 675, 2020);
	teknologi[4].isi_buku("Data sains dengan Python", "Dwiki Nuridhuha", "Ini buku tentang programing python", "Informatika", "Mojokerto", 497, 2021);
	
	cout << "Daftar Buku Politik :" << endl;
	
	//menapilkan daftar buku politik
	for (int i = 0; i < sizeof(politik) / sizeof(buku); i++) {
		cout << "\nDaftar yang ke-" << i + 1 << endl;
		politik[i].tampil();
	}
}

int main()
{
	daftarTeknologi(); //Dari Dwiki
	
	daftarFilsafat(); //Dari Meidiana
	
    return 0;
}

