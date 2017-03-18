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

void daftarAgama(){
	buku agama[5];
	
	agama[0].isi_buku("Keajaiban Belajar Al-Qur'an", "Haya Ar-Rosyid", "Meraih kemuliaan bersama Al-Qur'an'", "Darul Wathon Lin Nasyr", "Jakarta", 181, 2007);
	agama[1].isi_buku("Fiqh Ibadah", "H.Tolhah Ma'ruf'", "Panduan lengkap beribadah versi ahlussunnah", "Lembaga Ta'lif Wannasyr'", "Kediri", 332, 2000);
	agama[2].isi_buku("Penghapus Dosa-Dosa Wanita", "Majdi Fathi As-Sayyid", "Menjelaskan penghapus dosa-dosa wanita", "Al-Maktabah At-Taufiqiyah", "Jakarta Timur", 251, 2002);
	agama[3].isi_buku("Menjadi Cendekiawan Muslim", "DR.KH.Zakky Mubarak, MA", "Kuliah islam di perguruan tinggi", "PT Magenta Bhakti Guna", "Jakarta", 351, 2007);
	agama[4].isi_buku("Fiqih Birrul Walidain", "Musthafa bin Al-'A'dawi'", "Menjemput surga dengan bakti orangtua", "Mktabah Makkah", "Jakarta", 290, 2002);
	
	
	cout << "Daftar Buku Agama :" << endl;
	
	
	for (int i = 0; i < sizeof(agama) / sizeof(buku); i++) {
		cout << "\nDaftar yang ke-" << i + 1 << endl;
		agama[i].tampil();
	}
}

void daftarFiksi(){
	buku fiksi[5];
	
	fiksi[0].isi_buku("Dilan", "Pidi Baiq", "Kisah Dilan tahun 1990", "PT Mizan Pustaka", "Bandung", 330, 2014);
	fiksi[1].isi_buku("Dilan 2", "Pidi Baiq", "Kisah Dilan tahun 1990 jilid 2", "PT Mizan Pustaka", "Bandung", 342, 2015);
	fiksi[2].isi_buku("With Julian", "Wulanfadi", "Mereka yang belajar untuk memaafkan dan dimaafkan", "Loveable", "Jakarta Selatan", 363, 2016);
	fiksi[3].isi_buku("FriendZone", "Vanesa Marcella", "Seandainya kamu peka lebih awal", "Bentang Belia", "Yogyakarta", 169, 2016);
	fiksi[4].isi_buku("Rubik's Cube", "Medina Savira", "4 sahabat yang menyukai rubik", "PT Mizan Pustaka", "Bandung", 168, 2011);
	
	
	cout << "Daftar Buku Fiksi :" << endl;
	
	
	for (int i = 0; i < sizeof(fiksi) / sizeof(buku); i++) {
		cout << "\nDaftar yang ke-" << i + 1 << endl;
		fiksi[i].tampil();
	}
}

int main()
{
	daftarAgama();
	daftarFiksi();
	
    return 0;
}
