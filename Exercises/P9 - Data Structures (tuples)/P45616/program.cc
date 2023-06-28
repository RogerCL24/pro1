#include<iostream>

using namespace std;

struct Rellotge {
    int h;
    int m;
    int s;
};

Rellotge mitja_nit() {
    Rellotge r;
    
     r.h = 0;
     r.m = 0;
     r.s = 0;
    return r;
}

void incrementa(Rellotge& r) {
    
    ++r.s;
    if (r.s == 60) {
        r.s = 0;
        ++r.m;
        if (r.m == 60) {
            r.m = 0;
            ++r.h;
            if (r.h == 24) r.h = 0;
        }
    }
}

void escriu (const Rellotge& r) {
    if (r.h < 10) cout << 0 << r.h;
    else cout << r.h;
    cout << ':';
    if (r.m < 10) cout << 0 << r.m;
    else cout << r.m;
    cout << ':';
    if (r.s < 10) cout << 0 << r.s << endl;
    else cout << r.s << endl;
}
    
int main() {
   
    Rellotge r;
    
    cin >> r.h >> r.m >> r.s;
    
    Rellotge s = mitja_nit();
   cout << s.h << ' ' << s.m << ' ' << s.s << endl;
   
   incrementa(r);
   
   cout << r.h << ' ' << r.m << ' ' << r.s << endl;
   
   escriu (r);
}
    
