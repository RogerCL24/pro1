#include<iostream>

using namespace std;

int main () {
    int n;
    
    while (cin >> n) {
        for (int i = 0; i < n; ++i) {
            for (int j = n - i; j > 1; --j) cout << ' ';
            for (int j = 0; j < n + 2*i; ++j) cout << 'X';
            cout << endl;
        }
            
        for (int i = 0; i < n - 2; ++i) {
            for (int j = 0; j < 3*n - 2; ++j) {
                cout << 'X';
            }
            cout << endl;            
        }
        
        for (int i = 0; i < n; ++i) {
            for (int j = n - i; j < n; ++j) cout << ' ';
            for (int j = 3*n - 2; j > i*2; --j) cout << 'X';
            cout << endl;
        }
        cout << endl;
    }
}
            
            
            
