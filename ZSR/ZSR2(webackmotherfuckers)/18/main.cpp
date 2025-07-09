#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::vector;
vector<int> vratiParnePaNeparneIzNiza(int niz[], int n) {
    vector<int>parni;
    vector<int>neparni;
    for (int i = n - 1; i >= 0; i--) {
        if (niz[i] % 2 == 0) {
            parni.push_back(niz[i]);
        } else neparni.push_back(niz[i]);
    }
    vector<int>finalniNiz = parni;
    finalniNiz.insert(finalniNiz.end(), neparni.begin(), neparni.end());
    return finalniNiz;
}

int main() {

    int niz[10];
    for (int i = 0; i < 10; i++) {
        cout << "Unesite element: ";
        cin >> niz[i];
    }

    auto sortiraniNiz = vratiParnePaNeparneIzNiza(niz, 10);

    for (int element:sortiraniNiz) {
        cout << element << " ";
    }
}