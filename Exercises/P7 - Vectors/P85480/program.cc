#include<iostream>
#include<vector>

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
    
bool sum_prime(vector<int>& v) {
    
    int size = v.size();
    
    bool indeed = false;
    
    int i = 0;

    while (i < size and not indeed) {
        for (int j = 0; j < size; ++j) {
            if (is_prime(v[i] + v[j]) and i != j) indeed = true;
        }
        ++i;
    }
    return indeed;
}
    
int main() {
    int n;
    
    while (cin >> n) {
        vector<int> v(n);
        
        for (int i = 0; i < n; ++i) cin >> v[i];
        
        if (sum_prime(v)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
