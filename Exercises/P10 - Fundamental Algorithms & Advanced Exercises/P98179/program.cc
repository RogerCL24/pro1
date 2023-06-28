#include<iostream>
#include<vector>

using namespace std;

void insereix(vector<double>& v) {
    int n = v.size();
    for (int i = n - 1; i > 0; --i) {
        if (v[i] < v[i - 1]) {
            double aux = v[i];
            v[i] = v[i - 1];
            v[i - 1] = aux;
        }
    }
}
        
int main() {
    int n;
    cin >> n;
    
    vector<double> v (n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    
    insereix(v);
    
    for (int i = 0; i < n; ++i) cout << ' ' << v[i];
}
    
    
