#include <iostream>
#include <vector>
using std::vector, std::cin, std::cout, std::endl;

bool imaLiIstihCifara(int x) {
    int z = x;
    vector<int>cifre;

    while (z != 0) {
        int cifra = z % 10;
        cifre.push_back(cifra);
        z /= 10;
    }

    bool imaIstihCifara = false;

    for (int i = 0; i <= cifre.size() - 1; i++) {
        for (int j = i + 1; j <= cifre.size() - 1; j++) {
            if (cifre[i] == cifre[j]) {
                imaIstihCifara = true;
                break;
            }
        }
        if (imaIstihCifara) break;
    }

return imaIstihCifara;
}

int main () {
    cout << "Unesite broj: ";
    int x;
    cin >> x;
    if (imaLiIstihCifara(x)) {
        cout << "Broj sadrzi iste cifre.";
    } else cout << "Broj ne sadrzi iste cifre.";
}
