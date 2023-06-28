#include<iostream>

using namespace std;

int main() {
    int f, c;
    
    cin >> f >> c;
    int value;
    
    for (int i = 0; i < f; ++i) {
        value = 1;
        for (int j = 0; j < c; ++j) {
            if (i >= j) {
                cout << (i - j)%10;
            } else {
                cout << (value)%10;
                ++value;
            }
        }
        cout << endl;
    }
}
    
