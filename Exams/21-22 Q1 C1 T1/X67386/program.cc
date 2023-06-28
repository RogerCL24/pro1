#include<iostream>

using namespace std;

int main() {
    string p;
    cin >> p;
    
    string word;
    int counter = 0;
    bool found = false;
    
    while (cin >> word and not found) {
        ++counter;
        if (word == p) found = true;
    }
    if (found) cout << counter << endl;
    else cout << "No existe" << endl;
 }
        
