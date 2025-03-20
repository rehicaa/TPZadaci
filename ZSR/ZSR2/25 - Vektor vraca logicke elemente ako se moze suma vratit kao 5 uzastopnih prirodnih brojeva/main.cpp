#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::vector;

vector<bool>imaLiUzastopnihPrirodnihBrojeva(vector<int>v){
    vector<bool>rezultat;
    for(int i = 0; i < v.size(); i++) {
        if (v[i] >= 15 && (v[i] - 10) % 5 == 0) { // n + (n + 1) + ... (n + 4) = 5n+10
            rezultat.push_back(true);
        } else rezultat.push_back(false);
    }
    return rezultat;
}

int main() {
    cout << "Unesite granice niza: ";
    int n;
    cin >> n;
    vector<int>v;

    for (int i = 0; i < n; i++) {
        cout << "Unesite element niza: ";
        int element;
        cin >> element;
        v.push_back(element);
    }
    auto rezultat = imaLiUzastopnihPrirodnihBrojeva(v);

    for (int i = 0; i < rezultat.size(); i++) {
        if (rezultat[i]) cout << "true ";
        else cout << "false ";
    }

}
