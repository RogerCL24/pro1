#include<iostream>

using namespace std;

int main() {
    int n;
    
    while (cin >> n) {
        cout << "divisors of " << n << ':';
        
        int root = 1;
        while (root*root < n) ++root;
        
        for (int i = 1; i <= root; ++i) { 
            if (n%i == 0)cout << ' ' << i;
        }
        for (int i = root - 1; i >= 1; --i) {
            if (n%i == 0 and n/i != root) cout << ' ' << n/i;
        }
        cout << endl;
    }
}
