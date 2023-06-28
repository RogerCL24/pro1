#include<iostream>
#include<vector>

using namespace std;

bool equal (vector<int>& v) { 
    int size = v.size();
    
    bool found = false;
    
    int sum = 0;
    
    for (int i = 0; i < size; ++i) sum += v[i];
 
    int i = 0;
    while (i < size and not found) {
        if (sum - v[i] == v[i]) found = true;
        ++i;
    }
    return found;
}
            
            

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
    
        for (int i = 0; i < n; ++i) cin >> v[i];
        
        if (equal(v)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
        
        
        
