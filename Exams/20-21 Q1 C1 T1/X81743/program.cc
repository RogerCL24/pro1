#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    char c1,c2;
    cin >> c1 >> c2;
    int counter = 0;
    
    for (int i = 0; i < n; ++i) {
        char seq;
        cin >> seq;
        
        if (seq >= c1 and seq <= c2) ++counter;
    }
    cout << counter << endl;
}
            
