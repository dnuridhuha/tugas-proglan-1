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
// Dari Yulius
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

int main()
{
	cout << "==================================================" << endl;
    cout << "=                 LIST DATA BUKU                 =" << endl;
    cout << "=                   THE DREAMER TEAM             =" << endl;
    cout << "==================================================" << endl;
    cout << endl;
    cout << endl;
	
	daftarTeknologi(); //Dari Dwiki
	
	daftarFilsafat(); //Dari Meidiana
	
	daftar_psychology(); // Dari Yulius
	
	
	
    return 0;
}

