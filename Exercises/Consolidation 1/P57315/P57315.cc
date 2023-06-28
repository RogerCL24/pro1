#include<iostream>

using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    
    int max, mid, min;
    
    char A, B, C;
    cin >> A >> B >> C;
    
    if (a > b) max = a;
    else max = b;
    if (c > max) max = c;
    
    if (a < b) min = a;
    else min = b;
    if (c < min) min = c;
    
    mid = a + b + c - min - max;
    
    a = min;
    b = mid;
    c = max;
    
    if (A == 'A') {
        if (B == 'B') cout << a << ' ' << b << ' ' << c << endl;
        else cout << a << ' ' << c << ' ' << b << endl;
    }
    else if (A == 'B') {
        if (B == 'A') cout << b << ' ' << a << ' ' << c << endl;
        else cout << b << ' ' << c << ' ' << a << endl;
    }
    else { 
        if (B == 'A') cout << c << ' ' << a << ' ' << b << endl;
        else cout << c << ' ' << b << ' ' << a << endl;
    }
}
        
