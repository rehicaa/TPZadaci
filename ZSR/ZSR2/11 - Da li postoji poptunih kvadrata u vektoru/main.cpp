#include <iostream>
#include <cmath>
#include <vector>

using std::cout, std::cin, std::endl, std::vector, std::pow;

bool provjeriImaLiPotpunihKvadrata(vector<int> a) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= 0){
            int korijen = static_cast<int>(sqrt(a[i]));
            if (korijen * korijen == a[i]) return true;
        }
    }
    return false;
}

int main (){
    cout << "Unesite granice vektora: ";
    int granica;
    cin >> granica;

    vector<int> n;

    for (int i = 0; i <= granica-1; i++){
        int broj;
        cout << "Unesite broj: ";
        cin >> broj;
        n.push_back(broj);
    }

    if (provjeriImaLiPotpunihKvadrata(n)) {
        cout << "Postoji barem jedan potpuni kvadrat.";
    } else cout << "Ne postoji niti jedan potpun kvadrat.";

  }