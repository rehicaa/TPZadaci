#include <iostream>
#include <vector>
#include <stdexcept>
#include <cmath>
#include <iomanip>

using std::cout, std::cin, std::endl, std::vector, std::domain_error, std::pow;

void vratiTrueZaPerfektneKubove(vector<int>& vektorBrojeva) {
    vector<bool>kubni;
    for (int i = 0; i < vektorBrojeva.size(); i++) {
        double treciKorijenIz = pow(vektorBrojeva[i], 1./3.);
        int cijeliBroj = 0;
        if (treciKorijenIz == static_cast<int>(treciKorijenIz)) {
            cijeliBroj = static_cast<int>(treciKorijenIz);
            if (cijeliBroj % 3 == 0) {
                kubni.push_back(true);
            } else kubni.push_back(false);
        } else kubni.push_back(false);
    }

    for (int i = 0; i < kubni.size(); i++) {
        cout << std::boolalpha << kubni[i] << " ";
    }
}

int main() {
    cout << "Unesite granice vektora: ";
    int n;
    cin >> n;

    vector<int>rezultat;
    for (int i = 0; i < n; i++) {
        cout << "Unesite element: ";
        int element;
        cin >> element;
        rezultat.push_back(element);

    }

    vratiTrueZaPerfektneKubove(rezultat);

}