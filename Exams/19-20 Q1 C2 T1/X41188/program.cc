#include<iostream>
using namespace std;

bool is_univariate(int n) {
    int digit = n%10;
    
    while (n != 0) {
        if (n%10 != digit) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int pos = 1;
    int counter = 1;
    bool yep = false;
    int n;
    cin >> n;
    while (n != -1) {
        if (is_univariate(n) and not yep) {
            pos = counter;
            yep = true;
        }
        ++counter;
        cin >> n;
    }
    if (not yep) cout << 0 << endl;
    else cout << pos << endl;
}
