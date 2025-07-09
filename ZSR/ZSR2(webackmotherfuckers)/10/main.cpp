#include <iostream>
#include <vector>
#include <math.h>


using std::cout, std::cin, std::endl, std::vector;
bool provjeriImaLiPotpunihKvadrata(vector<int> elementi) {
   for (int i = 0; i < elementi.size(); i++) {
      double korijenElementa = std::sqrt (elementi[i]);
      if (korijenElementa * korijenElementa == elementi[i]){
         return true;
      }
   }
   return false;
}

int main() {
   cout << "Unesite granice vektora: ";
   int n;
   cin >> n;
   vector<int> elementi;

   for (int i = 0; i < n; i++) {
      cout << "Unesite element: ";
      int x;
      cin >> x;
      elementi.push_back(x);

   }

   if (provjeriImaLiPotpunihKvadrata(elementi)) {
      cout << "Niz sadrzi potpune kvadrate.";
   } else cout << "Niz ne sadrzi potpune kvadrate.";

   return 0;
}