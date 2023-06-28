#include<iostream>

using namespace std;

int main () {
    int r, c;
    cin >> r >> c;
    
    int coins = 0;
    
    for (int i = 0; i < r; ++i) {
        char x;
        for (int j = 0; j < c; ++j) {
            cin >> x;
            coins += x - ('0');
        }
    }
    cout << coins << endl;
}
            
