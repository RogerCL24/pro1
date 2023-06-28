#include<iostream>
#include<vector>
#include<string>

using namespace std;

const int LENGTH_ALPHABET = 'z' - 'a' + 1; 

char most_frequent_letter(const string& s) {
    int size = s.size();
    
    string alpha (LENGTH_ALPHABET, '0');
    
    for (int  i = 0; i < size; ++i) ++alpha[s[i] - 'a'];
    
    char frequent = '0';
    int letter = 0;
    
    for (int i = 0; i < LENGTH_ALPHABET; ++i) {
        if (alpha[i] > frequent) {
            frequent = alpha[i];
            letter = i;
        
        }
    }
    
    return char(letter + 'a');
}
    
            
int main() {
    int n;
    cin >> n;
    
    vector<string> v(n);
    
    double average = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        average += v[i].size();
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    
    double length = double(average/n);
    
    cout << length << endl;
    
    for (int i = 0; i < n; ++i) {
        if (length <= v[i].size()) {
            cout << v[i] << ": " << most_frequent_letter (v[i]) << endl;
        }
    }
}
        
        
    
    
    

    
    
    
