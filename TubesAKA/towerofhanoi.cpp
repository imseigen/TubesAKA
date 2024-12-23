#include "towerofhanoi.h"

void hanoiRekursif(int n, char dari, char ke, char bantu) {
    if (n == 1) {
        cout << "Pindahkan cakram 1 dari " << dari << " ke " << ke << endl;
        return;
    }
    hanoiRekursif(n - 1, dari, bantu, ke);
    cout << "Pindahkan cakram " << n << " dari " << dari << " ke " << ke << endl;
    hanoiRekursif(n - 1, bantu, ke, dari);
}


void hanoiIteratif(int n, char dari, char ke, char bantu) {
    stack<pair<int, pair<char, char>>> langkahStack;
    langkahStack.push({n, {dari, ke}});

    while (!langkahStack.empty()) {
        auto langkah = langkahStack.top();
        langkahStack.pop();

        int cakram = langkah.first;
        char asal = langkah.second.first;
        char tujuan = langkah.second.second;

        if (cakram == 1) {
            cout << "Pindahkan cakram 1 dari " << asal << " ke " << tujuan << endl;
        } else {
            langkahStack.push({cakram - 1, {bantu, tujuan}});
            langkahStack.push({1, {asal, tujuan}});
            langkahStack.push({cakram - 1, {asal, bantu}});
            }
        }
}
