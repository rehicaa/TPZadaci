#include <iostream>
#include <vector>
#include <complex>
#include <iomanip>

using std::vector, std::cin, std::cout, std::endl;


int main () {
    double re_z, im_z, x, y;
    cout << "Unesite realni dio z: " << endl;
    cin >> re_z;
    cout << "Unesite imaginarni dio z: " << endl;
    cin >> im_z;
    cout << "Unesite x: " << endl;
    cin >> x;
    cout << "Unesite y: " << endl;
    cin >> y;

    std::complex<double>z(re_z, im_z);
    std::complex<double>i(0.0, 1.0);
    std::complex<double> rez = std::pow(x + (5.0 * i) / (z * z * z * std::sqrt(x - y * i)), 2.0);

    cout << std::fixed << std::setprecision(7) << rez.real() << " " << rez.imag();
}
