#include <string>
#include <iostream>
using std::cin, std::cout, std::endl, std::string;

void uvecajASCIICharoveStringaZaJedan (string& s) {
    for (int i = 0; i < s.length(); i++) {
        char znak = s[i];
        if (znak != ' ') {
            s[i]++;
        }
    }
}

int main() {
    cout << "Unesite recenicu: ";
    string recenica;
    getline(cin, recenica);

    uvecajASCIICharoveStringaZaJedan(recenica);

    cout << recenica;

    return 0;
}