#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::vector;
vector<int> vratiSveDjelioceBroja(int n) {
    vector<int>finalniVektor;
    int broj = n;
    for (int i = 1; i <= broj; i++) {
        if (broj % i == 0) {
            finalniVektor.push_back(i);
        }
    }
    return finalniVektor;
}

int main() {

    cout << "Unesite broj: ";
    int n;
    cin >> n;

    auto vektorDjelioca = vratiSveDjelioceBroja(n);

    for (int element : vektorDjelioca) {
        cout << element << " ";
    }
    return 0;
}