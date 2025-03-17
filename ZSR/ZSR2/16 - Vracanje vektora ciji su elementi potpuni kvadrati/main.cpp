#include <iostream>
#include <vector>
#include <cmath>
using std::cout, std::cin, std::endl, std::vector, std::log;

vector<int>vratiPotpuneKvadrate(int n) {
    vector<int>x;
    for (int i = 1; i < n; i++) {
        if (std::sqrt(i) == static_cast<int>(std::sqrt(i))) {
            x.push_back(i);
        }
    }
    return x;
}

int main() {
    cout << "Unesite prirodan broj: ";
    int n;
    cin >> n;

    if (n < 1) {
        cout << "Unijeli ste broj manji od 1. Program završava.";
        return 1;
    }

        auto x = vratiPotpuneKvadrate(n);
        for(int i = 0; i < x.size(); i++) {
            cout << x[i] << " ";
        }

}