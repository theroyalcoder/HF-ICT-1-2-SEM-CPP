#include <iostream>
using namespace std;

void encrypt(char *, int);
void decrypt(char *, int);

void encrypt(char *word, int key) {
    int temp(0);

    for (int i = 0; i < 20 && word[i]!='\0' ; i++) {
        if (word[i] - key > 122) {
            temp = word[i]+ key;
            temp = temp -58;
            word[i] = (char)temp;
        } else {
            word[i] += key;
        }
    }
    for (int j = 0; j < 20 && word[j]!='\0' ; j++) {
        cout << word[j];
    }
}

void decrypt(char *word, int key) {
    int tmp1(0);
    for(int i = 0 ; i < 20 && word[i]!='\0'; i++ ) {
        if(word[i] - key <65){
            tmp1 = word[i]- key;
            tmp1 = tmp1 +58;
            word[i] = tmp1;
        }
        else
            word[i] -= key;
    }
}

int main() {
    char out[20];
    int key(0);

    cout << "Wort eingeben: ";
    cin >> out;

    cout << "Schluessel eingeben: ";
    cin >> key;

    encrypt(out, key);

    cout << out << endl;

    decrypt(out+0, key);

    cout << out << endl;

    return 0;
}