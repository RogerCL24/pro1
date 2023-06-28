#include<iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int c;
    
    if (x <= y) {
        c = x;
        x = y;
        y = c;
    }
    while (x >= y) {
        cout << x << endl;
        --x;
    }
}
        
