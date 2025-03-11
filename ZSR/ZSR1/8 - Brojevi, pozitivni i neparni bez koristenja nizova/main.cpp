#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main(){
    cout<<"Unesite 6 brojeva: "<< endl;

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    if ((a > 0) && (b > 0) && (c > 0) && (d > 0) && (e > 0) && (f > 0)){
        cout << "Svi od unesenih brojeva su pozitivni." << endl;
    } else cout << "Neki od unesenih brojeva nisu pozitivni." << endl;

    if ((a % 2 != 0) || (b % 2 != 0) || (c % 2 != 0) || (d % 2 != 0) || (e % 2 != 0) || (f % 2 != 0)){
        cout << "Neki od unesenih brojeva su neparni." << endl;
    } else cout << "Svi brojevi su parni." << endl;

    return 0;

  }