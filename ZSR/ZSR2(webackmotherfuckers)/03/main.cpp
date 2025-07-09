#include <iostream>
#include <vector>
using std::vector, std::cin, std::cout, std::endl;

bool imaLiIstihCifaraZaredom(int x) {
    int z = x;
    vector<int>cifre;
    if (z < 0) {
        z = std::abs(z);
    }

    while (z != 0) {
        int cifra = z % 10;
        cifre.push_back(cifra);
        z /= 10;
    }

    for (int i = 0; i < cifre.size(); i++) {
            if (cifre.at(i) == cifre.at(i+1)) {
                return true;
            }
    }
    return false;
}


int main () {
    cout << "Unesite broj: ";
    int x;
    cin >> x;
    if (imaLiIstihCifaraZaredom(x)) {
        cout << "Ima istih cifara zaredom.";
    } else cout << "Nema istih cifara zaredom.";

    return 0;
}
