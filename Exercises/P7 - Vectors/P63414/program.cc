#include<iostream>
#include<vector>

using namespace std;

void frecuence(vector<int> v) {
    
    int size = v.size();
    
    vector<int> c (1001, 0);
    
    for (int i = 0; i < size; ++i) ++c[(v[i]%10000)];
    
    for (int i = 0; i < 1001; ++i) {
        if (c[i] != 0) cout << 1000000000 + i << " : " << c[i] << endl;
    }
}
    
    
    
int main() {
    int n;
    cin >> n;
    
    vector<int> v (n);
    
    for (int i = 0; i < n; ++i) cin >> v[i];
    
    frecuence(v);
}
    
    
    
