#include <iostream>
#include <string>
using std::cout, std::cin, std::string, std::endl;

string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
string key = "XYZABCDEFGHIJKLMNOPQRSTUVWxyzabcdefghijklmnopqrstuvw";

void cypherMessage (string &s) {
    for (int i = 0; i < s.length(); i++) {;
        int pos = alphabet.find(s[i]);
        if (pos != string::npos) {
            s[i] = (key[pos]);
        }
    }
}

void decypherMessage (string &s) {
    for (int i = 0; i < s.length(); i++) {
        int pos = key.find(s[i]);
        if (pos != string::npos) {
            s[i] = alphabet[pos];
        }
    }
}

int main() {
    cout << "Type a message you would like to cypher: ";
    string s1;
    std::getline(cin, s1);
    cout << "\nEncrypting message..." << endl;
    cypherMessage(s1);
    cout << s1;
    cout << endl;
    cout << "\nDecrypting message..." << endl;
    decypherMessage(s1);
    cout << s1;

    return 0;
}