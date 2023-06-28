#include<iostream>

using namespace std;

int main() {
    int n, m;
    
    bool printendl = false;
    
    while (cin >> n >> m) {
        if (printendl) cout << endl;
        int var = 9;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (var < 0) var = 9;
                cout << var;
                --var;
            }
            cout << endl;
        }
        printendl = true;
    }
}
