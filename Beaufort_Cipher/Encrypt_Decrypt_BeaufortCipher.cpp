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
        int offSet = 0;
        for (int j = start; j < start + 26; j++) {
            int letter = j % 26;
            if (alphabet[letter] == toupper(c1)) {
                break;
            }
            offSet++;
        }
        cipher += alphabet[offSet];

    }
    return cipher;
}


int main() {
    string text, key, out;
    int komanda;

    cout << "Mire erdhet ne programin per enkriptim dhe dekriptim te tekstit permes Beaufort Cipher!" << endl;
    cout << "Meny: " << endl;
    cout << "    --Shtypni 1 per enkriptim " << endl;
    cout << "    --Shtypni 2 per dekriptim " << endl;
    cin >> komanda;
    

    switch (komanda)
    {
    case 1:
        cout << "Jepni plaintext-in : ";
        cin >> text;
        cout << "Jepni celesin per enkriptim : ";
        cin >> key;
        out = beaufort(text, key);
        cout << "Ciphertext-i : " << out << "\n"; break;
    case 2: 
        cout << "Jepni Ciphertext-in : ";
        cin >> text;
        cout << "Jepni Celesin per dekriptim: ";
        cin >> key;
        out = beaufort(text, key);
        cout << "Plaintext-i: " << out << "\n"; break;

    default:
        cout << "Komand e gabuar!";
        break;
    }
    
}