#include<iostream>

using namespace std;

int main() {
    char letter;
    cin >> letter;
    
    if (letter >= 'a' and letter <= 'z') {
        cout << "lowercase" << endl;
        if (letter == 'a' or letter == 'e' or letter == 'o' or letter == 'i' or 
            letter == 'u') cout << "vowel" << endl;
        else cout << "consonant" << endl;
    }
    
    else {
        cout << "uppercase" << endl;
        if (letter == 'A' or letter == 'E' or letter == 'I' or letter == 'O' or 
            letter == 'U') cout << "vowel" << endl;
        else cout << "consonant" << endl;
    }
}
