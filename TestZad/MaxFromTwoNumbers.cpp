#include <iostream>

int max(int a, int b) {
    if (a > b) return a;
    else return b;
}

int main(int a, int b) {
    std::cout << "Unesite 2 broja:" "\n";
    std::cin >> a >> b;
    std::cout << "Veci broj od ta dva je: " << max(a, b) << '\n';
}