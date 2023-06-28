#include<iostream>
#include<vector>

using namespace std;

vector<bool> ramps_pos(const vector <int>& V) {
    int size = V.size();
    vector<bool> ramp(size, false);
    
    for (int i = 0; i < size - 2; ++i) {
        if((V[i] < V[i + 1] and V[i + 1] < V[i + 2]) or (V[i] > V[i + 1] and V[i + 1] > V[i + 2])) ramp[i] = true;
    }
    return ramp;
}

int pot_conflictive(const vector <bool>& B) {
    int counter = 0;
    int size = B.size();
    
    for (int i = 0; i < size; ++i) {
        if (B[i] and B[i + 1]) ++counter;
        if (B[i] and B[i + 2]) ++counter;
    }
    return counter;
}
    
    
int main() {
    int n;
    
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        
        cout << "positions with a ramp:";
        
        vector<bool> a = ramps_pos(v);
        
        int size = a.size();
        
        for (int i = 0; i < size; ++i) {
            if (a[i]) cout << ' ' << i;
        }
        cout << endl;
        cout << "potentially conflictive: " << pot_conflictive(a) << endl;
        cout << "---" << endl;
    }
}
        
