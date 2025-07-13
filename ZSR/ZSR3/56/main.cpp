#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int NadjiPodstring(const string& prvi, const string& drugi) {
    size_t pronadjenaPozicija = prvi.find(drugi);
    
    if (pronadjenaPozicija == string::npos) {
        return -1;
    }
    
    return static_cast<int>(pronadjenaPozicija);
}

int main() {
    cout << "Unesite prvi string (u kojem se trazi): ";
    string prviString;
    getline(cin, prviString);

    cout << "Unesite drugi string (koji se trazi): ";
    string drugiString;
    getline(cin, drugiString);

    int pozicija = NadjiPodstring(prviString, drugiString);

    if (pozicija != -1) {
        cout << "Drugi string je pronadjen unutar prvog na poziciji: " << pozicija << endl;
    } else {
        cout << "Drugi string nije pronadjen unutar prvog." << endl;
    }

    return 0;
}