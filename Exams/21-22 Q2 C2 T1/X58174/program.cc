#include<iostream>
#include<vector>

using namespace std;

int consolidation(vector<int>& v) {
    int counter = 0;
    int size = v.size();
    
    for(int i = 2; i < size; ++i) {
        if (v[i] > v[i - 1] and v[i] > v[i - 2]) ++counter;
    }
    return counter;
}
    

int main() {
    int p;
    cin >> p;
    
    int max = 0;
    string winner;
    
    string word;
    while (cin >> word) {
        vector<int> v (p);
        for (int i = 0; i < p; ++i) cin >> v[i];
        
        cout << word << ": " << consolidation(v) << endl;
        if (max == consolidation(v) and word < winner) {
            winner = word;
        }
        if (max < consolidation(v)) {
            max = consolidation(v);
            winner = word;
        }
    }
    
    cout << "----------" << endl;
    if (max == 0) cout << "no hay equipos" << endl;
    else cout << winner << ": " << max << endl;
}
    
    
