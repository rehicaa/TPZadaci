#include <vector>
#include <iostream>
#include <string>

using std::cout, std::cin, std::endl, std::vector, std::string;

int brojRijeci (string s) {
    while (!s.empty() && s.front() == ' ') {
        s.erase(0, 1);
    }
    while (!s.empty() && s.back() == ' ') {
        s.pop_back();
    }

    if (s.empty()) return 0;

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

    return rijeci.size();
}

int main() {
    cout << "Unesite recenicu: ";
    string recenica;
    getline (cin, recenica);
    auto broj = brojRijeci(recenica);

    cout << "Vaša rečenica glasi:\n" << recenica << endl;
    cout << "Njen broj riječi je: " << broj;

    return 0;

}