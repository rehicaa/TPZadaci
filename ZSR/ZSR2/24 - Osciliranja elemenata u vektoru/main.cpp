#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::vector;

bool provjeriDaLiVektorElemenataOscilira(vector<int>v) {
    vector<int>rezultat;
    bool daLiOscilira = false;

    for (int i = 1; i < v.size()-1; i++) {
        if (v[i] > v[i+1] || v[i] < v[i-1]) {
             daLiOscilira = true;
        } else return false;
    }
    return  daLiOscilira;
}

int main() {
    cout << "Unesite granice vektora: ";
    int n;
    cin >> n;
    vector<int>v;
    for (int i = 0; i < n; i++) {
        cout << "Unesite element vektora: ";
        int element;
        cin >> element;
        v.push_back(element);
    }
    bool daLiOscilira = provjeriDaLiVektorElemenataOscilira(v);

    if (daLiOscilira) {
        cout << std::boolalpha << "Vektor oscilira: " << daLiOscilira;
    } else cout << "Vektor ne oscilira.";
}
