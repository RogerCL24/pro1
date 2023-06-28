#include<iostream>

using namespace std;

int main () {
    char letter;
    bool counter = false;
    
    
    while (cin >> letter and letter != '.') {
        if (letter == 'a') counter = true;
    }
    if (counter) cout << "yes" << endl;
    else cout << "no" << endl;
}
