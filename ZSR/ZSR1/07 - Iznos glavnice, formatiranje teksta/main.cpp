#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;

int main(){
     cout << "Unesite iznos glavnice, a zatim kamatnu stopu: " << endl;
        double glavnica, kamatnaStopa;
        cin >> glavnica;
        cin.ignore(10000, '\n');
        cin >> kamatnaStopa;

        double kamata = glavnica * kamatnaStopa / 100;
        double novaSvota = glavnica + kamata;

        cout << std::left << std::setw(20) << "Glavnica: " << std::right << std::setw(6) << glavnica << endl
        << std::left << std::setw(20) << "Kamatna stopa: " << std::right << std::setw(6) << kamatnaStopa << endl
        << std::left << std::setw(20) << "Kamata: " << std::right << std::setw(6) << std::fixed << std::setprecision(0) << kamata << endl
        << std::left << std::setw(20) << "Nova svota: " << std::right << std::setw(6) << std::fixed << std::setprecision(0) << novaSvota << endl;
  }