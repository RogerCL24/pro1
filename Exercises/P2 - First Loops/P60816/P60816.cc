#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int hexa = 0;
    
    if (n == 0 or n == 1) cout << n;
    else {
        while (n != 0) {
            hexa = n%16;
            n /= 16;
            
            if (hexa < 10) cout << hexa;
            
            else cout << char(hexa + 'A' - 10);
        
        }
    }
    cout << endl;
    
}
