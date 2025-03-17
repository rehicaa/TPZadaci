#include <iostream>
#include <vector>
#include <cmath>
using std::cout, std::cin, std::endl, std::vector, std::log;

vector<int>vratiSveElementeStepenaBrojaDva(int n) {
    vector<int>x;
    for (int i = 1; i < n; i++) {
        int a = i;
        while (a % 2 == 0) {
            a = a / 2;
            if (a == 1) {
                x.push_back(i);
            }
        }
    }
    return x;
}

int main(){
    cout << "Unesite prirodan broj: ";
    int n;
    cin >> n;

    auto x = vratiSveElementeStepenaBrojaDva(n);
    for (int i = 0; i < x.size(); i++) {
        cout << x[i] << " ";
    }

}