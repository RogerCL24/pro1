#include<iostream>
#include<vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

bool same_col (const Matrix& m, int col1, int col2) {
    int f = m.size();
    for (int i = 0; i < f; ++i) {
        if (m[i][col1] != m[i][col2]) return false;
        
    }
   return true;
}
    
void read_matrix (Matrix& m) {
    int f = m.size();
    int c = m[0].size();
    
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) cin >> m[i][j];
    }
}

bool is_new(const Matrix& m, int i) {
    for (int j = 0; j < i; ++j) {
        if (same_col(m, j, i)) return false;
    }
    return true;
}

int main() {
    int f, c;
    while (cin >> f >> c) {
        Matrix m (f, Row(c));
        read_matrix(m);
        int counter = 0;
        for (int i = 0; i < c; ++i) {
            if (is_new(m, i)) ++counter;
        }
        cout << counter << endl;
    }
}
        
    
