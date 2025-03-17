#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int PretvoriUSekunde(int a, int b, int c) {
return a * 3600 + b * 60 + c;
}

int main(){
int sat1, sat2, min1, min2, sek1, sek2;

cout << "Unesi prvo vrijeme: " << endl;
cin >> sat1 >> min1 >> sek1;
int totalsekunde1 = PretvoriUSekunde(sat1, min1, sek1);

cout << "Unesi drugo vrijeme: " << endl;
cin >> sat2 >> min2 >> sek2;
int totalsekunde2 = PretvoriUSekunde(sat2, min2, sek2);

int vremenskiInterval = totalsekunde1 - totalsekunde2;
 vremenskiInterval = vremenskiInterval < 0 ? vremenskiInterval * (-1) : vremenskiInterval;
 int finalSati = vremenskiInterval / 3600;
 vremenskiInterval = vremenskiInterval % 3600;
 int finalMin = vremenskiInterval / 60;
 vremenskiInterval = vremenskiInterval % 60;
 int finalSek = vremenskiInterval;

cout << "Izmedju ova 2 perioda prošlo je: " << finalSati << " sata " << finalMin << " minuta " << "i " <<finalSek << " sekundi " << endl;
return 0;
}