#include<iostream>

using namespace std;

int main () {
    int b;
    cin >> b;
    
    int n;
    while (cin >> n) {
        cout << n << ": ";
        
        int sum = 0;
        
        while (n > 0) {
           sum += n%b;
           n /= b;
        }
        cout << sum << endl;
    }
}
            
        
