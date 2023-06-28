#include<iostream>

using namespace std;

void asterisck(int n) {
    if (n > 1) {
        asterisck(n - 1);
        
        for (int i = 0; i < n; ++i) cout << '*';
        
        cout << endl;
        
        asterisck(n - 1);
    }
    else cout << '*' << endl;
}
    
    
    
    
    
    
int main() {
    int n;
    cin >> n;
    asterisck(n);
}
