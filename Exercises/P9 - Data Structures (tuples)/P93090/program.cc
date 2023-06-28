#include<iostream>

using namespace std;

struct Fraccio {
    int num, den;
};

int mcd (int a, int b) {
    if (b == 0) return a;
    
    return mcd (b, a%b);
}

void result (Fraccio& f) {
    int mcdAB = mcd(f.num, f.den);
    
    f.num /= mcdAB;
    f.den /= mcdAB;
}

Fraccio suma(const Fraccio& x, const Fraccio& y)  {

    Fraccio c;
    
    if (x.den == y.den) {
        c.num = x.num + y.num;
        c.den = x.den;
    }
    else {
        int n1, n2;
        c.den = x.den * y.den;
        n1 = x.num * y.den;
        n2 = y.num * x.den;
        
       c.num = n1 + n2;
       
    }
    return c;
}
    
int main() {
    Fraccio f;
    Fraccio r;
    int n, d;
    char y;
    bool first = true;
    bool buddy = true;
    
    while (buddy) {
        cin >> n >> y >> d >> y;
        if (y == '=') buddy = false;
        if (first) {
            f.num = n;
            f.den = d;
        }
        r.num = n;
        r.den = d;
        result (r);
        
        if (not first) f = suma (f, r);
        result (f);
              
        first = false;     
    }

    cout << f.num << '/' << f.den << endl;
}
        
