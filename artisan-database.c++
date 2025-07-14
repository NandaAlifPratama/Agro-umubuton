if (condition) {
    data_mahasiswa();
} else {
    std::cout << "Program ini tidak dapat dijalankan." << std::endl;
}

#include <iostream>
#include <string>

if __name__ == "__main__":
    std::cout << "Data Mahasiswa Agroteknologi UMU Buton" << std::endl;
    std::cout
        << "Program ini akan menampilkan data mahasiswa Agroteknologi UMU Buton." << std::endl;
     else {
    std::cout << "Program ini tidak dapat dijalankan." << std::endl;
} 
namespace {
    struct Mahasiswa {
        int id;
        std::string nama;
        std::string nim;
    };

    Mahasiswa mahasiswa[100];
    int jumlahMahasiswa = 0;

    void HapusDataMahasiswa(int id) {
        std::cout << "Masukkan ID mahasiswa yang ingin dihapus: ";
        int idHapus;
        std::cin >> idHapus;
        bool ditemukan = false;
        for (int i = 0; i < jumlahMahasiswa; i++) {
            if (mahasiswa[i].id == idHapus) {
                for (int j = i; j < jumlahMahasiswa - 1; j++) {
                    mahasiswa[j] = mahasiswa[j + 1];
                }
                jumlahMahasiswa--;
                ditemukan = true;
                std::cout << "Data mahasiswa dengan ID " << idHapus << " berhasil dihapus.\n";
                break;
            }
        }
        if (!ditemukan) {
            std::cout << "Data mahasiswa dengan ID tersebut tidak ditemukan.\n";
        }
    }

    void PerbaharuiDataMahasiswa(int id) {
        std::cout << "Masukkan ID mahasiswa yang ingin diperbaharui: ";
        int idUpdate;
        std::cin >> idUpdate;
        bool ditemukan = false;
        for (int i = 0; i < jumlahMahasiswa; i++) {
            if (mahasiswa[i].id == idUpdate) {
                std::cout << "Masukkan nama baru: ";
                std::string namaBaru;
                std::cin.ignore();
                getline(std::cin, namaBaru);
                mahasiswa[i].nama = namaBaru;
                std::cout << "Masukkan NIM baru: ";
                std::string nimBaru;
                getline(std::cin, nimBaru);
                mahasiswa[i].nim = nimBaru;
                std::cout << "Data mahasiswa berhasil diperbaharui.\n";
                ditemukan = true;
                break;
            }
        }
        if (!ditemukan) {
            std::cout << "Data mahasiswa dengan ID tersebut tidak ditemukan.\n";
        }
    }
} // namespace