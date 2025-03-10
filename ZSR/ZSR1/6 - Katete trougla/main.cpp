#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;


int main(){
    cout << "Unesite stranice pravouglog trougla: " << endl;
    double a, b, c;
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
    cout << "Stranice trougla moraju biti pozitivni brojevi." << endl;
    return 1;
    }

    if (a == b && b == c) {
    cout << "Unesene stranice ne odgovaraju stranicama pravouglog trougla." << endl;
    return 1;
    }

     double hipotenuza = a, stranica1 = b, stranica2 = c;

     if (b>hipotenuza) {
          hipotenuza = b;
          stranica1 = a;
          stranica2 = c;
       }

     if (c > hipotenuza) {
         hipotenuza = c;
         stranica1 = a;
         stranica2 = b;
         }

    const double eps = 0.0000001;

    if (std::fabs(hipotenuza*hipotenuza - stranica1*stranica1 - stranica2*stranica2) <= eps) {
        cout << "Unijeli ste validne stranice pravouglog trougla, stranice su a = " << stranica1 << ", b = " << stranica2 << ", a kvadrat stranica nad hipotenuzom je: " << hipotenuza*hipotenuza << endl;
    }

      return 0;
    }