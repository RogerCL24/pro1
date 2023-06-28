#include<iostream>
#include<vector>

using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

bool diagonal_creixent (Matrix& v, int f, int c, int base) {
    int fils = v.size();
    int cols = v[0].size();
    
    bool upper_right = true;
    bool upper_left = true;
    bool bottom_left = true;
    bool bottom_right = true;
    
    int i = f - 1;
    int j = c + 1;
    //diagonal arriba-derecha
    while (i >= 0 and j < cols and upper_right) {
        if (v[f][c] >= v[i][j]) upper_right = false;
        else v[f][c] = v[i][j];
        ++j;
        --i;
    }
    
    v[f][c] = base;
    i = f - 1;
    j = c - 1;
    //diagonal arriba-izquierda
    while (i >= 0 and j >= 0 and upper_left) {
        if (v[f][c] >= v[i][j]) upper_left = false;
        else v[f][c] = v[i][j];
        --j;
        --i;
    }
    
    v[f][c] = base;
    i = f + 1;
    j = c + 1;
    //diagonal abajo-derecha
    while (i < fils and j < cols and bottom_right) {
        if (v[f][c] >= v[i][j]) bottom_right = false;
        else v[f][c] = v[i][j];
        ++i;
        ++j;
    }
    
    v[f][c] = base;
    i = f + 1;
    j = c - 1;
    //diagonal abajo-izquierda
    while (i < fils and j >= 0 and bottom_left) {
        if (v[f][c] >= v[i][j]) bottom_left = false;
        else v[f][c] = v[i][j];
        ++i;
        --j;
    }
    
    if (upper_left and upper_right and bottom_left and bottom_right) return true;
    else return false;
}
        
int main() {
    int n, m;
    
    while (cin >> n >> m) {
        
        Matrix v(n, Row(m));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) cin >> v[i][j];
        }
        
        int f, c;        
        cin >> f >> c;
        int base = v[f][c];
        if (diagonal_creixent (v, f, c, base)) cout << "si" << endl;
        else cout << "no" << endl;
    }
}
        
        
        
        
