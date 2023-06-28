#include<iostream>
#include<vector>

using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriz;

Matriz read_matriz(int f, int c) {
   Matriz m (f, Fila (c));
   for (int i = 0; i < f; ++i) {
       for (int j = 0; j < c; ++j) cin >> m[i][j];
   }
   return m;
}

int suma_sub_mat (const Matriz& m, int i, int j, int edge_i, int edge_j) {
    int suma = 0;
    if (edge_i == 0) {
        for (int k = 0; k <= i; ++k) {
            for (int w = j; w <= edge_j; ++w) suma += m[k][w];
        }
    }
    else {
        for (int k = i; k <= edge_i; ++k) {
            for (int w = 0; w <= j; ++w) suma += m[k][w];
        }
    }
    return suma;
}
    
int main() {
    int f, c;
    cin >> f >> c;
    Matriz m = read_matriz(f, c);
    
    int i, j;
    while (cin >> i >> j) {
        int sum1 = suma_sub_mat(m, i, j, 0, c - 1);
        int sum2 = suma_sub_mat(m, i, j, f - 1, 0);
        
        if (sum1 == sum2) cout << "si: " << sum1 << endl;
        else cout << "no: " << sum1 << ", " << sum2 << endl;
    }
}
        
        
