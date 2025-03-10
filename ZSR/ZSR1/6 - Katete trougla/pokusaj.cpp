#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main(){
    cout << "Unesite stranice pravouglog trougla: " << endl;
    double a, b, c;
    cin >> a >> b >> c;

    if (double hipotenuza = a, stranica1 = b, stranica2 = c; b > hipotenuza) {
        hipotenuza = b;
        stranica1 = a;
        stranica2 = c;
        if (hipotenuza * hipotenuza == stranica1*stranica1 + stranica2*stranica2) {
            cout << "Unijeli ste validne stranice pravouglog trougla, stranice su: " << stranica1 << " i " << stranica2 << ",a hipotenuza je" << hipotenuza << endl;
        }
    } else if (hipotenuza = b, stranica1 = a, stranica2 = c; a > hipotenuza) {
        hipotenuza = a;
        stranica1 = b;
        stranica2 = c;
        if (hipotenuza * hipotenuza == stranica1*stranica1 + stranica2*stranica2) {
            cout << "Unijeli ste validne stranice pravouglog trougla, stranice su: " << stranica1 << " i " << stranica2 << ",a hipotenuza je" << hipotenuza << endl;
        }
    } else {
        hipotenuza = c;
        stranica1 = a;
        stranica2 = b;
        if (hipotenuza * hipotenuza == stranica1*stranica1 + stranica2*stranica2) {
            cout << "Unijeli ste validne stranice pravouglog trougla, stranice su: " << stranica1 << " i " << stranica2 << ",a hipotenuza je" << hipotenuza << endl;
        }
    }


return 0;

  }