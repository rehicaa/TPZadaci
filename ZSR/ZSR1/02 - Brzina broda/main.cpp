#include <iostream>
const double morskaMilja = 1.852; // u kilometrima

int main (){
  int brzinaBrodaUCvorovima;
  std::cout << "Unesite brzinu broda u cvorovima: " << std::endl;
  std::cin >> brzinaBrodaUCvorovima;

  double brzinaBrodaUKilometrima = static_cast<double>(brzinaBrodaUCvorovima) * morskaMilja;

  std::cout << "Brzina broda u kilometrima je: " << brzinaBrodaUKilometrima << " km/h." << std::endl;

  }
