#include <iostream>
#include <vector>
#include <cmath>
using std::cout, std::cin, std::endl, std::vector, std::log;

vector<int>vratiDjelioceBroja(int n) {
    vector<int>x;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            x.push_back(i);
        }
    }
    return x;
}

int main(){
    cout << "Unesite prirodni broj: ";
    int n;
    cin >> n;

    if (n < 1) {
        cout << "Unijeli ste broj manji od 1. Program završava.";
        return 1;
    }

    auto x = vratiDjelioceBroja(n);
    for (int i = 0; i < x.size(); i++) {
        cout << x[i] << " ";
    }

  }