#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::vector;
vector<int>vratiNajmanjuCifruElementa(vector<int>nizBrojeva) {
    vector<int>finalniNiz;
    for (int i = 0; i < nizBrojeva.size(); i++) {
        int trenutniBroj = nizBrojeva[i];
        int najmanjaCifra = 9;
        while (trenutniBroj != 0) {
            int trenutnaCifra = trenutniBroj % 10;
            if (trenutnaCifra < najmanjaCifra) {
                najmanjaCifra = trenutnaCifra;
            }
            trenutniBroj /= 10;
        }
        finalniNiz.push_back(najmanjaCifra);
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

    auto nizSaNajmanjimCiframa = vratiNajmanjuCifruElementa(inicijalniNiz);

    for (int element: nizSaNajmanjimCiframa) {
        cout << element << " ";
    }

    return 0;
}