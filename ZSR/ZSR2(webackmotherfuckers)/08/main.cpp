#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::vector;

bool sviElementiSuJednaki (vector<double>elementi) {
    for (int i = 0; i < elementi.size(); i++) {
        if (elementi[0] != elementi[i]){
            return false;
        }
    }
    return true;
}

bool sviElementiSuRazliciti (vector<double>elementi) {
    for (int i = 0; i < elementi.size(); i++) {
        for (int j = i + 1; j < elementi.size(); j++) {
            if (elementi[i] == elementi[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    cout << "Unesite granicu vektora: ";
    int n;
    cin >> n;
    vector<double>elementi;

    for (int i = 0; i < n; i++) {
        cout << "Unesite vrijednost: ";
        double x;
        cin >> x;
        elementi.push_back(x);
    }

    if (sviElementiSuRazliciti(elementi)) {
        cout << "Svi elementi vektora su razliciti respektivno.\n";
    } else if (sviElementiSuJednaki(elementi)) {
        cout << "Svi elementi vektora su jednaki.\n";
    } else cout << "Nijedna funkcija nije u upotrebi.";

    return 0;
}