#include<iostream>
#include<vector>

using namespace std;

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2) {
    int n1 = v1.size();
    int n2 = v2.size();
    
    int n3 = n1 + n2;
    
    vector<int> v3 (n3);
    
    for (int i = 0; i < n1; ++i) v3[i] = v1[i];
    for (int i = 0; i < n2; ++i) v3[i + n1] = v2[i];
    
    return v3;
}
    
int main() {
    int n1;
    cin >> n1; 
    
    vector<int> v1 (n1);
    for (int i = 0; i < n1; ++i) cin >> v1[i];
    
    int n2;
    cin >> n2; 
    
    vector<int> v2 (n2);
    for (int i = 0; i < n2; ++i) cin >> v2[i];
    
    vector<int> v3 = concatenation(v1, v2);
    int size = v3.size();
    for (int i = 0; i < size; ++i) cout << v3[i] << ' ';
    cout << endl;
}
    
    
    
    
