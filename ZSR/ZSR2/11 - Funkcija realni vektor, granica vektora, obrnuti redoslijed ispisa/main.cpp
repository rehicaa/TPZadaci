#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::vector;

vector<double>vratiObrnutNiz (double niz[], int n) {
    vector<double> obrnutiNiz;
    for (int i = n - 1; i >= 0; i--) {
        obrnutiNiz.push_back(niz[i]);
    }
    return obrnutiNiz;
}

int main(){
    double a[10];
    for (int i = 0; i < 10; i++) {
        cout << "Unesite element (10 ukupno): ";
        cin >> a[i];
    }

    auto obrnutiNiz = vratiObrnutNiz(a, 10);
    for (int i = 0; i < 10; i++) {
        cout << obrnutiNiz[i] << " ";
    }
  }