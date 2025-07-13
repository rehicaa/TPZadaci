/* Napišite generičku funkciju sortirajPoPravilu.
Funkcija treba da prima dva parametra:
Prvi parametar je referenca na std::vector bilo kojeg tipa (std::vector<T>&).
Funkcija će sortirati ovaj vektor u mjestu (in-place), što znači da ne vraća novi vektor,
već modificira onaj koji je dobila.
Drugi parametar je pravilo za usporedbu koje će biti proslijeđeno kao lambda funkcija.
To pravilo odlučuje kako se dva elementa vektora uspoređuju.
Implementacija funkcije:
Unutar sortirajPoPravilu, trebate koristiti std::sort iz <algorithm> biblioteke da sortirate
proslijeđeni vektor. Kao treći argument funkciji std::sort proslijedit ćete lambda funkciju
koju ste dobili kao parametar. */
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using std::string, std::vector, std::cout, std::cin, std::endl;
template<typename Tip, typename Pravilo>

void sortirajPoPravilu (vector<Tip>& v, Pravilo sortiraj_po_pravilu) {
    std::sort(v.begin(), v.end(), sortiraj_po_pravilu);
}

void ispisiVektor (vector<string>& v) {
    for (const auto& rijec:v) {
        cout << rijec << " ";
    }
}

int main() {
    vector<string> rijeci = {"pas", "mačka", "konj", "miš", "slon", "zmija"};
    ispisiVektor(rijeci);

    sortirajPoPravilu(rijeci, [](const auto &s1, const auto &s2) {
        if (s1.length() != s2.length()) {
            return s1.length() < s2.length();
        }

            return s1 < s2;
    });

    cout << endl;
    cout << "Soritirane rijeci:\n";
    ispisiVektor(rijeci);

    return 0;
}
