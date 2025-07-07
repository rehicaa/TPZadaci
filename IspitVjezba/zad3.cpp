#include <iostream>
#include <vector>
#include <stdexcept>
using std::cout, std::cin, std::endl, std::vector, std::logic_error;

template<typename kontejnerA,typename kontejnerB, typename TipRezultata>
TipRezultata KronekerProizvod(const kontejnerA& a, kontejnerB& b) {
    TipRezultata** matrica = nullptr;
    try {
        matrica = new TipRezultata *[a.size()];
        for (int i = 0; i < a.size(); i++) {
            matrica.at(i) = new TipRezultata[b.size()];
        }
    } catch (...) {
        throw logic_error("Alokacija nije uspjela");
    }

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            matrica.at(i).at(j) = static_cast<TipRezultata>(a.at(i)) * static_cast<TipRezultata>(b.at(j));
        }
    }
    return matrica;
}

int main() {

}