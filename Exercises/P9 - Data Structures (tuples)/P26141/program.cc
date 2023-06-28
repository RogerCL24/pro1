#include <iostream>
#include <vector>
using namespace std;

struct Racional {
    int num, den;
};

int mcd(int a, int b) {
    if(b == 0) return a;
    else return mcd(b, a%b);
}

Racional racional(int n, int d) {
    Racional r;
    int mcdnd = mcd (n, d);
    
    r.num = n/mcdnd;
    r.den = d/mcdnd;
    if (r.den < 0) {
        r.num = -n/mcdnd;
        r.den = -d/mcdnd;
    }
    return r;
}

int main() {
    int n, d;
    cin >> n >> d;
    Racional r = racional(n, d);
    if (r.den <= 1) cout << r.num << endl;
    else cout << r.num << '/' << r.den << endl;
    
    string operacio;
    while (cin >> operacio >> n >> d) {
        if (operacio == "suma") {
            n = n*r.den;
            r.num = r.num*d;
            r.den = r.den*d;
            r = racional(r.num+n, r.den);
        }
        else if (operacio == "resta") {
            n = n*r.den;
            r.num = r.num*d;
            r.den = r.den*d;
            r = racional(r.num-n, r.den);
        }
        else if (operacio == "multiplica") {
            n = n*r.num;
            d = d*r.den;
            r = racional(n, d);
        }
        else if (operacio == "divideix") {
            r.num = d*r.num;
            r.den = n*r.den;
            r = racional(r.num, r.den);
        }
        if (r.den <= 1) cout << r.num << endl;
        else cout << r.num << '/' << r.den << endl;
    }
}
