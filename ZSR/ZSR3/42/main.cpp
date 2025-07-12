#include <string>
#include <iostream>
using std::cout, std::cin, std::string, std::endl;

int main() {
    cout << "Unesite recenicu: ";
    string recenica;
    getline(cin, recenica);

    while (!recenica.empty() && recenica.back() == ' ') {
        recenica.pop_back();
    }

    int pozicijaRazmaka = recenica.find_last_of(' ');
    string posljednjaRijec;

    if (pozicijaRazmaka != string::npos) {
        posljednjaRijec = recenica.substr(pozicijaRazmaka + 1);
    } else {
        posljednjaRijec = recenica;
    }

    cout << "Zadnja rijec recenice je: " << posljednjaRijec;
}