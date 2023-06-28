#include<iostream>

using namespace std;

int main() {
    int d, n, t;
    cin >> d >> n >> t; 
    
    int counter = 0;
    
    for (int i = 0; i < t; ++i) {
        int a;
        cin >> a;
        
        n -= d;
        n += a;
        
        if (n > 0) ++counter;
    
    }
    cout << counter << endl;
}
        
    
    
