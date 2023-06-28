#include<iostream>

using namespace std;

int main() {
    int n;
    
    while (cin >> n) {
        int max = 0;

        
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            if (i == 0) max = a;
            
            
            if (a >= max) max = a;
            
        }
        cout << max << endl;
    }
}
        
