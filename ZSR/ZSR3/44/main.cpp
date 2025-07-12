#include <string>
#include <iostream>
#include <vector>
using std::cout, std::cin, std::string, std::endl;

int main () {
    cout << "Unesite recenicu: ";
    string recenica;
    getline (cin, recenica);

    std::vector<string> rijeci;
    string trenutnaRijec;
    int brojSlova = 0;

    for (int i = 0; i < recenica.length(); i++) {
        char trenutniZnak = recenica[i];

        if (std::isalpha(trenutniZnak)) {
            brojSlova++;
        }
        if (trenutniZnak != ' ') {
            trenutnaRijec += trenutniZnak;
        } else {
            if (!trenutnaRijec.empty()) {
                rijeci.push_back(trenutnaRijec);
                trenutnaRijec.clear();
            }
        }
    }
    if (!trenutnaRijec.empty()) {
        rijeci.push_back(trenutnaRijec);
    }

    cout << "Broj slova: " << brojSlova << endl;
    cout << "Broj rijeci: " << rijeci.size() << endl;

    cout << "Rijeci su:\n";

    for (int i = 0; i < rijeci.size(); i++) {
        std::cout << rijeci[i] << std::endl;
    }


    return 0;
}