#include <vector>
#include <iostream>
#include <stdexcept>
#include <new>

using std::cout, std::cin, std::vector, std::endl, std::bad_alloc;
template<typename tip>
tip* kreirajNiz(int brojElemenata, tip element) {
    if (brojElemenata <= 0) {
        return nullptr;
    }

    tip* pNiz = nullptr;
    try {
        pNiz = new tip[brojElemenata];
        for (int i = 0; i < brojElemenata; i++) {
            pNiz[i] = element;
        }
    } catch (bad_alloc& e) {
        cout << "Greska pri alociranju memorije!";
    }

    return pNiz;
}

int main () {
    try {
        int *nizIntova = kreirajNiz(10, 3);
        for (int i = 0; i < 10; i++) {
            cout << nizIntova[i];
        }

        delete nizIntova;

        const char** nizPokazivaca = kreirajNiz(5, "hello");
        std::cout << "\nKreiran je niz pokazivaca:" << std::endl;
        for (int i = 0; i < 5; i++) {
            std::cout << nizPokazivaca[i] << " ";
        }
        std::cout << std::endl;

        delete[] nizPokazivaca;


    } catch (bad_alloc& e) {
        cout << e.what() << endl;
    }

    return 0;
}