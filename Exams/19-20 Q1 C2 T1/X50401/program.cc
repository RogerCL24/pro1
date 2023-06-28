#include<iostream>
using namespace std;

bool is_nul (int a, int b, int c) {
    return a + c == b;
}
    
int main() {
    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; ++i) {
        int m, first;
        int nul = 0;
        cin >> m;
        cin >> first;
        bool fir = true;
        for (int j = 0; j < m - 1; ++j) {
            int num, second;
            cin >> num;
            
            if (not fir and first + num == second) ++nul;
            if (not fir) first = second;
                
            second = num;
            fir = false;
        }
        cout << nul << endl;
        total += nul;
       
    }
    
    cout << "Total: " << total << endl;
}
        
        
            
