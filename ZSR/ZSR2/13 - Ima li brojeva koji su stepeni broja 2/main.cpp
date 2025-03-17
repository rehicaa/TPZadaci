#include <iostream>
#include <vector>
#include <cmath>

using std::cout, std::cin, std::endl, std::vector, std::log;

bool provjeriImaLiBrojaKojiJeStepenBrojaDva (vector<int> a) {
   for (int i = 0; i < a.size(); i++) {
       int x = a[i];
       while (x % 2 == 0 && x > 1) {
           x = x / 2;
       } if (x == 1) return true;
   }
    return false;
}

int main(){
cout << "Unesite granice vektora: ";
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        cout << "Unesite element vektora: ";
        int element;
        cin >> element;
        a.push_back(element);
    }

    if (provjeriImaLiBrojaKojiJeStepenBrojaDva(a)) {
        cout << "Unutar vektora postoji element koji je stepen broja 2.";
    } else cout << "Unutar vektora ne postoji element koji je stepen broja 2.";
  }
