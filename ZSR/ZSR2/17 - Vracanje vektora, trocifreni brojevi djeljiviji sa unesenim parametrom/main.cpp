#include <iostream>
#include <vector>
#include <cmath>
using std::cout, std::cin, std::endl, std::vector, std::log;

vector<int>vratiTrocifreneBrojeveDjeljiveSaParametrom(int n) {
    vector<int>x;
        for (int i = 100; i < 1000; i++) {
            if (i % n == 0) {
                x.push_back(i);
            }
        }
        return x;
    }


int main() {
    int n;
    for (;;) {
        cout << "Unesite prirodan broj: ";
        cin >> n;

        if (n < 1) {
            cout << "Unijeli ste broj manji od 1." << endl;
            cin.ignore(10000, '\n');
            cin.clear();

        } else {
            break;
        }
    }
        auto x = vratiTrocifreneBrojeveDjeljiveSaParametrom(n);
        for(int i = 0; i < x.size(); i++) {
            cout << x[i] << " ";
        }

}