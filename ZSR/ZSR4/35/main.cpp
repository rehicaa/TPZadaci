#include <string>
#include <iostream>
#include <cctype>
using std::cin, std::cout, std::endl, std::string;

void ubaciDvaRazmakaPoslijeSlova(string &s) {
    while (!s.empty() && s.front() == ' ') {
        s.erase(0, 1);
    }
    while (!s.empty() && s.back() == ' ') {
        s.pop_back();
    }

    string rezultat;

    for (char &znak : s) {
        rezultat.push_back(znak);
        if (std::isalpha(znak)) {
            rezultat += "  ";
        }
    }

    s = rezultat;
}


int main() {
    cout << "Unesite rijec: ";
    string rijec;
    getline (cin, rijec);

    ubaciDvaRazmakaPoslijeSlova(rijec);

    cout << rijec;

    return 0;
}