#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::vector;
vector<int>vratiSumeCifaraElemenata(vector<int>nizBrojeva) {
    vector<int>finalniNiz;
    for (int element:nizBrojeva) {
        int suma = 0;
        while (element != 0) {
            int cifra = element % 10;
            suma += cifra;
            element /= 10;
        }
        finalniNiz.push_back(suma);
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

    auto nizZbiraCifara = vratiSumeCifaraElemenata(inicijalniNiz);

    for (int element:nizZbiraCifara) {
        cout << element << " ";
    }

    return 0;
}