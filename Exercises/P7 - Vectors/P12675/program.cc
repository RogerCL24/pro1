#include<iostream>
#include<vector>

using namespace std;

int common_elements(const vector<int>& X, const vector<int>& Y) {
    int n1 = X.size();
    int n2 = Y.size();
    int counter = 0;
    
    int j = 0;
   for (int i = 0; i < n1; ++i) {
        bool found = false;
        while (j < n2 and not found and X[i] >= Y[j]) {
            if (X[i] == Y[j]) {
                ++counter;
                found = true;
            }
            ++j;
        }
    }
    return counter;
}

int main() {
    int n1;
    cin >> n1;
        
    vector<int> v1 (n1);
    for (int i = 0; i < n1; ++i) cin >> v1[i]; 
            
    int n2;
    cin >> n2;
        
    vector<int> v2 (n1);
    for (int i = 0; i < n2; ++i) cin >> v2[i]; 
    
    cout << common_elements(v1, v2) << endl;
}
        
        
        
