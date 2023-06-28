#include<iostream>

using namespace std;

int main() {
    int n; 
    cin >> n;
    
    if (n == 0) cout << n << endl;
    else {
        while (n > 0) {
            int base = 0;
            base = n%2;
            n /= 2;
            
            cout << base;
        }
        cout << endl;
    }
}
