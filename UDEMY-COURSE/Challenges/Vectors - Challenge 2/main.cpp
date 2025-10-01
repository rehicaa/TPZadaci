#include <iostream>
#include <vector>
using std::cout, std::cin, std::vector, std::endl;
typedef vector<vector<int>> matrica;

int main() {
    vector<int> vektor1;
    vector<int> vektor2;

    vektor1.push_back(10); vektor1.push_back(20);
    for (int x : vektor1) {
        cout << x << " ";
    }
    cout << "\nVelicina prvog vektora je: " << vektor1.size();
    cout << endl;

    vektor2.push_back(100); vektor2.push_back(200);
    for (int x : vektor2) {
        cout << x << " ";
    }

    cout << "\nVelicina drugog vektora je: " << vektor2.size();
    cout << endl;

    matrica vector_2d; vector_2d.push_back(vektor1); vector_2d.push_back(vektor2);

    for (int i = 0; i < vector_2d.size(); i++) {
        for (int j = 0; j < vector_2d[0].size(); j++) {
            cout << vector_2d.at(i).at(j) << " ";
        }
    }
    vector_2d.at(0).at(0) = 1000;
    cout << endl;

    for (int i = 0; i < vector_2d.size(); i++) {
        for (int j = 0; j < vector_2d[0].size(); j++) {
            cout << vector_2d.at(i).at(j) << " ";
        }
    }

    cout << endl;

    for (int x : vektor1) {
        cout << x << " ";
    }


    return 0;
}