#include<iostream>

using namespace std;

void factor (int n, int& f, int& q) {
    int i = 2;
    
    f = q = 0;
    
    while (i*i <= n) {
        int counter = 0;
        
        while (n%i == 0) {
            n /= i;
            ++counter;
            
            if (counter > q) {
                q = counter;
                f = i;
            }
        }
        
        ++i;
    }
    if (q == 0 and f == 0) {
        q = 1;
        f = n;
    }
}

    
        
    
    
    
int main() {
    int n, f, q;
    cin >> n;
    
    factor (n, f, q);
    
    cout << f << ' ' << q << endl;
}
