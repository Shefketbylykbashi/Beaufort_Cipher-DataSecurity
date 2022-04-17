#include <iostream>
#include <string>
using namespace std;

class Key {
    public:
     string k;
    Key(string k) {
        for (int i = 0; i < k.size(); ++i) {
            if (k[i] >= 'A' && k[i] <= 'Z')
                this->k += k[i];
            else if (k[i] >= 'a' && k[i] <= 'z')
                this->k += k[i] + 'A' - 'a';
        }
    }

  string findKey(string t) {
        string output;
        for (int i = 0, j = 0; i < t.length(); ++i) {
            char c = t[i];
            if (c >= 'a' && c <= 'z')
                c += 'A' - 'a';
            else if (c < 'A' || c > 'Z')
                continue;
            output += (c + k[j] - 2 * 'A') % 26 + 'A'; //added 'A' to bring it in range of ASCII alphabet [ 65-90 | A-Z ]
            j = (j + 1) % k.length();
        }
        return output;
    }  
};
int main() {
    string teksti;
    string plain;
    cout << "Mire se erdhet ne programin per gjetjen e celsit!"<<endl;
    cout << "Shkruani plaintext-in: ";
    cin >> plain;
    cout << endl;
    cout << "Shkruani ciphertext-in: ";
    cin >> teksti;
    Key v(teksti);
    
string findKey = v.findKey(plain);
cout << "Celesi: " << findKey << endl;
}