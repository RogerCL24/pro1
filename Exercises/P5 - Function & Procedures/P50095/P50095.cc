#include<iostream>

using namespace std;

bool is_prime (int n) {
    int i = 2;
    bool prime = (n > 1);
    while (prime and i*i <= n) {
        if (n%i == 0) prime = false;
        ++i;
    }
    return prime;
}
    
int main() {
    int n;
    
    while (cin >> n and is_prime(n)) {
        bool found = false;
        int i = 1;
        while (not found) {
            if (is_prime(n + i)) {
                cout << n + i << endl;
                found = true;
            }
            ++i;
        }
    }
}
    
        
