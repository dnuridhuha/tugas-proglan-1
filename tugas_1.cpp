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

//Dari Rahma
void daftarAgama(){
	//membuat variabel class array Agama berisi 5
	buku agama[5];
	
	//membuat mengisi array 'Agama'
	agama[0].isi_buku("Keajaiban Belajar Al-Qur'an", "Haya Ar-Rosyid", "Meraih kemuliaan bersama Al-Qur'an'", "Darul Wathon Lin Nasyr", "Jakarta", 181, 2007);
	agama[1].isi_buku("Fiqh Ibadah", "H.Tolhah Ma'ruf'", "Panduan lengkap beribadah versi ahlussunnah", "Lembaga Ta'lif Wannasyr'", "Kediri", 332, 2000);
	agama[2].isi_buku("Penghapus Dosa-Dosa Wanita", "Majdi Fathi As-Sayyid", "Menjelaskan penghapus dosa-dosa wanita", "Al-Maktabah At-Taufiqiyah", "Jakarta Timur", 251, 2002);
	agama[3].isi_buku("Menjadi Cendekiawan Muslim", "DR.KH.Zakky Mubarak, MA", "Kuliah islam di perguruan tinggi", "PT Magenta Bhakti Guna", "Jakarta", 351, 2007);
	agama[4].isi_buku("Fiqih Birrul Walidain", "Musthafa bin Al-'A'dawi'", "Menjemput surga dengan bakti orangtua", "Mktabah Makkah", "Jakarta", 290, 2002);
	
	
	cout << "Daftar Buku Agama :" << endl;
	
	//menapilkan daftar buku Agama
	for (int i = 0; i < sizeof(agama) / sizeof(buku); i++) {
		cout << "\nDaftar yang ke-" << i + 1 << endl;
		agama[i].tampil();
	}
}

//Dari Rahma
void daftarFiksi(){
	//membuat variabel class array Fiksi berisi 5
	buku fiksi[5];
	
	//membuat mengisi array 'Fiksi'
	fiksi[0].isi_buku("Dilan", "Pidi Baiq", "Kisah Dilan tahun 1990", "PT Mizan Pustaka", "Bandung", 330, 2014);
	fiksi[1].isi_buku("Dilan 2", "Pidi Baiq", "Kisah Dilan tahun 1990 jilid 2", "PT Mizan Pustaka", "Bandung", 342, 2015);
	fiksi[2].isi_buku("With Julian", "Wulanfadi", "Mereka yang belajar untuk memaafkan dan dimaafkan", "Loveable", "Jakarta Selatan", 363, 2016);
	fiksi[3].isi_buku("FriendZone", "Vanesa Marcella", "Seandainya kamu peka lebih awal", "Bentang Belia", "Yogyakarta", 169, 2016);
	fiksi[4].isi_buku("Rubik's Cube", "Medina Savira", "4 sahabat yang menyukai rubik", "PT Mizan Pustaka", "Bandung", 168, 2011);
	
	
	cout << "Daftar Buku Fiksi :" << endl;
	
	//menapilkan daftar buku Fiksi
	for (int i = 0; i < sizeof(fiksi) / sizeof(buku); i++) {
		cout << "\nDaftar yang ke-" << i + 1 << endl;
		fiksi[i].tampil();
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
	
	daftarAgama(); // Dari Rahma
	
	daftarFiksi(); // Dari Rahma
	
	daftar_psychology(); // Dari Yulius
	
    	return 0;
}
