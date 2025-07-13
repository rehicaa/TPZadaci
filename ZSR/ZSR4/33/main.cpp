#include <string>
#include <iostream>
#include <cctype>
using std::cin, std::cout, std::endl, std::string;

void uvecajSvakoPrvoSlovoRijeci (string &s) {
    while (!s.empty() && s.front() == ' ') {
        s.erase(0, 1);
    }
    while (!s.empty() && s.back() == ' ') {
        s.pop_back();
    }

    if (std::islower(s[0])) {
        std::toupper(s[0]);
    }

    for (int i = 1; i < s.length(); i++) {
        if (std::isspace(s[i-1])) {
            s[i] = std::toupper(s[i]);
        }
    }

}

int main () {
    cout << "Unesite recenicu: ";
    string recenica;
    getline(cin, recenica);

    uvecajSvakoPrvoSlovoRijeci(recenica);

    cout << recenica;

    return 0;
}