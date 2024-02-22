#include <iostream>
#include <string>
using namespace std;

struct DataMahasiswa {
    string NIM;
    string nama;
    double tugas;
    int uts;
    int uas;
};

int main() {
    const int SIZE = 3;
    DataMahasiswa datamahasiswa[SIZE];
    
    for(int i = 0; i < SIZE; i++) {
        cout << "Masukkan data untuk mahasiswa ke-" << i+1 << endl;
        cout << "NIM: ";
        cin >> datamahasiswa[i].NIM;
        cout << "Nama: ";
        cin.ignore();
        getline(cin, datamahasiswa[i].nama);
        cout << "Nilai Tugas: ";
        cin >> datamahasiswa[i].tugas;
        cout << "Nilai UTS: ";
        cin >> datamahasiswa[i].uts;
        cout << "Nilai UAS: ";
        cin >> datamahasiswa[i].uas;
        cout << endl;
    }
    
    for(int i = 0; i < SIZE; i++) {
        cout << "============================" << endl;
        cout << "NIM: " << datamahasiswa[i].NIM << endl;
        cout << "Nama: " << datamahasiswa[i].nama << endl;
        cout << "Tugas: " << datamahasiswa[i].tugas << endl;
        cout << "Nilai UTS: " << datamahasiswa[i].uts << endl;
        cout << "Nilai UAS: " << datamahasiswa[i].uas << endl;
        cout << "============================" << endl;
        cout << endl;
    }

    cout << "Hello World!";
    return 0;
}

