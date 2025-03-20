#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::vector;
vector<double>pronadjiLokalneMaksimume(vector<double>v) {
    vector<double>rezultat;

    for (int i = 1; i < v.size()-1; i++) {
        if (v[i] > v[i+1] && v[i] > v[i-1]) {
            rezultat.push_back(v[i]);
        }
    }
    return rezultat;
}

int main() {
    cout << "Unesite granice vektora: ";
    int n;
    cin >> n;
    vector<double>v;
    for (int i = 0; i < n; i++) {
        cout << "Unesite element vektora: ";
        double element;
        cin >> element;
        v.push_back(element);
    }

    auto vLokalnogMaksimuma = pronadjiLokalneMaksimume(v);
    for (int i = 0; i < vLokalnogMaksimuma.size(); i++) {
        cout << vLokalnogMaksimuma[i] << " ";
    }
}
