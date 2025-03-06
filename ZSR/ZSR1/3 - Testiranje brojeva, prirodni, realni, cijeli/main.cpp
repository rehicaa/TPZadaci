#include <iostream>

int main() {
  double broj;
  std::cout << "Unesite broj: " << std::endl;
  std::cin >> broj;

  if(std::cin.fail()){
    std::cout << "Uneseni podatak nije broj." << std::endl;
    return 1;
  }

  if (broj > 0) {
    std::cout << "Uneseni podatak je prirodan broj." << std::endl;
  }
  else if (broj = static_cast<int>(broj) && broj < 0) {
    std::cout << "Uneseni podatak je cijeli broj, ali nije prirodan." << std::endl;
  }

  /* if (broj != static_cast<int>(broj)) {
    std::cout << "Uneseni broj je realnog tipa." << std::endl;
  } else {
      std::cout<< "Uneseni broj je cijeli broj." << std::endl;
    }
*/

  return 0;
  }