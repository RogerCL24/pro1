#include<iostream>

using namespace std;

int main() {
    int n;
    bool printendl = false;
    while (cin >> n) {
        if (printendl) cout << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << n;
            }
            cout << endl;
        }
        printendl = true;
    }
}
        
            
