#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

bool provjeriDaLiImaIstihCifara(int x) {
    int a = x;
    vector<int> cifreBroja;

    while (a != 0) {
        int zadnjaCifra;
        zadnjaCifra = a % 10;
        a = a / 10;
        cifreBroja.push_back(zadnjaCifra);
    }

    bool daLiImaIstihCifara = false;

    for (int i = 0; i < cifreBroja.size(); i++) {
        for (int j = i + 1; j < cifreBroja.size(); j++) {
            if (cifreBroja[i] == cifreBroja [j]) {
                daLiImaIstihCifara = true;
                break;
            }
        }
        if (daLiImaIstihCifara) {
            break;
        }
    }
    return daLiImaIstihCifara;
}

int main () {
    cout << "Unesite broj: ";
    int x;
    cin >> x;
    if (provjeriDaLiImaIstihCifara(x)) {
        cout << "Uneseni broj ima jednakih cifara.";
    } else cout << "Uneseni broj nema jednakih cifara.";


}