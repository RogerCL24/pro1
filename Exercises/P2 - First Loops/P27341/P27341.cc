#include<iostream>

using namespace std;

int main() {
    int a, b;
    
    while (cin >> a >> b) {
        int cube = 0;
        cout << "suma dels cubs entre " << a << " i " << b << ": ";
        if (a > b) {
            cout << '0' << endl;
        }
        else {
            while (a <= b) {
                cube += a*a*a;
                ++a;
            }
            cout << cube << endl;
        }
    }
}
    
