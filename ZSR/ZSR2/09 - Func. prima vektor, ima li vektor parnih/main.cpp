#include <iostream>
#include <vector>


using std::cout;
using std::endl;
using std::cin;
using std::vector;

bool provjeriImaLiParnihBrojeva (vector<int> vektorCijelihBrojeva) {

    bool imaLiParnihBrojeva = false;

    for (int i = 0; i < vektorCijelihBrojeva.size(); i++) {
        if (vektorCijelihBrojeva[i] % 2 == 0) {
            imaLiParnihBrojeva = true;
            break;
        }
    }
    return imaLiParnihBrojeva;
}

int main () {
    cout << "Unesite granice vektora: ";
    int n;
    cin >> n;
    vector<int> vektorBrojeva;

    for (int i = 0; i < n; i++) {
        cout << "Unesite vrijednost: ";
        int broj;
        cin >> broj;
        vektorBrojeva.push_back(broj);
    }
    cout << provjeriImaLiParnihBrojeva(vektorBrojeva);

}