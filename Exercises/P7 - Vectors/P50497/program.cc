#include<iostream>
#include<vector>

using namespace std;

bool is_palindrome(const string& s) {
    int n = s.size();
    
    bool palindrome = true;
    
    int i = 0;
    
    while (i < n/2 and palindrome) {
        if (s[i] != s[n - 1 - i]) palindrome = false;
        ++i;
    }
    
    return palindrome;
}

int main() {
    string c;
    
    cin >> c; 
    
    cout << is_palindrome(c) << endl;
}
    
    
    
    
