#include <iostream>
using namespace std;

//membuat struct untuk detail alamat
struct detailAlamat{
    string desa;
    string kota;
};

//membuat struct mahasiswa
struct mahasiswa{
    string nim;
    string nama;
    detailAlamat alamat;
};

int main(){
    //membuat objek mhs untuk struct mahasiswa pada program utama
    mahasiswa mhs;

    //Membuat input untuk Data Mahasiswa
    cout << "Masukkan NIM = ";
    cin >> mhs.nim;
    cin.ignore(); //menambahkan ignore untuk mengabaikan cin
    cout << "Masukkan Nama = ";
    getline(cin, mhs.nama); //mengganti cin menjadi getline agar bisa input data yang mengandung spasi