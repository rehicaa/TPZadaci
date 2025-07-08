#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::vector;

bool provjeriImaLiParnihElemenata (vector<int>elementi) {
    bool imaParnih = false;
    for(int i = 0; i < elementi.size(); i++) {
        if (elementi[i] % 2 == 0) {
            imaParnih = true;
            break;
        }
    }
    return imaParnih;
}

int main() {
    cout << "Unesite granicu vektora: ";
    int n;
    cin >> n;
    vector<int> elementi;

    for (int i = 0; i < n; i++) {
        cout << "Unesite element: ";
        int x;
        cin >> x;
        elementi.push_back(x);

    }

    if (provjeriImaLiParnihElemenata(elementi)) {
        cout << "Ima parnih elemenata u nizu.";
    } else cout << "Nema parnih elemenata u nizu.";

    return 0;
}