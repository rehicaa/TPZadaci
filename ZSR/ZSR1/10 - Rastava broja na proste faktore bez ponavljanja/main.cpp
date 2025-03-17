#include <iostream>
using std::endl;
using std::cin;
using std::cout;

void rastaviNaProsteFaktore(int broj) {
    int faktor = 2;

    while (broj > 1) {
        while (broj % faktor == 0) {
            cout << faktor << " ";
            broj = broj / faktor;
        }
        faktor= faktor + 1;
    }
}

int main(){
    int broj;
    cout << "Unesi broj koji zelis rastaviti na proste faktore: ";
    cin >> broj;

    if (broj < 2) {
        cout << "Unesite broj veći od 1." << endl;

    } else rastaviNaProsteFaktore(broj);

}
