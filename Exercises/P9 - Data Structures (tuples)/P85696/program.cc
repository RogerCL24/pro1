#include<iostream>

using namespace std;

struct Racional {
    int num, den;
};

int division(int a, int b) {
    if (b == 0) return a;
    
    return division(b, a%b);
}

Racional racional(int n, int d) {
    if (n == 0) d = 1;
    
    else {
        int div_num = division(n, d);
        
        n /= div_num;
        d /= div_num;
        
    }
    
    if (d < 0) {
        d = 0 - d;
        n = 0 - n;
    }
    
    Racional out;
    
    out.num = n;
    out.den = d;
    
    return out;
}
    
    
int main() {
    Racional r;
    
    cin >> r.num >> r.den;
    
    cout << racional (r.num, r.den).num << ' ' << racional (r.num, r.den).den << endl;
}
