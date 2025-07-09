#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::vector;
vector<int>vratiSlozeneBrojeveIzNiza(vector<int>nizBrojeva) {
    vector<int>finalniNiz;
    for (int i = 0; i < nizBrojeva.size(); i++) {
        bool jeSlozen = false;
        for (int j = 2; j < nizBrojeva[i]; j++) {
            if (nizBrojeva[i] % j == 0) {
                jeSlozen = true;
                break;
            }
        }
        if (jeSlozen) {
            finalniNiz.push_back(nizBrojeva[i]);
        }
    }
    return finalniNiz;
}

int main() {
    cout << "Unesite granice vektora: ";
    int n;
    cin >> n;
    vector<int>inicijalniNiz;

    for (int i = 0; i < n; i++) {
        cout << "Unesite element: ";
        int x;
        cin >> x;
        inicijalniNiz.push_back(x);
    }

    auto nizSlozenihBrojeva = vratiSlozeneBrojeveIzNiza(inicijalniNiz);
    for (int element:nizSlozenihBrojeva) {
        cout << element << " ";
    }
}