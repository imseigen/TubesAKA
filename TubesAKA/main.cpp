#include "towerofhanoi.h"

int main() {
    int n = 5;  // Menetapkan jumlah cakram menjadi 5
    char dari = 'A', ke = 'B', bantu = 'C';

    cout << "\nSolusi menggunakan rekursif:\n";
    hanoiRekursif(n, dari, ke, bantu);

    cout << "\nSolusi menggunakan iteratif:\n";
    hanoiIteratif(n, dari, ke, bantu);

    return 0;
}
