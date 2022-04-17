#include <iostream>
using namespace std;

string beaufort(string text, string key) {
    string cipher;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < text.size(); i++) {
        char c0 = text[i];
        char c1 = key[i % key.size()];
        int start = 0;
        for (int j = 0; j < 26; j++) {
            if (alphabet[j] == toupper(c0)) {
                start = j;
                break;
            }
        }

    }
    return cipher;
}


int main() {
    
}