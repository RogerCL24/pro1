#include<iostream>

using namespace std;

int main() {
    char letter;
    cin >> letter;
    
    if (letter >= 'a' and letter <= 'z') cout << char(letter - 'a' + 'A') << endl;
    
    else cout << char(letter - 'A' + 'a') << endl;
}
