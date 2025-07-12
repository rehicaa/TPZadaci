#include <string>
#include <iostream>
using std::cout, std::cin, std::string, std::endl;

string ukloniNepotrebneRazmake (string s) {
    while (!s.empty() && s.front() == ' ') {
           s.erase(0, 1);
    }

    while (!s.empty() && s.back() == ' ') {
        s.pop_back();
    }

    string rezultat;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            rezultat += s[i];
        } else {
            if (!rezultat.empty() && rezultat.back() != ' ') {
                rezultat += ' ';
            }
        }
    }
    return rezultat;
}

int main() {
    cout << "Unesite recenicu: ";
    string recenica;
    getline(cin, recenica);

    recenica = ukloniNepotrebneRazmake(recenica);

    cout << recenica;
}