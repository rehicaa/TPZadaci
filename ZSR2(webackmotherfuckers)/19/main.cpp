#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::vector;
vector<int>vratiBrojCifaraElemenataKaoElementa(vector<int>nizBrojeva) {
    vector<int>finalniNiz;
    for (int i = 0; i < nizBrojeva.size(); i++) {
        int brojac = 0;
        int trenutniBroj = nizBrojeva[i];
        while (trenutniBroj != 0) {
            brojac++;
            trenutniBroj /= 10;
        }
        finalniNiz.push_back(brojac);
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
        int element;
        cin >> element;
        inicijalniNiz.push_back(element);
    }

    auto nizOdCifara = vratiBrojCifaraElemenataKaoElementa(inicijalniNiz);

    for (int element:nizOdCifara) {
        cout << element << " ";
    }
}