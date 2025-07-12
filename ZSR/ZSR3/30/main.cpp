#include <iostream>

using std::cout, std::cin;

char intToASCII (int n) {
    return (static_cast<char>(n));
}

int main () {
    cout << "Unesi neki broj: ";
    int n;
    cin >>n;
    cout << "Znak koji ima ASCII šifru " << n << " je znak " << intToASCII(n);
}