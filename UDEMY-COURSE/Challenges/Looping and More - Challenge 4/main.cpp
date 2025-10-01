#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::vector;

int main() {

    vector<int> v1;
    cout << "How many elements do you want your vector to have? ";
    int brojElemenata; cin >> brojElemenata;
    for (int i = 0; i < brojElemenata; i++) {
        int element; cout << "Enter element at index " << (i + 1) << ": "; cin >> element;
        v1.push_back(element);
    }

    cout << "\nMenu: " << endl;
    cout << "--------------------" << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;

    char userChoice;
    do{
        cout << "\nChoose your option: ";
        cin >> userChoice;

    switch(userChoice) {
        case 'P':
        case 'p':
            cout << "Printed numbers: ";
            for (const int element : v1) {
                cout << element << " ";
            }
            break;
        case 'A':
        case 'a':
            cout << "Enter the number you want to add: ";
            int element; cin >> element;
            v1.push_back(element);
            break;
        case 'M':
        case 'm': {
            vector<int> v2 = v1;
            for (int i = 0; i < v2.size() - 1; i++) {
                int minIndeks = i;
                for (int j = i + 1; j < v2.size(); j++) {
                    if (v2.at(j) <= v2.at(minIndeks)) {
                        minIndeks = j;
                    }
                }
                int temp = v2.at(i);
                v2.at(i) = v2.at(minIndeks);
                v2.at(minIndeks) = temp;
            }
            if (v2.size() % 2 != 0) {
                cout << "Median of this vector is: " << (v2.at(v2.size()/2));
            } else {
                cout << "Median of this vector is: " << ((v2.at((v2.size() / 2) - 1) + v2.at((v2.size() / 2))) / 2.);
            }
            break;
        }
        case 'S':
        case 's': {
            int minBroj = v1.at(0);
            for (int i = 1; i < v1.size(); i++) {
                if (v1.at(i) < minBroj) {
                    minBroj = v1.at(i);
                }
            }
            cout << "The smallest number of the vector is: " << minBroj;
            break;
        }
        case 'L':
        case 'l': {
            int maxBroj = v1.at(0);
            for (int i = 1; i < v1.size(); i++) {
                if (v1.at(i) >= maxBroj) {
                    maxBroj = v1.at(i);
                }
            }
            cout << "The largest number of the vector is: " << maxBroj;
            break;
        }
        case 'q':
        case 'Q': {
            cout << "You have quit. Exiting application...";
            break;
        }
        default: cout << "Invalid choice." ;
    }
    } while (userChoice != 'Q' && userChoice != 'q');
}