#include <vector>
#include <iostream>
#include <stdexcept>

using std::cout, std::cin, std::endl, std::vector, std::range_error;

vector<double>vratiSamoElementeSaIndeksomIzVektoraB(vector<double> A, vector<int> B) {
    vector<double>finalniVektor;

    for (int i = 0; i < B.size(); i++) {
        if (B.at(i) < A.size()) {
            int element = B.at(i);
            finalniVektor.push_back(A.at(element));
        } else throw range_error("Izasli ste van opsega vektora A!");
    }

    return finalniVektor;
}

int main() {
    try {
        cout << "Unesite granice vektora A: ";
        int n;
        cin >> n;

        vector<double> vektorA;

        for (int i = 0; i < n; i++) {
            cout << "Unesite element: ";
            double x;
            cin >> x;
            vektorA.push_back(x);
        }

        cout << "Unesite granice vektora B: ";
        int m;
        cin >> m;

        vector<int> vektorB;

        for (int i = 0; i < m; i++) {
            cout << "Unesite element: ";
            int x;
            cin >> x;
            vektorB.push_back(x);
        }


        auto vektorRezultatni = vratiSamoElementeSaIndeksomIzVektoraB(vektorA, vektorB);

        for (double element:vektorRezultatni) {
            cout << element << " ";
        }
    }

    catch (range_error& e) {
        cout << "GRESKA: " << e.what();
    }

    return 0;

}