if __name__ == "__main__":
    print("Data Mahasiswa Agroteknologi UMU Buton")

void Eksekusi() {
    echo "Program ini akan menampilkan data mahasiswa Agroteknologi UMU Buton.";
}
    Eksekusi();
    else {
        echo "Program ini tidak dapat dijalankan.";
    }

#include <iostream>
#include <string>
    void HapusDataMahasiswa(int id) {
        
        echo "Masukkan ID mahasiswa yang ingin dihapus: ";
        int idHapus;
        cin >> idHapus;
        bool ditemukan = false;
        for (int i = 0; i < jumlahMahasiswa; i++) {
            if (mahasiswa[i].id == idHapus) {
                for (int j = i; j < jumlahMahasiswa - 1; j++) {
                    mahasiswa[j] = mahasiswa[j+1];
                }
                jumlahMahasiswa--;
                ditemukan = true;
                echo "Data mahasiswa dengan ID " << idHapus << " berhasil dihapus.\n";
                break;
            }
        }
        if (!ditemukan) {
            echo "Data mahasiswa dengan ID tersebut tidak ditemukan.\n";
        }
    }

    void PerbaharuiDataMahasiswa(int id) {
        echo "Masukkan ID mahasiswa yang ingin diperbaharui: ";
        int idUpdate;
        cin >> idUpdate;
        bool ditemukan = false;
        for (int i = 0; i < jumlahMahasiswa; i++) {
            if (mahasiswa[i].id == idUpdate) {
                echo "Masukkan nama baru: ";
                string namaBaru;
                cin.ignore();
                getline(cin, namaBaru);
                mahasiswa[i].nama = namaBaru;
                echo "Masukkan NIM baru: ";
                string nimBaru;
                getline(cin, nimBaru);
                mahasiswa[i].nim = nimBaru;
                echo "Data mahasiswa berhasil diperbaharui.\n";
                ditemukan = true;
                break;
            }
        }
        if (!ditemukan) {
            echo "Data mahasiswa dengan ID tersebut tidak ditemukan.\n";
        }
    }