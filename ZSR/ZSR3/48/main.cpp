#include <iostream>
#include <string>
#include <vector>


using std::cout, std::cin, std::endl, std::string, std::vector;

string zamijeniWhitespaceStringaSaZnakom(string s, char c) {
    while (!s.empty() && s.front() == ' ') {
        s.erase(0, 1);
    }
    while (!s.empty() && s.back() == ' ') {
        s.pop_back();
    }

    vector<string> rijeci;
    string trenutnaRijec;
    for (int i = 0; i < s.length(); i++) {
        char trenutniZnak = s[i];
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

    string rezultat;

    for (int i = 0; i < rijeci.size(); i++) {
        rezultat += rijeci[i];
        if (i < rijeci.size() - 1) {
            rezultat += c;
        }
    }

    return rezultat;
}

int main() {
    cout << "Unesite recenicu: ";
    string recenica;
    getline(cin, recenica);
    cout << "Originalna recenica: " << recenica << endl;

    auto rezultat = zamijeniWhitespaceStringaSaZnakom(recenica, '!');
    cout << "Izmijenjena recenica: " << rezultat << endl;

    return 0;
}
