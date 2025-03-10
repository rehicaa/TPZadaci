#include <cmath>
#include <iostream>
#include <math.h>
using std::cout;
using std::endl;
using std::cin;

int main() {
    cout << "Unesite koeficijente kvadatne jednačine (a, b, c) -> oblik jednacine je ax*x + bx + c = 0" << endl;
    double a, b, c;
    cin >> a;
    cin.ignore(10000, "\n");
    cin >> b;
    cin.ignore(10000, "\n");
    cin >> c;

    double d = b * b - 4 * a * c;

    if (a == 0 && b != 0) {
        cout << "Rješenje linearne jednačine je: " <<  (-c / b) << endl;
    }
    else if (a == 0 && b == 0 && c != 0) {
        cout << "Jednačina nema rješenja." << endl;
    }
    else if (a == b == c == 0) {
        cout << "Svaki parametar je 0, stoga slijedi 0 = 0." << endl;
    }
    else if (d >= 0) {
        double x1 = (-b + std::sqrt(d)) / (2 * a);
        double x2 = (-b - std::sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
    } else {
        double re = -b / (2 * a);
        double im = ((std::sqrt(-d)) / (2 * a)) * (-1);
        cout << "x1 = " << re << " + " << im << endl << "x2 = " << re << " - "  << im << endl;
    }

}