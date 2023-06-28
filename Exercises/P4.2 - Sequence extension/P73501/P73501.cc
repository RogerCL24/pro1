#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        int counter = 0;
        int cmp = 0;
        cmp = a;
        
        while (a != 0){
            
            if (a > cmp) ++counter;
            
            cmp = a;
            
            cin >> a;
        }
        cout << counter << endl;
    }
}
            
            
        
