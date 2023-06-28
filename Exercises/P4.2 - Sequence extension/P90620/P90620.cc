#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool peak_hunt = false;
    bool yield = false;
    bool word = false;
    int cmp = n; 
    
    while (n != 0) {
        
        if (n > cmp and n > 3143) {
            peak_hunt = true;
        }
        else if (yield) word = true;
        
        if (peak_hunt){
            yield = true;
        }
                
        
        cmp = n;
        cin >> n;
        
    }
    if (word) cout << "YES" << endl;
    else cout << "NO" << endl;
}
        
        
