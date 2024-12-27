#include "towerofhanoi.h"
#include <chrono>

int main() {
     int n = 5;  // Menetapkan jumlah cakram menjadi 5
    char dari = 'A', ke = 'B', bantu = 'C';

    // Rekursif
    cout << "\nSolusi menggunakan rekursif:\n";
    auto startRekursif = chrono::high_resolution_clock::now();
    hanoiRekursif(n, dari, ke, bantu);
    auto endRekursif = chrono::high_resolution_clock::now();
    chrono::duration<double> rekursifDurasi = endRekursif - startRekursif;
    cout << "Waktu eksekusi rekursif: " << rekursifDurasi.count() << " detik\n";

    // Iteratif
    cout << "\nSolusi menggunakan iteratif:\n";
    auto startIteratif = chrono::high_resolution_clock::now();
    hanoiIteratif(n, dari, ke, bantu);
    auto endIteratif = chrono::high_resolution_clock::now();
    chrono::duration<double> iteratifDurasi = endIteratif - startIteratif;
    cout << "Waktu eksekusi iteratif: " << iteratifDurasi.count() << " detik\n";

    return 0;
}
