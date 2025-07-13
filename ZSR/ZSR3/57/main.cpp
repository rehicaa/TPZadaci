#include <string>
#include <vector>
#include <iostream>
#include <cctype>
using std::cout, std::cin, std::vector, std::string, std::endl;

vector<string> vratiRijeciReceniceRespektivno (string& s) {
    vector<string>rezultat;
    string trenutnaRijec;

    for (int i = 0; i < s.length(); i++) {
        char znak = s[i];
        if (std::isspace(s[i])) {
            if (!trenutnaRijec.empty()) {
                rezultat.push_back(trenutnaRijec);
                trenutnaRijec.clear();
            }
        } else {
            trenutnaRijec += znak;
        }
    }

    if (!trenutnaRijec.empty()) {
        rezultat.push_back(trenutnaRijec);
    }

    return rezultat;
}

int main () {
    cout << "Unesite recenicu: ";
    string recenica;
    getline (cin, recenica);

    cout << "Riječi te rečenice su:\n";
    auto rijeci = vratiRijeciReceniceRespektivno(recenica);
    for (auto rijec : rijeci) {
        cout << rijec << endl;
    }


    return 0;
}