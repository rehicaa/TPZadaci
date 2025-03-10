#include <iostream>

int main() {
  double broj;
  std::cout << "Unesite broj: " << std::endl;
  std::cin >> broj;

  if(!std::cin){
    std::cout << "Uneseni podatak nije broj." << std::endl;
    return 1;
  }
  if (broj == static_cast<int>(broj) && broj <= 0) {
    std::cout << "Uneseni podatak je cijeli broj, ali nije prirodan." << std::endl;
  }

  else if (static_cast<int>(broj) != broj) {
    std::cout << "Uneseni broj je realan, ali nije cijeli." << std::endl;
  }

  else if (broj > 0) {
    std::cout << "Uneseni podatak je prirodan broj." << std::endl;
  }

  return 0;
}