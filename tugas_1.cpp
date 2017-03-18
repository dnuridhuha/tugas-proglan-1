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
}//Dari Zakki
void daftarSejarah(){
	//membuat variabel class array sejarah berisi 5
	buku sejarah[5];

	//membuat mengisi array 'sejarah'
	sejarah[0].isi_buku("Api Sejarah Jilid Kesatu", "Ahmad Mansur Suryanegara", "Ini buku tentang sejarah Indonesia yang sebenarnya", "Salamadani Pustaka Semesta", "Bandung", 584, 2009);
	sejarah[1].isi_buku("Api Sejarah Jilid Kedua", "Ahmad Mansur Suryanegara", "Ini buku tentang sejarah Indonesia yang sebenarnya", "Salamadani Pustaka Semesta", "Bandung", 578, 2010);
	sejarah[2].isi_buku("Menemukan Sejarah:wacana pergerakan Islam di Indonesia", "Ahmad Mansur Suryanegara", "Ini buku tentang wacana pergerakan Islam di Indonesia", "Mizan", "Jakarta", 335, 1995);
	sejarah[3].isi_buku("Hati Nurani Bangsa", "Deliar Noer, Mohammad Hatta", "Buku ini memberikan gambaran singkat perjalanan hidup Bung Hatta", "Buku Kompas", "Jakarta", 182, 2012);
	sejarah[4].isi_buku("Pemberontakan Tentara Pembela Tanah Air- Peta di Cileunca Pangalengan Bandung Selatan", "Ahmad Mansur Suryanegara", "Ini buku tentang pemberontakan PETA di Bandung Selatan", "Yayasan Wira Patria Mandiri", "Jakarta", 300, 1996);

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
	politik[0].isi_buku("Persoalan Ekonomi Sosialis Indonesia", "Mohammad Hatta", "Ini buku tentang persoalan ekonomi Indonesia", "Djambatan", "Jakarta", 55, 1967);
	politik[1].isi_buku("Karya Lengkap Bung Hatta - Buku 3", "Mohammad Hatta", "Ini buku tentang Perdamaian Dunia dan Keadilan Sosial", "LP3ES dan Universitas Bung Hatta", "Jakarta dan Padang", 640, 2001);
	politik[2].isi_buku("Karya Lengkap Bung Hatta - Buku 1", "Mohammad Hatta", "Ini buku tentang Kebangsaan dan Kerakyatan", "LP3ES dan Universitas Bung Hatta", "Jakarta dan Padang", 616, 1998);
	politik[3].isi_buku("Karya Lengkap Bung Hatta - Buku 2", "Mohammad Hatta", "Ini buku tentang Kemerdekaan dan Demokrasi", "LP3ES dan Universitas Bung Hatta", "Jakarta dan Padang", 454, 2000);
	politik[4].isi_buku("Capita Selecta", "Mohammad Natsir,D.P.Sati Alimin(editor)", "Ini buku berisi Kumpulan artikel yang ditulis oleh M.Natsir di berbagai media massa. Edisi ini terdiri dari lima bab yang mengupas tentang kebudayaan filsafat, pendidikan, agama, ketatanegaraan, dan bunga rampai.", "N.V Penerbitan W.Van Hoeve", "Bandung", 414, 1954);

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
	daftarSejarah();//Dari Zakki
	daftarPolitik();//Dari Zakki

    return 0;
}


