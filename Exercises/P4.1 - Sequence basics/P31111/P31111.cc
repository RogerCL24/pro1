#include<iostream>

using namespace std;

int main() {
    char symbol;
    int counter = 0;
    
    while (cin >> symbol and counter >= 0) {
        if (symbol == '(') ++counter;
        else --counter;
    }
    if (counter == 0) cout << "yes" << endl;
    else cout << "no" << endl;
}
        
