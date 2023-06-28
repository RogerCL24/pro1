#include<iostream>

using namespace std;

int sum_dig (int n) {
    if (n < 10) return n;
    else return n%10 + sum_dig(n/10);
}

int main() {
    int n, prev;
    bool first = true;
    int counter = 0;
    while (cin >> n) {
        int a = sum_dig(n);
        if (first) {
            prev = n;
            first = false;
        }
        if (prev%a == 0) ++counter;
        
        prev = n;
    }
    cout << counter - 1 << endl;
}
        
