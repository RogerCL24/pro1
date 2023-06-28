#include<iostream>
#include<vector>

using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriz;


int main() {
    int n, m;
    
    cin >> n >> m;
    
    Matriz mat (n, Fila(m));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> mat[i][j];
    }
    string word;
    
    while (cin >> word) {
        int a, b;
        if (word == "row") {
            cin >> a;
            cout << "row " << a << ':';
            for (int i = 0; i < m; ++i) cout << ' ' << mat[a - 1][i];
        }
        else if (word == "column") {
            cin >> a;
            cout << "column " << a << ':';
            for (int i = 0; i < n; ++i) cout << ' ' << mat[i][a - 1];
        }
        else {
            cin >> a >> b;
            cout << "element " << a << ' ' << b << ": " << mat[a - 1][b - 1];
        }
        cout << endl;
    }
        
}
        
