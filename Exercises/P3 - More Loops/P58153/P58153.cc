#include<iostream>

using namespace std;

int main() {
    double n, m;
    
    while (cin >> n >> m) {
        double sum = 0;
        for (int i = m + 1; i <= n; ++i) {
            sum += 1/double(i);
        
        }
        cout.setf(ios::fixed);
        cout.precision(10);
        
        cout << sum << endl;
    }
}
        
        
