#include<iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int lasthree;
    lasthree = n%1000;
    int x;
    
    cout << "nombres que acaben igual que " << n << ':' << endl;
    
    int counter = 0;
    
    while (cin >> x) {
        int last;
        last = x%1000;
        if (last == lasthree) {
            ++counter;
            cout << x << endl;
        }
    }
    cout << "total: " << counter << endl;
}
            
        
