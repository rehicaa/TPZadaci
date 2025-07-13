#include <string>
#include <iostream>
#include <cctype>
using std::cin, std::cout, std::endl, std::string;

void ROT13(string &s) {
    for (char &znak : s) {
        if (std::islower(znak)) {
            if (znak >= 'a' && znak <= 'm') {
                znak += 13;
            } else if (znak >= 'n' && znak <= 'z'){
                znak -= 13;
            }
        }
        if (std::isupper(znak)) {
            if (znak >= 'A' && znak <= 'M') {
                znak += 13;
            } else if (znak >= 'N' && znak <= 'Z'){
                znak -= 13;
            }
        }
    }
}

int main() {
    cout << "Unesite recenicu: ";
    string recenica;
    getline (cin, recenica);

    cout << "Recenica prije sifriranja: " << recenica << endl;

    ROT13(recenica);

    cout << "Recenica nakon sifriranja: " << recenica << endl;


    return 0;
}