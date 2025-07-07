#include <iostream>
#include <vector>
#include <cmath>
using std::cout, std::cin, std::pow, std::endl, std::vector;
int Polinom(vector<double>v, int stepen) {
    int suma = 0;
    for (int i = v.size()-1; i >= 0; i--) {
        suma += v.at(i)*pow(stepen,i);
    }
    return suma;
}

int main() {
    auto poli = Polinom({2,3,0,-1,4}, 5);
    cout << poli;
}