#include<iostream>
#include<math.h>

using namespace std;

int square (int n) {
    return n*n;
}

double square_root (double n) {
    return sqrt(n);
}


int main() {
    double n;
    
    while (cin >> n) {
        cout << square(n) << ' ';
        
        cout.setf(ios::fixed);
        cout.precision(6);
        cout << square_root(n) << endl;
    }
}

