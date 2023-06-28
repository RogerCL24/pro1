#include<iostream>

using namespace std;

int main() {
    double n;
    
    cin >> n;
    
    if (n - int(n) != 0.0) {
        cout << int(n) << ' ' << int(n) + 1 << ' ';
        
        if (n - int(n) >= .5) cout << int(n) + 1 << endl;
        else cout << int(n) << endl;
    } 
    
    else cout << int(n) << ' ' << int(n) << ' ' << int(n) << endl;
}
