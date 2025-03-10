#include <iostream>
#include <algorithm>
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

     double hipotenuza = std::max({a, b, c}), stranica1, stranica2;

     if (hipotenuza == a){
          stranica1 = b;
          stranica2 = c;
       }
     else if (hipotenuza == b){
         stranica1 = a;
         stranica2 = c;
     }
     else {
       stranica1 = a;
       stranica2 = b;
     }

    cout << "Hipotenuza: " << hipotenuza << ", stranice: " << stranica1 << ", " << stranica2 << endl; //kod za debug

    if (hipotenuza*hipotenuza == stranica1*stranica1+stranica2*stranica2) {
        cout << "Unijeli ste validne stranice pravouglog trougla, stranice su a = " << stranica1 << ", b = " << stranica2 << ", a kvadrat stranice nad hipotenuzom je: " << hipotenuza*hipotenuza << endl;
    }

      return 0;
    }