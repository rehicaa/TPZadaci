#include <string>
#include <iostream>

using std::cout, std::cin, std::endl, std::string;

int main () {
    cout << "Unesite prvu recenicu: ";
    string recenica1;
    getline(cin, recenica1);

    cout << "Unesite drugu recenicu: ";
    string recenica2;
    getline(cin, recenica2);

    std::cout << "Prva recenica ima " << recenica1.length() << " znakova, a druga " << recenica2.length() << endl;

    if (recenica1 < recenica2) {
        cout << "Recenica 1 dolazi prije recenice 2 po abecedi.";
    } else cout << "Recenica 2 dolazi prije recenice 1 po abecedi.";

    cout << endl;
    cout << recenica1 + recenica2;
    cout << endl;

    for (int i = recenica1.length() - 1; i >= 0; i--) {
        cout << recenica1[i];
    }


    return 0;
}