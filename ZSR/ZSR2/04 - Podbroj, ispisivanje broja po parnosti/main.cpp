#include <iostream>
#include <vector>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int Podbroj (int n, bool parnost) {
    int x = n;
    vector<int> cifreBroja;

    while (x != 0) {
        int zadnjaCifra;
        zadnjaCifra = x % 10;
        x = x / 10;
        cifreBroja.push_back(zadnjaCifra);
    }

    int podbrojOdBroja = 0;
    int brojac = 0;

    if (parnost) {
        for (int i = 0; i < cifreBroja.size(); i++) {
            if (cifreBroja[i] % 2 == 0) {
                podbrojOdBroja += cifreBroja[i] * std::pow(10,brojac);
                brojac++;
            }
        }
    } else {
        for (int i = 0; i < cifreBroja.size(); i++) {
            if (cifreBroja[i] % 2 != 0) {
                podbrojOdBroja += cifreBroja[i] * std::pow(10,brojac);
                brojac++;
            }
        }
    }
    return podbrojOdBroja;
}

int main () {
    int n;
    bool parnost;
    while(1) {
        if (n == 0) {
            break;
        }
        cout << "Unesite broj, zatim true ili false: ";
        cin >> n >> parnost;
        cout << Podbroj (n, parnost) << endl;
    }
}