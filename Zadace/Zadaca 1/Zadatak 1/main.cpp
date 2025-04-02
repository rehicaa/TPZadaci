//TP 2024/2025: Zadaća 1, Zadatak 1
#include <iostream>
#include <cmath>
#include <vector>
using std::cout;
using std::cin;
using std::vector;
using std::endl;


int CiklickaPermutacija(vector<int>prviNiz, vector<int>drugiNiz){

if(drugiNiz.size() != prviNiz.size()){
    return -1;
}
vector<int> dupliraniPrviNiz = prviNiz;
dupliraniPrviNiz.insert(dupliraniPrviNiz.end(), prviNiz.begin(), prviNiz.end());

for (int i = 0; i < prviNiz.size(); i++){
    bool postojiPermutacija = true;
    for (int j = 0; j < prviNiz.size(); j++){
        if(dupliraniPrviNiz.at(i+j) != drugiNiz.at(j)){
            postojiPermutacija = false;
            break;
        }
    }

    if (postojiPermutacija){
                return i;
           }
        }
    return -1;
}

vector<int>unesiElementeVektora (){
    vector<int>finalniNiz;
    int element;
    while(cin >> element){
        finalniNiz.push_back(element);
    }
    cin.clear();
    cin.ignore(10000, '\n');

    return finalniNiz;
}

int main ()
{
    cout << "Prva sekvenca: ";
    vector<int>prviNiz = unesiElementeVektora();

    cout << "Druga sekvenca: ";
    vector<int>drugiNiz = unesiElementeVektora();

    if(CiklickaPermutacija(prviNiz,drugiNiz) > -1){
        cout << "Druga sekvenca je ciklicka permutacija prve s pomakom " << CiklickaPermutacija(prviNiz, drugiNiz) << "." << endl;
    } else cout << "Druga sekvenca nije ciklicka permutacija prve.";

return 0;
}