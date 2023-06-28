#include<iostream>

using namespace std;

int nombre_digits(int n) {
    if (n < 10) return 1;
    else return 1 + nombre_digits(n/10);
}

int main() {
    int n, f;
    cin >> n >> f;
    int s = f - 1;
    int x = nombre_digits(n);
    
    
    for (int i = 0; i < f; ++i) {
        for (int j = i + 1; j > 0; --j) {
            cout << n;
            if (j > 1) cout << '-';
        }
        for (int j = 0; j < ((x*s*2 + 2*s + 1) - (i*x*2 + i*2)); ++j) {
            cout << '.';
        }
        for (int j = i + 1; j > 0; --j) {
            cout << n;
            if (j > 1) cout << '-';
        }
        cout << endl;
    }
  
}
    
