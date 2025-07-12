#include <string>
#include <iostream>
#include <cctype>

using std::cout, std::cin, std::endl, std::string, std::tolower;

bool jeSamoglasnik (char c) {
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    return false;
}

bool jeSuglasnik (char c) {
    if (std::isalpha(c) && !jeSamoglasnik(c)) return true;
    return false;
}

bool daLiJeRijecTacna(string& s) {
    for (int i = 0; i < s.length() - 2; i++) {
        if (jeSuglasnik(s[i]) && jeSuglasnik(s[i+1]) && jeSuglasnik(s[i+2])) return false;
    }
    return true;
}

int main () {
    cout << "Unesite rijec: ";
    string rijec;
    getline(cin, rijec);

    if (daLiJeRijecTacna(rijec)) {
        cout << "Rijec je okej!";
    } else cout << "Rijec ima previse suglasnika zaredom!";

    return 0;
}