#include <iostream>
#include <stack>

using std::cout, std::cin, std::endl, std::stack;

stack<double>vratiStekPomnozenParametrom(stack<double> s, int parametar) {
    stack<double>rezultatniStek;
    while (!s.empty()) {
        double broj = s.top() * parametar;
        rezultatniStek.push(broj);
        s.pop();
    }
    return rezultatniStek;
    }


int main() {
    stack<double>stek;
    stek.push(2);
    stek.push(5);
    stek.push(3);
    stek.push(4);
    auto stekFinal = vratiStekPomnozenParametrom(stek, 3);

    while (!stekFinal.empty()) {
        cout << stekFinal.top() << " ";
        stekFinal.pop();
    }
}