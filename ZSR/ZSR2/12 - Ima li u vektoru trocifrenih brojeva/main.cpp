#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::vector;

bool provjeriImaLiTrocifrenihBrojeva (vector<int> a) {
for (int i = 0; i < a.size(); i++) {
    if (a[i] > 99 && a[i] < 1000) {
        return true;
    }
}
    return false;
}

int main(){
cout << "Unesite granice vektora: ";
    int n;
    cin >> n;
    vector<int> a;
    int element;

    for (int i = 0; i < n; i++) {
        cout << "Unesite element: ";
        cin >> element;
        a.push_back(element);
    }

    if (provjeriImaLiTrocifrenihBrojeva(a)) {
        cout << "Vektor sadrzi trocifreni broj.";
    } else cout << "Vektor ne sadrzi trocifreni broj.";
}