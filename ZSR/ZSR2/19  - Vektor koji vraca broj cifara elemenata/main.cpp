#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::vector;

vector<int>vratiBrojCifara(vector<int>x) {
    int duzina = x.size();
    vector<int>rezultat;

    for (int i = 0; i < duzina; i++) {
        int brojac = 0;
        int a = x[i];
        while (a != 0) {
            brojac++;
            a /= 10;
        }
        rezultat.push_back(brojac);
    }
    return rezultat;
}

int main() {
cout << "Unesite granice vektora: ";
    int n;
    cin >> n;

    vector<int>a;
    for (int i = 0; i < n; i++) {
        cout << "Unesite element: ";
        int elementVektora;
        cin >> elementVektora;
        a.push_back(elementVektora);
    }

    a = vratiBrojCifara(a);

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
}
