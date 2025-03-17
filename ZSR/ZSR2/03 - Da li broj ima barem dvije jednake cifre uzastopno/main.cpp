#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

bool provjeriDaLiImaIstihCifaraZaredom(int x) {
    int a = x;
    vector<int> cifreBroja;

    while (a != 0) {
        int zadnjaCifra;
        zadnjaCifra = a % 10;
        a = a / 10;
        cifreBroja.push_back(zadnjaCifra);
    }

    bool daLiImaIstihCifaraZaredom = false;

    for (int i = 0; i < cifreBroja.size(); i++) {
        if ((i+1) < cifreBroja.size()) {
            if (cifreBroja[i] == cifreBroja[i+1]) {
                daLiImaIstihCifaraZaredom = true;
                break;
            }
        }
    }
    return  daLiImaIstihCifaraZaredom;
}

int main () {
    cout << "Unesite broj: ";
    int x;
    cin >> x;
    if (provjeriDaLiImaIstihCifaraZaredom(x)) {
        cout << "Ima istih cifara zaredom.";
    } else cout << "Nema istih cifara zaredom.";

}