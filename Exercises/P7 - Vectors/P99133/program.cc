#include<iostream>
#include<vector>
#include<string>

using namespace std;

void reverse (const string& s) {
    int n = s.size();
    
    for (int i = n - 1; i >= 0; --i) cout << s[i];
    
    cout << endl;
}
    


int main() {
    int n;
    cin >> n;
    
    vector <string> sent (n);
    
    for (int i = 0; i < n; ++i) {
        cin >> sent[i];
    }
    
    for (int i = n - 1; i >= 0; --i) {
        reverse(sent[i]);
    }
}
    
    
