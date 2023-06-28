#include<iostream>

using namespace std;

int main() {
    int b, n;
    
    while (cin >> b >> n) {
        int counter = 0;
        
        while (n > 0) {
            n /= b;
            ++counter;
        }
        cout << counter << endl;
    }
}
        
            
