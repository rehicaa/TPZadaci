#include <string>
#include <iostream>

using std::cout, std::cin, std::endl, std::string;

string cezarovaSifra (string s) {
    string cezarString;
    for (int i = 0; i < s.size(); i++) {
        char trenutniZnak = s[i];
        if (trenutniZnak == 'x') {
            cezarString.push_back('a');
        }
        else if (trenutniZnak == 'X') {
            cezarString.push_back('A');
        }
        else if (trenutniZnak == 'y') {
            cezarString.push_back('b');
        }
        else if (trenutniZnak == 'Y') {
            cezarString.push_back('B');
        }
        else if (trenutniZnak == 'z') {
            cezarString.push_back('c');
        }
        else if (trenutniZnak == 'Z') {
            cezarString.push_back('C');
        }
        else if (std::isalpha(trenutniZnak)) {
            cezarString.push_back(static_cast<char>(static_cast<int>(trenutniZnak) + 3));
        } else cezarString.push_back(s[i]);
    }
    return cezarString;
}

int main () {
    cout << "Unesite recenicu: ";
    string recenica;
    getline(cin, recenica);
    cout << "Vasa recenica de-hashirana: ";
    cout << recenica << endl;


    auto cezarRecenica = cezarovaSifra(recenica);
    cout << "Vasa recenica hashirana: ";
    cout << cezarRecenica << endl;

    return 0;
}