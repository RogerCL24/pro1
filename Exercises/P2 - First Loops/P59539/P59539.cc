#include<iostream>

using namespace std;

int main() {
    double n;
    cin >> n;
    double sum = 0;
    
    for (double i = 1;i <= n; ++i) {
        sum += 1/i;
    }
    cout.setf(ios::fixed);
    cout.precision(4);
    
    cout << sum << endl;
}
        
