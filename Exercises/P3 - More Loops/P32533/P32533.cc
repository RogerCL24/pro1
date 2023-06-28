#include<iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int aux = n;

    for (int  i = 0; i < n; ++i) {
        --aux;
        for(int j = aux; j > 0; --j) cout << '+';
        cout << '/';
        for (int j = n - i; j < n; ++j) cout << '*';
        cout << endl;
    }
}
    
        
